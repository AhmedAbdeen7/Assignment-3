#include "Person.h"

Person::Person() : name(""), id(0), age(0) {}


void Person::setName(string name) {
    this->name = name;
}

string Person::getName() const {
    return name;
}

void Person::setId(int id) {
    this->id = id;
}

int Person::getId() const {
    return id;
}

void Person::setAge(int age) {
    this->age = age;
}

int Person::getAge() const {
    return age;
}
void Person :: setappoint(const appointment &b)
{
    a.hours = b.hours;
    a.mins = b.mins;
}
appointment Person :: getappoint() const
{
    return a;
}