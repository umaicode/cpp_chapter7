//7-1.INHERITANCE_METHOD.cpp

#include <iostream>
using namespace std;
class A{
private:
    int a_private;
protected:
    int a_protected;
public:
    int a_public;
    void SetData(){ //���� �ٲٱ� ���� SetData�Լ�
        a_private = 1;
        a_protected = 2;
        a_public = 3;
    }
    void ModifyData(int a, int b, int c){
        a_private = a;
        a_protected = b;
        a_public = c;
    }
};
//class A�� public ��ӹ��� class B
class B : public A{
public:
    void SetData(){
    //���������� ���� �����ϱ� ���� �Լ��� SetData()
    //protected�� public�� ������ ����������
    //private������ ������ �� ����.
    //a_private = 11; //subclass���� ���� ����
    a_protected = 22;
    a_public = 33;
    }
};
//protected ��ӹ��� class C
class C : protected A{
public:
    void SetData(){
        //B�� ���������� private�� ������ �� ����.
        //a_private = 11;
        a_protected = 22;
        a_public = 33;
    }
};
//private ��ӹ��� class D
class D : private A{
public:
    void SetData(){
        //���������� private�� ������ �� ����.
        //a_private = 11;
        a_protected = 22;
        a_public = 33;
    }
    void callModifyData(){
        A::ModifyData(11, 22, 33);
    }
};
//� ����� ���� class�̰�, private member ������ ���� �ǵ帱 �� ������, 
//public, protected ��� ��쿡�� A�� private member�� ���� ����
void main(){
    A a;
    //a ��ü�� �ȿ� �����ϴ� member ������������
    //private�� protected member ������ class �ܺο��� �ǵ帱 �� ����.
    a.a_public = 2;
    cout <<"a.a_public = " <<a.a_public << endl;
    //a.a_private = 1; //private �����ʹ� main()���� ���� ����
    //a.a_protected = 2;	//protected ������eh main()���� ���� ����
    a.SetData();
    cout <<"a.a_public = " <<a.a_public << endl;
    
    //�ּ� 1
    B b;
    //A�� public ����� ���� b��ü��
    //���� ���������� a��ü�� ���� ������ ���δ�.
    b.a_public = 4;
    cout <<"b.a_public = " <<b.a_public << endl;
    b.SetData();
    cout <<"b,a_public = " <<b.a_public << endl;
    //b.a_private = 1; //�ȵȴ�.
    //b.a_protected = 2;	//�ȵȴ�. 
    //*/
    //�ּ� 2
    C c;
    //A�� protected ����� ���� c��ü,
    //class �ܺο����� class A�� public member ���� ���� ����� �� ������ ���� �� �� �ִ�.
    // c.a_public = 5;
    //cout <<"c.a_public = " <<c.a_public << endl;
    c.SetData();
    //cout <<"c.a_public = " <<c.a_public << endl;
    //c.a_private = 1;	//�ȵȴ�.
    //c.a_protected = 2;	//�ȵȴ�.
    //*/
    //�ּ� 3
    D d;
    //A�� private ����� ���� d��ü,
    //���������� ��� member������ ����� �� ����.
    //d.a_public = 6;
    // cout <<"d.a_public = " <<d.a_public << endl;
    d.SetData();
    //cout <<"d.a_public = " <<d.a_public << endl;
    //d.a_private = 1;		//�ȵȴ�.
    //d.a_protected = 2;	//�ȵȴ�.
    d.callModifyData(); //class A�� public�Լ� ModifyData�� �̿� ����
    //*/
	system("pause");
}