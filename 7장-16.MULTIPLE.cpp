//7��-16.MULTIPLE.CPP
//���� ����� �� ���� ������ ���� �ִ� program

#include <iostream>
using namespace std;
#include <cstring>
#include <string>

//Person�� ����ϴ� class ����
class Person{
    string name ;
    string address ;
    int addrdef ;	//���� ��: ���ǵ� �ּ�
public:
    Person (string n) : name (n){
        addrdef = 0 ;
    }

    Person (string n, string a) :name (n) ,address (a){
        addrdef = 1 ;
    }

    void Address (string a){
        address = a ;
        addrdef = 1 ;
    }

    string Address ( ){
        return address ;
    }

    void Name (string n){
        name = n ;
    }

    string Name ( ){
        return name ;
    }

    virtual void Print ( ){
    cout << "Person::Print() - "<< name << endl ;

    //�ּҴ� ���ǵǾ��� ���� �μ�ȴ�.
    if (addrdef)
        cout << address << endl ;
    }
} ;

//����� ������ �����͸� �����ϰ� �ִ� class
class JuriData{
    string juriCode ;    //������ code(��ȸ�����ȣ�� �� �ִ�)
public:
    JuriData (string jc) : juriCode (jc)
    { }

    string JuriCode ( ){
        return juriCode ;
    }
    void JuriCode (string jc){
        juriCode = jc ;
    }

    void Print ( ){
        cout << "JuriData::Print() - Juridical code: " << juriCode << endl ;
    }
} ;

//class Person�� JuriData�κ��� ������ class JuriPerson
//������ �������� ����� ����Ѵ�.
class JuriPerson : public Person, public JuriData{

public:
    JuriPerson (string n, string jc) : Person (n) ,JuriData (jc)
    { }

    JuriPerson(string n, string a, string jc) : Person (n,a), JuriData (jc)
    { }

    void Print ( ){
        cout<<"JuriPerson::Print() -"<<endl;
        Person :: Print ( ) ;
        JuriData :: Print ( ) ;
    }
} ;

//���ƾ� 20���� �׷��� �����ϴ� class

class PeopleSet{
    Person *group [20] ;
    int number ;

public:
    PeopleSet () :
    number (0)
    { }

    void AddP (Person * p){
        group [number] = p ;
        number ++ ;
    }

    Person * SelectP (int n){
        return group [n] ;
    }

    int MembersNumber ( ){
        return number ;
    }

    void Print ( ){
        cout<< "PeopleSet::Print() - The group is made of " << number << " members:" << endl ;
        for (int i = 0; i < number; i++){
            //print a sequence number, a delimeter
            //and member's data
            cout << (i+1) << "." << "\t" ;
            group [i] -> Print ( ) ;
        }
    }
} ;

//���� ���: �� ���� ȸ��(company)�� �������� entity�� 
//(�Ǵ� ���) �ش�ǳ� ���� �� �ڽ��� �������� �����͸� ���� �ִ�
//��� �׷� �Ǵ� ȸ����� �׷��̴�
class Company : public PeopleSet, public JuriPerson{
    string companyName ;
    Person * leader ;

public:
    Company (string s, string n, string jc) : JuriPerson             (n, jc), companyName (s){
        leader = new Person ("undefined") ;
    }
    void CompanyName (string cn){
        companyName = cn ;
    }

    string CompanyName ( ){
        return companyName ;
    }

    Person * Leader ( ){
        return leader ;
    }
  
    void Leader (Person * p){
        leader = p ;
    }

    void Print ( ){
        cout << "Company::Print() - " << companyName << endl << endl;
        JuriPerson :: Print ( );
        PeopleSet :: Print ( );
    }
};
//��� ���ǵ� class�� ��뿡 ���� �׽�Ʈ program
//�� ���� ������ ���� �ִ� ȸ�� ��ü�� �����.
void main(){
    //ȸ��� �ּҸ� �����Ѵ�
    Company a ("PDC", "Penguin Dalambertian Club", "PDCPOLI86");
    a.Address ("by Room B67, Polytechnic of Milan") ;
    //���ε��� ȸ�� ��ü�� �߰��Ѵ�.
    a.AddP (new JuriPerson ("Marco", "MRCBRT34")) ;
    a.AddP (new JuriPerson ("Luca", "LCANNN74")) ;
    a.AddP (new JuriPerson ("Andrea", "NDRBRR47")) ;
    a.AddP (new JuriPerson ("Giulio", "GLOLPR67")) ;
    a.AddP (new JuriPerson ("Diana", "DNABND84")) ;
    a.AddP (new JuriPerson ("Massimo & Lella", "MSSLLLPCT27"));
	a.AddP (new JuriPerson ("Francesco & Camilla", "FRNCMLRCC28")) ;
    a.AddP (new JuriPerson ("Graziano", "GRZRVZ76")) ;
    a.AddP (new JuriPerson ("Flavio & Flavio", "FLVCSTBSN54")) ;
    a.AddP (new JuriPerson ("Lorella", "LRLCLM58")) ;
    //ȸ�� �����͸� �μ��Ѵ�.
    a.Print ( ) ;
	system("pause");
}