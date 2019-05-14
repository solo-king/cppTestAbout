/*
描述:
    1.左值引用，打印验证
    2.函数传递引用,实现类似指针的功能
    3.
*/
#include<iostream>

using namespace std;


void setAge(int &age){

    age++;
}   

int main(){

    int age = 25;
    int &refAge = age;

    cout<<"before:[age]="<<age<<"[refAge]="<<refAge<<endl;
    setAge(age);
    cout<<"before:[age]="<<age<<"[refAge]="<<refAge<<endl;
    setAge(refAge);
    cout<<"before:[age]="<<age<<"[refAge]="<<refAge<<endl;
    return 0;
}