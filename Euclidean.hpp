//
//  Euclidean.hpp
//  Euclidean Algorithm
//
//  Created by Konrad Kusiak on 09.10.2019.
//  Copyright © 2019 Konrad Kusiak. All rights reserved.
//

#ifndef Euclidean_hpp
#define Euclidean_hpp

#include <iostream>

class Zfield {
private:
    int n, numInv {0};
    int* set {nullptr};
    int** inverses {nullptr};
public:
    Zfield(int n);
    int inverse(int, int);
    void setInverses();
    void makeSet();
    bool gcd(int, int);
    int getn() { return n;}
    void printInverses();
};

#endif /* Euclidean_hpp */
