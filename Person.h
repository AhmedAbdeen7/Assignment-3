#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
using namespace std;
    struct appointment // defining a struct named appointment
    {
        int hours;
        int mins;
    };

class Person { // declaring a base class named person
protected:
    string name;
    int id;
    int age;
    appointment a;

public:
    Person();
    void setName(string name);
    string getName() const;
    void setId(int id);
    int getId() const;
    void setAge(int age);
    int getAge() const;
    virtual void printInfo() const = 0; // declaring a pure virtual function to make this class abstract
    void setappoint(const appointment &b);
    appointment getappoint() const;
};
#endif
