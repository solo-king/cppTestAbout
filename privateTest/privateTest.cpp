
#include <iostream>


using namespace std;

class Person{

    protected:
        int age;
};

class Student:public Person{

    public:
        void setAge(int age1){
            age = age1;
        }
        int getAge(){
            
            return age;
        }

        void printAge(){
            
            cout<<getAge()<<endl;
        }
        /*
        void setPersonAge(Person& per, int age){
            
            per.age = age;

        }
        */

        void setSelfAge(Student& stu, int age){

            stu.age = age;
        }
};


int main()
{
    /*  //用于测试派生类是否能访问基类中protected的成员
    Student stu;
    stu.setAge(24);
    stu.printAge();
    */

   //用于测试派生类中是否能直接修改基类的protected成员
    Student stu;
    Person per;
    //stu.setPersonAge(per, 25);//不可以这么调用
    stu.setSelfAge(stu, 24);
    stu.printAge();

    

    return 0;
}