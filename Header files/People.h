#ifndef LAB6_PEOPLE_H
#define LAB6_PEOPLE_H

#include "Restaurant.h"
#include <iostream>

using std::string;

class People : public Restaurant{
private:
    string Name;
    string Surname;
    int Age;
public:
    void setName(string name);
    string getName();

    void setAge(int age);
    int getAge();
};

#endif //LAB6_PEOPLE_H
