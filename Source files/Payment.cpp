#include "../Header files/Payment.h"

int Payment::payment(int RandNum) {
    if (RandNum >= 1 && RandNum <= 10) {std::cout << "Your meal is worth 13$ " << std::endl;}
    else if (RandNum > 10 && RandNum <= 20) {std::cout << "Your meal is worth 18$ "<< std::endl;}
    else if (RandNum > 20 && RandNum <= 30) {std::cout << "Your meal is worth 11$ "<< std::endl;}
    else if (RandNum > 30 && RandNum <= 40) {std::cout << "Your meal is worth 20$ "<< std::endl;}
    else if (RandNum > 40 && RandNum <= 50) {std::cout << "Your meal is worth 6$ "<< std::endl;}
    else if (RandNum > 50 && RandNum <= 60) {std::cout << "Your meal is worth 18$ "<< std::endl;}
    else if (RandNum > 60 && RandNum <= 70) {std::cout << "Your meal is worth 21$ "<< std::endl;}
    else if (RandNum > 70 && RandNum <= 80) {std::cout << "Your meal is worth 16$ "<< std::endl;}
    else if (RandNum > 80 && RandNum <= 90) {std::cout << "Your meal is worth 10$ "<< std::endl;}
    else return 1;
}