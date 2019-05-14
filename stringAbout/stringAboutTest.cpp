/*
测试描述:
    1.集中实例化方式
    2.c形式的和string之间的转化
    3.string支持的类型
        substring
        append
*/
#include<iostream>
#include<string>

using namespace std;

int main(){
    //直接初始化
    string per("per");
    //拷贝初始化
    string per1 = "per1";
    //直接组合
    string perAndPer1 =per+per1;
    //string to c_type char
    const char* c_str = per.c_str();
    //c_type char to string
    string  cStrToString(c_str);

    cout<<"[per]"<<per
        <<"[per1]"<<per1
        <<"[perAndPer1]"<<perAndPer1
        <<"[cStrToString]"<<cStrToString<<endl;
    return 0;

}