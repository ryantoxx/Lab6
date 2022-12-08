#include "../Header files/Customer.h"

void Customer::setBalance(double balance) {
    Balance = balance;
}
double Customer::getBalance() {
    return Balance;
}


int Customer::Cname(int RandNum) {
    if (RandNum <= 10) {std::cout << "Hi, I'm Scarlet Blake, and I'm ";}
    else if (RandNum <= 20) {std::cout << "Hi, I am Harry Maguire, and I'm ";}
    else if (RandNum > 20 && RandNum <= 30) {std::cout << "Hi, I am Bob Farrigton, and I'm ";}
    else if (RandNum > 30 && RandNum <= 40) {std::cout << "Hi, I am Ben Henderson, and I'm ";}
    else if (RandNum > 40 && RandNum <= 50) {std::cout << "Hi, I am Karl Wurtz, and I'm ";}
    else if (RandNum > 50 && RandNum <= 60) {std::cout << "Hi, I am John Ventura, and I'm ";}
    else if (RandNum > 60 && RandNum <= 70) {std::cout << "Hi, I am Glen Smith, and I'm ";}
    else if (RandNum > 70 && RandNum <= 80) {std::cout << "Hi, I am Rosita Hernandez, and I'm ";}
    else if (RandNum > 80 && RandNum <= 90) {std::cout << "Hi, I am Jack Grealish, and I'm ";}
    else return 1;
}

int Customer::makeOrder(int RandNum) {
    if (RandNum <= 10) {std::cout << "Pizza and water!" << std::endl;}
    else if (RandNum > 10 && RandNum <= 20) {std::cout << "Burger, salad and soda!"<< std::endl;}
    else if (RandNum > 20 && RandNum <= 30) {std::cout << "Soup and juice!"<< std::endl;}
    else if (RandNum > 30 && RandNum <= 40) {std::cout << "Steak and coffee!"<< std::endl;}
    else if (RandNum > 40 && RandNum <= 50) {std::cout << "Salad and water!"<< std::endl;}
    else if (RandNum > 50 && RandNum <= 60) {std::cout << "Pizza, juice and soda!"<< std::endl;}
    else if (RandNum > 60 && RandNum <= 70) {std::cout << "Burger, soup, water, coffee!"<< std::endl;}
    else if (RandNum > 70 && RandNum <= 80) {std::cout << "Steak, water!"<< std::endl;}
    else if (RandNum > 80 && RandNum <= 90) {std::cout << "Salad and coffee!"<< std::endl;}
    else return 1;
}

void Customer::Introduce() {
    std::cout << getAge() << " years old " << std::endl;
}

void Customer::checkBalance() {
    std::cout << "Your account has " << getBalance() << " $." << std::endl;
}


