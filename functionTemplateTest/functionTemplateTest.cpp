/*
测试描述:
    1.使用function<>模板自定义函数
    2.使用自定义的模板进行调用
    Note:
        functional在c++ 11中才引入，所有编译时需要带上  -std=c++11以支持该特性
*/
#include<iostream>
#include <functional>

using namespace std;
//定义函数，返回值为int,参数列表为int的函数
using myFuncCb = std::function<int(int age)>;

int getAge(myFuncCb cb){
    cout<<"getAge"<<endl;
    int age = 25;
    return cb(age);
}

int myGetAgeCb(int age){

    cout<<"myGetAgeCb"<<endl;
    return age;
}

int main(){

    int mainAge = getAge(myGetAgeCb);
    cout<<"mainAge"<<mainAge<<endl;
    return 0;
}