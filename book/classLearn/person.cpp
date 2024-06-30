#include<iostream>
#include<string>

using namespace std;

class Person{
    public:
        string name;

};

int main(int argc, char const *argv[])
{
    Person p;
    cout<<"hello world"<<endl;
    p.name="张山";
     cout<<"name  "<<p.name<<" aaaa "<<"  bbbb "<<endl;
    std::string s1 = "abc";
    char firstChar = s1[0];
    if(s1[4] == '\0')
    {
      cout<<"yes!\n";
    }
    /* code */
    return 0;
}


