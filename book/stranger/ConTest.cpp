#include <iostream>
using namespace std;
class Person
{
    public:
        Person(){
            cout<<"aaa调用构造函数"<<endl;
        }

        ~Person(){
            cout<<"调用析构函数"<<endl;
        }
        int m_Age;

        Person(int age){
            cout<<"调用有参构函"<<endl;
            m_Age = age;
        }

        Person(const Person &p){
            cout<<"调用拷贝构造函�?"<<endl;
            m_Age = p.m_Age;
        }
};

void test01(){
    Person p;
    p.m_Age= 18;
    Person p2(p);
    cout <<"p2 age is "<<p2.m_Age<<endl;
}

int main(int argc, char const *argv[])
{
    test01();
    /* code */
    return 0;
}
