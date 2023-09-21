#include <iostream>
using namespace std;

class A {

    public:
    void func1() {
        cout << "Calling function 1" << endl;
    }
};

class B : public A{

    public:
    void func2() {
        cout << "Calling function 2" << endl;
    }
};

class D {
    
    public:
    void func3() {
        cout << "Calling function 3" << endl;
    }
};

class C : public B, public D {

};

int main() {

    A obj1;
    obj1.func1();

    B obj2;
    obj2.func1();
    obj2.func2();

    D obj3;
    obj3.func3();

    C obj4;
    obj4.func1();
    obj4.func2();
    obj4.func3();
}