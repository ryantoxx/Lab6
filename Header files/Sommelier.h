#ifndef LAB6_SOMMELIER_H
#define LAB6_SOMMELIER_H

#include "Staff.h"
#include <iostream>

using std::string;

class Sommelier : public Staff {
public:

    void Introduce();

    int OfferDiscount(int nr);
};


#endif //LAB6_SOMMELIER_H
