#pragma once
#include <iostream>

class Economy {
public:
    float tipsAmount = 0;
    float IncomeOverall = 0;
    int rating = 8;
    float dayIncome = 0;

    float calculate_income1(int amount) {
        IncomeOverall = IncomeOverall + amount;
        return IncomeOverall;
    }

    float calculate_income2(int amount) {
        dayIncome = dayIncome + amount;
        return dayIncome;
    }

    float calculate_tips(int amount) {
        tipsAmount = tipsAmount + amount;
        return tipsAmount;
    }

    float calculate_rating(int amount) {
        rating = 8;
        return rating;
    }
};
