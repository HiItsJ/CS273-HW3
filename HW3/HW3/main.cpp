//
//  main.cpp
//  HW3
//
//  Created by Josiah on 3/1/17.
//  Copyright © 2017 Josiah. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    return 0;
}
//EX03_1
int read_int(string prompt, int smallest, int largest){
    if (smallest == largest){
        throw std::invalid_argument("No values in range");
    }
    if (smallest > largest){
        throw std::ios_base::failure("Invalid input");
    }
    return smallest+1;
}
