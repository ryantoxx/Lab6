#include "../Header files/Waiter.h"

void Waiter::Introduce() {
    std::cout << "Good to see you, I'm Rachel!" ;
    std::cout << " I've been working here for 5 years now,";
    std::cout << " so I'll help you choose your food today." << std::endl;
}

int Waiter::waiterLate(int RandNum) {
    if (RandNum <= 60) {
        std::cout << "We apologize your waiter will come as soon as possible.";
        std::cout << "Wait a few minutes." << std::endl;
        return 0;
    }
    else return 1;
}

int Waiter::waiterForget(int RandNum) {
    if (RandNum <= 10) {
        std::cout << " I'm so sorry, what was your order?";
        std::cout << " It slipped out of my mind" << std::endl;
        return 0;
    }
    else return 1;
}

