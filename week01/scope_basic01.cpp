#include <iostream>
using namespace std;

int applyBonus(int score){

    int bonus;
    if (score >=80){
        bonus = 10;
    }
    else if (score >= 60){
        bonus = 5;
    }
    else {
        bonus = 0;
    }
    return score + bonus;
}

int main(){

int x;
cin >> x;
cout << applyBonus(x);

}