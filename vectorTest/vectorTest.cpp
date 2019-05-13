/*
用于测试vector(容器)的各个方法:
    1.增
    2.删
    3.改
    4.查
*/
#include<iostream>
#include<vector>

using std::vector;
using namespace std;

void printInfo(vector<int> &args){
    cout<<"new line:"<<endl;
    for(auto i:args){

        cout<< i<<endl;
    }
    cout<<"end line"<<endl;
}

int main(){

    vector<int> args = {1,2,3,4,5};
    printInfo(args);
    //增加
    args.push_back(6);
    printInfo(args);
    //删除
    args.pop_back();
    printInfo(args);
    //改,貌似需要自己实现:->
    /*插入
        args.begin():代表第一个元素
        args.begin()+2:则为第三个元素
    */
    args.insert(args.begin()+2, 5);
    printInfo(args);
    return 0;

}