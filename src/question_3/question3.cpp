#include "question3.h"

std::vector<double> get_cookie_ingredients(int cookies) {
    const double sugarPerCookie = 1.5 / 48;
    const double butterPerCookie = 1.0 / 48;
    const double flourPerCookie = 2.75 / 48;

    double sugar = sugarPerCookie * cookies;
    double butter = butterPerCookie * cookies;
    double flour = flourPerCookie * cookies;

    std::vector<double> ingredients;
    ingredients.push_back(sugar);
    ingredients.push_back(butter);
    ingredients.push_back(flour);

    return ingredients;
}



bool test_config()
{
    return true;
}