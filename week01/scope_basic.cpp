#include <iostream>
using namespace std;

int multiply(int x){
    int result = x * 2;

    if (result > 10){
        int bonus = 5;
        result = result + bonus;
    }

    return result;
}

int main(){
    int number;
    cin >> number;
    int result = multiply(number);
    cout << result << endl;

    return 0;
}


