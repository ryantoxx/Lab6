#ifndef LAB6_RESTAURANT_H
#define LAB6_RESTAURANT_H

#include <iostream>
using std::string;

class Restaurant {
private:
    string Title;
    string Foundation;
public:
    void setTitle(string title);
    string getTitle();

    void setFoundation(string foundation);
    string getFoundation();

    void Introduce();

};
#endif //LAB6_RESTAURANT_H