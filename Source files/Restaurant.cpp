#include "../Header files/Restaurant.h"

void Restaurant::setTitle(string title) {
    Title = title;
}
string Restaurant::getTitle() {
    return Title;
}

void Restaurant::setFoundation(string foundation) {
    Foundation = foundation;
}
string Restaurant::getFoundation() {
    return Foundation;
}

void Restaurant::Introduce() {
    std::cout << "Welcome at " << getTitle() << " it was built on "<< getFoundation() << " hope you enjoy your time here!" << std::endl;
}