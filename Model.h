#include "Header files/Restaurant.h"
#include "Header files/Menu.h"
#include "Header files/People.h"
#include "Header files/Customer.h"
#include "Header files/Staff.h"
#include "Header files/Hostess.h"
#include "Header files/Waiter.h"
#include "Header files/Sommelier.h"
#include "Header files/Chef.h"
#include "Header files/BaseMenu.h"
#include "Header files/HardMenu.h"
#include "Header files/Payment.h"
#include "Header files/Economy.h"
#include "View.h"
#include <iostream>
#include <ctime>

using std::string;

int randNumber(int min, int max) {
    int randomNumber;
    randomNumber = (rand() % (max - min + 1)) + min;
    return randomNumber;
}

void Simulation() {

    srand(time(NULL));

    Restaurant rest;
    rest.setTitle("Fancy Restaurant");
    rest.setFoundation("1st November of 1995");

    Customer customer;
    Hostess hostess;
    Waiter waiter;
    Menu menu;
    Economy eco;
    Payment payment;
    BaseMenu basemenu = BaseMenu("Pepperoni", 12, "BigBurger", 10, "Beef Steak", 15, "Vinegred", 5, "Borsch", 8, "Latte", 5, "Apple Juice", 3, "Cola", 3, "Water", 1);
    Sommelier sommelier;
    Chef chef;

    int customers = 5;
    int incomeTotal = eco.calculate_income1(randNumber(65, 80));
    int daily = eco.calculate_income2(randNumber(15,20));
    int rating = eco.calculate_rating(8);
    int tip = eco.calculate_tips(randNumber(10,15));

        for (int i = 0; i < customers; i++) {

            int birth = randNumber(16, 30);
            int time = randNumber(30, 50);
            int miss = randNumber(5, 20);

            rest.Introduce();
            customer.Cname(randNumber(1, 90));
            customer.setAge(birth);
            customer.Introduce();
            customer.setBalance(randNumber(100, 1500));
            customer.checkBalance();
            hostess.Introduce();
            hostess.checkReservation();
            waiter.Introduce();
            waiter.waiterLate(randNumber(1, 100));
            waiter.waiterForget(randNumber(9, 100));
            menu.setQuantity(2);
            menu.setType1("common");
            menu.setType2("hard");
            menu.Introduce();
            basemenu.Introduce();
            if (birth > 20) {
                int item = randNumber(1, 4);
                std::cout << " " << std::endl;
                sommelier.Introduce();
                HardMenu hardmenu = HardMenu("Irish Whiskey", 100, "Spicusor", 20, "Gallo Vine", 120, "McDowells", 150,
                                             "Blanco Tequila", 80);
                hardmenu.Introduce();
                sommelier.OfferDiscount(item);
            } else {
                std::cout << "Sorry, you are too young to order something from the hard menu" << std::endl;
            }

            customer.makeOrder(randNumber(1, 90));
            chef.setName("Oliver");
            chef.Introduce();
            chef.delayMeal(randNumber(20, 80));
            chef.missingIngredients(randNumber(40, 90));

            if (time > 40) {
                std::cout << "Sorry for inconvenience you will have a 10% discount!" << std::endl;
                chef.PrepareMeal();
            } else if (miss > 19) {
                std::cout << "You dont have to pay for your meal" << std::endl;
                std::cout << "Choose something else from the menu" << std::endl;
                chef.PrepareMeal();
            } else {
                chef.PrepareMeal();
            }
            payment.payment(randNumber(1, 90));
            hostess.leave();

            std::cout << "============================================================================" << std::endl;

        }
    statistics(daily, incomeTotal,tip, rating);
}



