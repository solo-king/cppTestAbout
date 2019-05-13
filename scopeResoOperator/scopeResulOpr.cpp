#include<iostream>
#include"include/Person.h"

using namespace std;

/*
描述:
    1.验证全局作用域::功能
    2.区别于局域范围和全局范围
*/
int main(int argc, char**argv){
    int age = 25;
    int sum = ::age+age;
    cout<<"[sum]"<<sum<< "[::age]"<<::age<<"[age]"<<age<<endl;
    return 0;
}