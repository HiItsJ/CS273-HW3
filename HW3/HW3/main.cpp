//
//  main.cpp
//  HW3
//
//  Created by Josiah on 3/1/17.
//  Copyright © 2017 Josiah. All rights reserved.
//

#include <iostream>
#include <string>
#include <stdexcept>
#include <limits>
#include <ios>
#include "readint.hpp"
using namespace std;

int main(){
    int low, high;
    cout << "Enter the range of values to read.\n";
    cout << "high: ";
    cin >> high;
    cout << "low: ";
    cin >> low;
    try {
        int number = read_int("Please enter a number within the range: ", low, high);
        cout << "You entered " << number << endl;
    }
    catch(invalid_argument& e){
        cerr << "Exception: You supplied an invalid argument for read_int!\n";
    }
}
