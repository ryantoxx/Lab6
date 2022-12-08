#ifndef LAB6_STAFF_H
#define LAB6_STAFF_H

#include "People.h"
#include <iostream>

using std::string;

class Staff : public People{
private:
    string Email;
public:
    void setEmail(string email);
    string getEmail();
};

#endif //LAB6_STAFF_H
