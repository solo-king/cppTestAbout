#include <iostream>

using namespace std;


class Person{
    public:
        virtual void run(int age=0)=0;
};

class Student:public Person{

    public:
        void run(int age=0){

            cout<<age<<endl;
        }
};

int main(){

    Student stu;
    stu.run();

    return 0;
}