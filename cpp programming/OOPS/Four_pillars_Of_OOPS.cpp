#include <iostream>
using namespace std;

//-----Below porcess is encapsulation-----
class Student
{
private:
    string name;
    int age;
    int height;

public:
    int getAge()
    {
        return this->age;
    }
};

//-----Below is the example of inheritance-----
// Parent class
class Human
{
public:
    int height;
    int weight;
    int age;

public:
    int getAge()
    {
        return this->age;
    }
    int getWeight()
    {
        return this->weight;
    }
    int getheight()
    {
        return this->height;
    }
};
// child class
class Male : public Human
{
public:
    string color;

    void sleep()
    {
        cout << "Male sleeping." << endl;
    }
};

// Inheritance Ambiguity
class A
{
public:
    void func()
    {
        cout << "I'm in A." << endl;
    }
};
class B
{
public:
    void func()
    {
        cout << "I'm in B.";
    }
};

class C : public A, public B
{
};

//---------------POlymorphism----------------

// func overloading
class Z
{
public:
    void sayHello()
    {
        cout << "Hello Aman!" << endl;
    }
    void sayHello(string name)
    {
        cout << "Hello " << name << endl;
    }
    int sayHello(string name, int n)
    {
        cout << "Hello " << name << endl;
        return 1;
    }
};

// operator overloading

class X
{
public:
    int a;
    int b;

public:
    int add()
    {
        return a + b;
    }

    void operator+(X &obj)
    {
        int value1 = this->a;
        int value2 = obj.a;
        cout << "Output: " << value2 - value1 << endl;
    }
};

int main()
{
    // C obj;
    // // obj.func();

    // obj.A::func();
    // obj.B::func();

    // Z obj;
    // obj.sayHello();

    X obj1, obj2;
    obj1.a = 4;
    obj2.a = 7;

    obj1 + obj2;

    // Student first;

    // Male object1;
    // cout << object1.age << endl;
    // cout << object1.weight << endl;
    // cout << object1.height << endl;

    // cout << object1.color << endl;
    // object1.getWeight();
    // object1.sleep();

    return 0;
}