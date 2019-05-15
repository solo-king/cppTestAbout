
/*
测试描述:
    1.使用预制的运算符
        int sum = operator+(1,2);
        int sum = 1+2;
    2.重载类Person中的+运算符,实现PersonA+PersonB ==其中年龄的相加
*/
#include <iostream>

using namespace std;
#if 1
class Person{

    private:
        int age;
    public:
        Person(int age){

            this->age = age;

        }
        int operator+(Person &per){

            age += per.age;
            return age;
        }
};


#endif
int main(){

    
    
    Person per(23);
    Person per1(24);
    int sum = per+per1;
    
    cout<<sum<<endl;
    
    return 0;
}