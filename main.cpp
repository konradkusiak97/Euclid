//
//  main.cpp
//  Euclidean Algorithm
//
//  Created by Konrad Kusiak on 09.10.2019.
//  Copyright © 2019 Konrad Kusiak. All rights reserved.
//

#include <iostream>
#include "Euclidean.hpp"
using namespace std;

int main() {
    
    int x;
    cout << "Give number: ";
    cin >> x;
    Zfield field(x);
    field.setInverses();
    field.printInverses();
}
