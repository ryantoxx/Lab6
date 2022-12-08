#include "../Header files/People.h"

void People::setName(string name) {
    Name = name;
}
string People::getName() {
    return Name;
}

void People::setAge(int age) {
    Age = age;
}
int People::getAge() {
    return Age;
}