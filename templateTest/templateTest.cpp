#include<iostream>

/* 泛型类 */
using namespace std;

template <typename T> class  Person{

    private:
        T age;
    public:
        Person(T t){

            age = t;
        }

        void printAge(){

            cout<<age<<endl;
        }
};

/*泛型函数*/
template <class B> B getB(B b){

    return b;
}

int main(){

    Person<int> per(25);
    Person<double> per1(25.1);

    per.printAge();
    per1.printAge();

    int age1(25);
    double age2(25.3);

    cout<<getB(age1)<<endl;
    cout<<getB(age2)<<endl;
    return 0;
}