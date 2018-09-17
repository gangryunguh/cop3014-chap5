//
// Created by Gang-Ryung Uh on 5/30/18.
//    create subdivision of a Ruler
//       i           ruler
//       ------------------
//       1           1
//       2           1 2 1
//       3           1 2 1 3 1 2 1
//       4           1 2 1 3 1 2 1 4 1 2 1 3 1 2 1
//       ..          .......

#include <iostream>
using namespace std;

int main() {
    const int N = 5;
    int i;
    string ruler = " ";

    cout << "i\t ruler\n";
    cout << "---------\n";

    for (i = 1; i < N; i++) {
        ruler = ruler + to_string(i) + ruler;
        cout << i << "\t" << ruler << endl;
    }
    return 0;
}

