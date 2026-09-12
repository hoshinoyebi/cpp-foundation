#include <iostream>
using namespace std;
int square(int x){
    return x*x;
}
bool isEven(int y){
    if (y % 2 ==0){
        return 1;
    }else {
        return 0;
    }
}
int main(){
    int a;
    cin >> a;
    if (isEven(a)){
        cout << "even";
    }else {
        cout << "odd";
    }
    return 0;
}

