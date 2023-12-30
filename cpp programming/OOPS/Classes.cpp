#include <bits/stdc++.h>
// #include "Hero.cpp" //We can create a class in external folder also.
using namespace std;

class Hero
{
    // Properties
    // private:// let
    // int health;

public: // Access Modifier
    char level;
    int health;
    char *name;
    static int timeToComplete; // does not depends upon class

    // Default Contructor
    Hero()
    {
        cout << "Constructor Called." << endl;
        name = new char[100];
    }

    // Parameterised Constructor
    Hero(int health)
    {
        cout << "Default contructor called";
    }

    // Copy constructor
    //  Hero(Hero& temp) { //pass by reference
    //      cout<<"Copy constructor called!"<<endl;
    //      this -> health = temp.health;
    //      this -> level = temp.level;

    //     //If we called the function by pass by value, we will get error.it is because,
    //     //this contructor creates a copy varibale temp, and this temp will go to Hero function,
    //     //The hero function will again look for the value of temp and we are gonna stuck in an infinite loop.
    //     //That's why this give an error and we call the function by pass by reference.
    // }

    // Copy contructor to show deep copy
    Hero(Hero &temp)
    {
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;

        cout << "Copy constructor called!" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    Hero(int health, char level)
    {
        this->level = level;
        this->health = health;
    }

    void print()
    {
        cout << "[ Name: " << this->name << " ,";
        cout << "Health: " << this->health << " ,";
        cout << "Level: " << this->level << " ]" << endl;
    }

    ////Creating getter and setter

    // getter
    int getHealth()
    {
        return health;
    }
    // getter
    char getLevel()
    {
        return level;
    }
    // setter
    void sethealth(int h)
    {
        health = h;
    }
    // setter
    void setLevel(char ch)
    {
        level = ch;
    }

    void setName(char name[])
    {
        strcpy(this->name, name);
    }


    // destructor
    ~Hero()
    {
        cout << "destructor Called" << endl;
    }
};

int Hero::timeToComplete = 5; //initialising the static variable.

int main()
{

    // // Creating an h1 object of type Hero

    // // Static Allocation
    // Hero h1;
    // cout << "level: " << h1.level << endl;
    // cout << "health: " << h1.health << endl;

    // // Dynamic Allocation
    // Hero *b = new Hero;
    // cout << "level: " << (*b).level << endl;
    // cout << "health: " << (*b).health << endl;

    // cout << "level: " << b->level << endl;
    // cout << "health: " << b->health << endl;

    // //The size of object h1 should be eqal to
    // // size of health + size of level.
    // //That is, 5. But no the answer comes out to be 8 in this case.
    // cout<<"size: "<<sizeof(h1)<<endl;

    // //// The object has the size equal to the sum of the sizes of the
    // //// various properties defined in the object.

    // //// Incase the class is empty, the size comes out to be 1.

    // // // Accessing the data members.
    // // h1.health = 20;
    // h1.sethealth(70); //used setter
    // h1.level = 'A';

    // // cout << "Health : " << h1.health << endl;
    // cout<<"health: "<<h1.getHealth()<<endl; //used getter
    // cout << "level : " << h1.level << endl;

    //Default constructor call
    // cout<<"Hello"<<endl;
    // Hero h1;
    // Hero *h = new Hero;
    // cout<<"Hi"<<endl;
    // delete h;//to delete the dynamicaaly alloted object

    // //Parameterised Constructor
    // Hero h1(10);
    // cout<<"Address of h1: "<<&h1<<endl;
    // h1.getHealth();

    // //Copy Constructor
    // Hero S1( 70, 'C');
    // S1.print();

    // Hero R1(S1);//values of S1 copied to R1 with the help of copy constructor
    // R1.print();

    // Hero T1;
    // T1.sethealth(12);
    // T1.setLevel('D');
    // char name[5] = "Aman";
    // T1.setName(name);

    // // T1.print();

    // // use default copy constructor
    // Hero T2(T1);
    // // T2.print();

    // T1.name[0] = 'G';
    // T1.print();
    // T2.print();

    // T1 = T2;

    // T1.print();
    // T2.print();

    // //Static datamember
    // cout<<Hero::timeToComplete <<endl;//recomended
    // Hero a;
    // cout<<a.timeToComplete<<endl;//not recomended

    return 0;
}