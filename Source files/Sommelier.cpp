#include "../Header files/Sommelier.h"

void Sommelier::Introduce() {
    std::cout << "Hey.I'm called Rick and I'm 37 years old. ";
    std::cout << "I have a high-level qualification, so I'll help you choose a drink."<< std::endl;
    std::cout << "Check the menu first:" << std::endl;
}

int Sommelier::OfferDiscount(int nr) {
    if (nr == 2 )
    {
        std::cout << "Nice, you just earned a 5% discount today." << std::endl;
        return 1;
    }
    else return 0;
}
