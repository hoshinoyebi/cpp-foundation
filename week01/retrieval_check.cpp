#include <iostream>
using namespace std;

bool isEven(int a){
    if (a % 2 == 0){
        return true;
    }else {
        return false;
    }
}

int countEvenToN(int b){
    int sumEven = 0;
    
    for (int i = 1; i < b; i++){
        if ( i % 2 == 0){
            sumEven += 1;
        }
    }

    if (isEven(b)){
        sumEven += 1;
    }
    return sumEven;
}       

int main(){

    int x;
    cin >> x;
    cout << countEvenToN(x);
return 0;
}