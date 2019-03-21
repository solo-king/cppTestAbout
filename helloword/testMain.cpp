
#include<iostream>
#include<string>

using namespace std;

class Person
{
    private:
         string name;
         int age;
    public:
        virtual void run()=0;
        virtual void printInfo(){};
        int getAge();
        string getName(){

            return name;
        }
        void setName(string name)
        {
            this->name = name;
        }

};


class Teacher:public Person
{

    public:
        Teacher(){
            setName("Teacher");
        }
        void printInfo()
        {
            cout<< getName() <<endl;
        }
        
        void run()
        {
            cout<<getName()<<" run"<<endl;
        }

};


class Father:public Person
{

    public:
        Father(){
            setName("Father");
        }
        void printInfo()
        {
            cout<< getName() <<endl;
        }
        
        void run()
        {
            cout<<getName()<<" run"<<endl;
        }
};

int main()
{
    Person *per = new Teacher();
    Person *per1 = new Father();
    per->printInfo();
    per->run();
    per1->printInfo();
    per1->run();
    return 0;
}