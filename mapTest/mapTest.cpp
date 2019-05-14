/*
测试项目:
    1.使用map实现
        1.1增
        1.2删除
        1.3改
        1.4查
*/
#include<iostream>
#include<string>
#include<map>

using namespace std;

void printInfo(map<string, string>&numbers){

    for(auto phoneNumber:numbers){

        cout<<phoneNumber.first<<":"<<phoneNumber.second<<endl;
    }
}
int main(){

    map<string, string> phoneNumbers = {
        {"chenqigan", "19953126836"},
        {"chenqigan1", "19953126813"}
    };
    /*增加*/
    phoneNumbers.insert(phoneNumbers.end(), std::pair<string, string>("xiaobai", "13737865639"));
    printInfo(phoneNumbers);
    /*删除*/
    phoneNumbers.erase("xiaobai");
    printInfo(phoneNumbers);
    /*修改,暂时没有单独的api :-<*/
    /*查找*/
    auto it1 = phoneNumbers.find("xiaobai");
    if(it1 != phoneNumbers.end()){
        cout<<"it1:"<<it1->first <<" "<< it1->second<<endl;
    }
    
    auto it = phoneNumbers.find("chenqigan");
    if(it != phoneNumbers.end()){
        cout<<"it:"<<it->first <<" "<< it->second<<endl;
    }
    
    return 0;
}