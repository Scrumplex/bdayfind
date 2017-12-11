/*
 * Copyright © 2017 Sefa Eyeoglu <contact@scrumplex.net>
 * This work is free. You can redistribute it and/or modify it under the
 * terms of the Do What The Fuck You Want To Public License, Version 2,
 * as published by Sam Hocevar. See the COPYING file for more details.
 *
 * This program is free software. It comes without any warranty, to
 * the extent permitted by applicable law. You can redistribute it
 * and/or modify it under the terms of the Do What The Fuck You Want
 * To Public License, Version 2, as published by Sam Hocevar. See
 * http://www.wtfpl.net/ for more details. */

#include <iostream>
#include <cmath>

int main() {
    uint startYear = 1900;
    int startAge = 2;
    int startPower = 2;

    uint endYear = 4000;
    int endAge = 60;
    int endPower = 9;

    printf("Displaying results of birthyears from %u to %u while only calculating ages from %d to %d with powers of %d to %d: \n",
           startYear, endYear, startAge, endAge, startPower, endPower);

    for (uint year = startYear; year < endYear; year++) {
        for (int age = startAge; age < endAge; age++) {
            for (int power = startPower; power < endPower; ++power) {
                if (std::pow(age, power) == year + age) {
                    printf("Age %d's power of %d equals %u. Birthyear: %u.\n", age, power, year + age, year);
                }
            }
        }
    }
    return 0;
}
