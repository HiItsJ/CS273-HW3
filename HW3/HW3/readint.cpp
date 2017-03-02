//
//  readint.cpp
//  HW3
//
//  Created by Josiah on 3/1/17.
//  Copyright © 2017 Josiah. All rights reserved.
//

#include "readint.hpp"
#include <iostream>
#include <stdexcept>
using namespace std;

int read_int(const string& prompt, int smallest, int largest){
    cin.exceptions(ios_base::failbit);
    int num = 0;
    while(true){
        try{
            cout<<prompt;
            cin>>num;
            return num;
        }
        catch(ios_base::failure& ex){
            cout<<"Bad numeric string -- try again\n";
            cin.clear();
            cin.ignore(numeric_limits<int>::max(), '\n');
        }
    }
    if (smallest == largest){
        throw std::invalid_argument("No values in range");
    }
    return smallest+1;
}
