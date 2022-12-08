#pragma once

#include <iostream>

void statistics(float dayIncome, float totalIncome,float tipsAmount, int rating) {
    std:: cout << "Average paycheck: " << dayIncome << "$." << std::endl;
    std:: cout << "Income overall: " << totalIncome << "$." << std::endl;
    std:: cout << "Amount of tips: " << tipsAmount << "$." << std::endl;
    std:: cout << "Rating of the restaurant: " << rating << " out of 10."<< std::endl;
}

