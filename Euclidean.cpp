//
//  Euclidean.cpp
//  Euclidean Algorithm
//
//  Created by Konrad Kusiak on 09.10.2019.
//  Copyright © 2019 Konrad Kusiak. All rights reserved.
//

#include "Euclidean.hpp"

Zfield::Zfield(int n) : n(n) {
    makeSet();
}

void Zfield::makeSet() {
    set = new int [n];
    for (int i = 0; i < n; i++) {
        set[i] = i;
    }
}
bool Zfield::gcd(int n, int k) {
    int i = 2;
    if (k == 0)
        return false;
    else if (k == 1)
        return true;
    while (i <= k) {
        if (n % i == 0 && k % i == 0 )
            return false;
        i++;
    }
    return true;
}
int Zfield::inverse(int n, int k) {
    int inv = 1;
    while (true) {
        if ((k*inv) % n == 1)
            return inv;
        else
            inv++;
    }
}
void Zfield::setInverses() {
    inverses = new int*[n];
    for (int i = 0; i < n; i++) {
        if (!gcd(n, i))
            inverses[i] = nullptr;
        else {
            inverses[i] = new int;
            *inverses[i] = inverse(n, i);
            numInv++;
        }
    }
}
void Zfield::printInverses() {
    std::cout << "Galois Field F" << n << ". Number of Inverses : " << numInv << '.' << std::endl;
    for (int i = 0; i < n; i++) {
        if (gcd(n, i))
            std::cout << "Inverse of [" << i << "] = [" << *inverses[i] << ']' << std::endl;
        else
            std::cout << "[" << i << "] doesn't have an inverse." << std::endl;
    }
}
