#ifndef LAB6_CHEF_H
#define LAB6_CHEF_H

#include "Staff.h"
#include <iostream>

using std::string;

class Chef : public Staff {
private:
    string SpecificType;
public:
    void setSpecificType(string speficitype);
    string getSpecificType();

    void Introduce();

    void PrepareMeal();

    int delayMeal(int RandNum);

    int missingIngredients(int RandNum);
};


#endif //LAB6_CHEF_H
