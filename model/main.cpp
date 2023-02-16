//
// Created by Ben Calhoun on 1/28/2023.
//

/**
 * Ben Calhoun
 * CS124
 * Project #1
 */

#include "UsedCarData.h"
#include <fstream>
#include <iomanip>
#include <iostream>
#include <vector>

int main() {

    // To print calculation
    vector<UsedCarData> cars;
    getDataFromFile("../Used_Car_Price_Data.csv", cars);
    cout << findMostExpensive(cars) << "\n" << endl;

    // To print all data
    for (int i = 0; i < cars.size(); ++i) {
        std::cout << cars[i] << std::endl;
    }

}

