#ifndef LAB6_PAYMENT_H
#define LAB6_PAYMENT_H

#include "People.h"
#include <iostream>
using std::string;

class Payment : public People {
public:
    int payment(int RandNum);
};


#endif //LAB6_PAYMENT_H
