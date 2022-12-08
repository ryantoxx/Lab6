#include "../Header files/Hostess.h"



void Hostess::Introduce() {
    std::cout << "Hi. I'm Michone, welcome here!" << std::endl;
}

void Hostess::checkReservation() {
    std::cout << "Checking list... " << std::endl;
    std::cout << "Table number 20 is not booked, you can sit there." << std::endl;
}

void Hostess::leave() {
    std::cout << "Thank you for coming here, hope you liked it!" << std::endl;
}