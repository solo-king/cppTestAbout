/*
测试描述:
    1.友元有如下几种
        1.1 友元函数
        1.2 友元类
    Note:
        1.友元函数必须在申明friend的class之后实现
*/
#include<iostream>
#include<string>

using namespace std;

class Person;//提前申明友元类


/* 包包类 */
class Package{
    /* 将该类作为Person的友元类，如此Person类访问Package类无限制 */
    friend class Person;
    private:
        string name;
    public:
        Package(string packageName){

            this->name = packageName;
        }
};

class Student{
    public:
        Student(int age){
         
        }
        
        void printAge1(Person &per1);
};


class Person{

    //友元函数的使用,代表在该函数中可以直接访问Person类中的所有成员
    friend void Student::printAge1(Person &per1);//只能先定义
    private:
        int age;
    public:
        Person(int age){
            this->age = age;
        }
        string printMyPackage(Package package){

            return package.name;

        }
};


void Student::printAge1(Person &per1){
    //直接使用Person中的私有成员,运用友元机制
    cout<<"age"<<per1.age<<endl;
}
int main(){

    int age(0);
    cout<<"请输入你的年龄"<<endl;
    cin>>age;
    Package package("lv");
    Person person(age);
    Student stu(age);
    cout<<"myPackage:"<<person.printMyPackage(package)<<endl;

    stu.printAge1(person);
}