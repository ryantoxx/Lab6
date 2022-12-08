#ifndef LAB6_WAITER_H
#define LAB6_WAITER_H

#include "Staff.h"
#include <iostream>

using std::string;

class Waiter : public Staff {
public:

    void Introduce();

    int waiterLate(int RandNum);

    int waiterForget(int RandNum);
};


#endif //LAB6_WAITER_H
