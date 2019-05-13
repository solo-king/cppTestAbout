#include<iostream>

using namespace std;
//这里的用法和 c 语言中的typedef完全一致
using ganyeInt = int;

int main(){

    ganyeInt age = 25;

    cout << age <<endl;

    return 0;    
}