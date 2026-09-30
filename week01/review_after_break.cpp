#include <iostream>
using namespace std;

bool isEven(int x){

    if(x % 2 == 0){
        return true;
    }else{
        return false;
    }
}

int sumToN(int n){

    int sum = 0;

    for(int i = 1 ;i <= n;i++){
        sum += i;
    }return sum;

}

int countEvenToN(int n){
    int evenSum = 0;

    for(int i = 1 ;i <= n ;i++){
        if (isEven(i)){
            evenSum += 1;
        }
    }return evenSum;    
}

int main(){
    int n;
    cout << "enter a number: ";
    cin >> n;
    int sum = sumToN(n);
    int countEven = countEvenToN(n);
    cout << "Sum = " << sum << endl << "Even count = " << countEven << endl;
    return 0;
}