#ifndef LAB6_HOSTESS_H
#define LAB6_HOSTESS_H

#include "Staff.h"
#include <iostream>

using std::string;

class Hostess : public Staff {
public:
    void Introduce();

    void checkReservation();

    void leave();

};


#endif //LAB6_HOSTESS_H
