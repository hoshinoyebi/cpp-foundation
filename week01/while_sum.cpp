#include <iostream>
using namespace std;
int main(){


    int number;
    cout << "enter number:";
    cin >> number;
    int sum = 0;
    while (number!=0){
        sum = sum + number;
        cout << "please enter again" << endl << "enter number:";
        cin >> number;
    }cout << "Total: " << sum;
    return 0;


















}