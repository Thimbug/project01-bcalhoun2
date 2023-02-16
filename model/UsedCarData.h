//
// Created by Ben Calhoun on 1/28/2023.
//


/**
 * Ben Calhoun
 * CS124
 * Project #1
 */


#ifndef MYPROJECT_USEDCARDATA_H
#define MYPROJECT_USEDCARDATA_H

#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using std::cout, std::endl, std::ifstream, std::string, std::vector;

class UsedCarData {
private:
    string model;
    int price;
    int mileage;
    double review;
    int reviewCount;
    string badge;

public:
    UsedCarData() {
    }
    // Constructors
    UsedCarData(string model, int price, int mileage, double review, int reviewCount, string badge) {
        this->model = model;
        this->price = price;
        this->mileage = mileage;
        this->review = review;
        this->reviewCount = reviewCount;
        this->badge = badge;
    }

    // Getters
    string getModel() const {
        return model;
    }

    int getPrice() const {
        return price;
    }

    int getMileage() const {
        return mileage;
    }

    double getReview() const {
        return review;
    }

    int getReviewCount() const {
        return reviewCount;
    }

    string getBadge() const {
        return badge;
    }

    // Setters
    void setModel(string model) {
        this->model = model;
    }

    void setPrice(int price) {
        this->price = price;
    }

    void setMileage(int mileage) {
        this->mileage = mileage;
    }

    void setReview(double review) {
        this->review = review;
    }

    void setReviewCount(int reviewCount) {
        this->reviewCount = reviewCount;
    }

    void setBadge(string badge) {
        this->badge = badge;
    }

    // Stream inseration overloading
    friend std::ostream& operator << (std::ostream& outs, const UsedCarData car) {
        outs << std::setw(19) << car.getModel()
             << std::setw(7) << car.getPrice()
             << std::setw(6) << car.getMileage()
             << std::setw(5) << car.getReview()
             << std::setw(6) << car.getReviewCount()
             << std::setw(12) << car.getBadge();
        return outs;

    }

};

// Get data and pass in vector by reference
void getDataFromFile(string filename, vector<UsedCarData>& cars) {

    // File handler object
    ifstream inFile;
    string header;

    // Open file
    inFile.open(filename);
    char comma;
    char junk;

    string model, badge;
    int price, price2, mileage, mileage2, reviewCount, reviewCount2;
    double review;

    if (inFile) {
        getline(inFile, header);

    }

    // Read all data until the end of the file
    while (inFile && inFile.peek() != EOF) {
        getline(inFile, model, ',');

        inFile >> junk; // Properly format data using junk variable

        inFile >> price; // Multiply first thousands place by 1000 and add the rest to get rid of the comma in the number
        price *= 1000;
        inFile >> comma;

        inFile >> price2;
        price += price2;

        inFile >> junk;

        inFile >> comma;
        inFile >> junk;

        inFile >> mileage;
        mileage *= 1000;
        inFile >> comma;

        inFile >> mileage2;
        mileage += mileage2;

        inFile >> junk;
        inFile >> comma;

        inFile >> review;
        inFile >> comma;

        // If statement to properly format reviewCount variable
        if(inFile.peek() == '"') {
            inFile >> junk;
            inFile >> reviewCount;
            reviewCount *= 1000;
            inFile >> comma;
            inFile >> reviewCount2;
            reviewCount += reviewCount2;
            inFile >> junk;
        }
        else{
            inFile >> reviewCount;
        }

        inFile >> comma;

        getline(inFile, badge);

        cars.push_back(UsedCarData(model, price, mileage, review, reviewCount, badge)); // Add to vector

    }

    // Close file
    inFile.close();

};

// Calculate price of most expensive car
int findMostExpensive(vector<UsedCarData>& cars) {
    int mostExpensive = 0;
    int carPrice = 0;
    int mostExpensiveCar;
    for(int i = 0; i < cars.size(); ++i) {
        carPrice = cars[i].getPrice(); // Iterate through and if previously most expensive car was topped, make it the most expensive
        if(carPrice > mostExpensive) {
            mostExpensive = carPrice;
            mostExpensiveCar = cars[i].getPrice();
        }
    }

    // Print results
    cout << "" << endl;
    cout << "The price of the most expensive car is: " << endl;
    return mostExpensive;


}





#endif //MYPROJECT_USEDCARDATA_H

