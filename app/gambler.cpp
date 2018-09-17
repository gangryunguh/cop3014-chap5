//
// Created by Gang-Ryung Uh on 5/31/18.
//
// Gambler starts with $stake and places $1 even bets until going
// broke or reaching $goal.
//    What are the chances of winning?
//    How many bets will it (winning/losing) take?
// This program implements numerical simulation for this gambler's
// game.
//    1. Flip digital coins and see what happens
//    2. Repeat and compute statistics
//
// Fact: Probability of winning = stake / goal
// Fact: Expected number of bets = stake * desired gain
//

#include <iostream>
#include <random>
using namespace std;

int main() {
    int stake;
    int goal;
    int N;
    int wins = 0;

    cout << "How much money will you play per each game?" << flush;
    cin >> stake;
    cout << "How much money you would like to make from the game?" << flush;
    cin >> goal;
    cout << "How many times you want to play this game?" << flush;
    cin >> N;

    // random number generator that produces a value [0.0 .. 1.0)
    random_device rd;
    std::mt19937 e2(rd());
    uniform_real_distribution<> dist(0,1);

    for (int i = 0; i < N; i++) {
        int t = stake;
        while (t > 0 && t < goal) {
            if (dist(e2) < 0.5)
                t++;
            else
                t--;
        }
        if (t >= goal)
            wins++;
    }
    cout << wins << " wins of " << N << endl;
}


