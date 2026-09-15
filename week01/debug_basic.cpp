#include <iostream>
using namespace std;

int sumToN(int n){
    int sum = 0;/*未定義行為undified behavior*/

    for (int i = 1; i <= n; i++){/*i<n不符合預期(logic error)*/
        sum = sum + i;
    }

    return sum;
}

int main(){
    int number;/*無;(compile error)*/
    cin >> number;

    cout << sumToN(number);

    return 0;
}