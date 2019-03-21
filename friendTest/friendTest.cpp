#include<iostream>


using namespace std;

class Person;//提前申明友元类

class Student{

    private:
        Person* per;
    public:
    Student(int age){
        
       // per = new Person(age);
    }
    /*void printAge(){
        cout <<per->age<<endl;
    }
    */
   void printAge1(Person* per1);
};

class Person{

    //friend class Student;
    friend void Student::printAge1(Person* per1);//只能先定义
    private:
        int age;
    public:
        Person(int age){
            this->age = age;
        }
};

void Student::printAge1(Person* per1){

    cout <<per1->age<<endl;
}


int main(){

    int age(0);
    cout<<"请输入你的年龄"<<endl;
    cin>>age;
    Person person(age);
    Student stu(age);


    stu.printAge1(&person);
}