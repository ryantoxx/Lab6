#ifndef LAB6_CUSTOMER_H
#define LAB6_CUSTOMER_H

#include "People.h"
#include <iostream>
using std::string;

class Customer : public People {
private:
    double Balance;
public:

    int Cname(int RandNum);

    int makeOrder(int RandNum);

    void setBalance(double balance);
    double getBalance();

    void Introduce();

    void checkBalance();
};

#endif //LAB6_CUSTOMER_H
