//
// Created by Gang-Ryung Uh on 5/30/18.
// To compute the square root of c (positive numeric value)
//     1. initialize t_0 = c
//     2. Repeat until t_i = c / t_i up to desired precision
//          set t_(i+1) = (c/t_i + t_i) / 2.0
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {

    const double EPS = 1E-15L;
    double c;
    double t;
    cout << "Enter positive integer for sqrt: " << flush;
    cin >> c;
    t = c;
    while (abs(t-c/t) > t*EPS) {
        t = (c/t + t) / 2.0;
    }
    cout << "The sqrt of " << c << ": " << t << endl;
    return 0;x
}

