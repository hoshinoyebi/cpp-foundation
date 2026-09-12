#include <iostream>
using namespace std;
int square(int x){
    return x*x;
}
bool isEven(int=y){
    if (y == 4 ||y == 0){
        return 1;
    }else if (y == 7){
        return 0;
    }
}
int main(){
    int a;
    cin >> a;
    if (isEven(a)==1){
        cout << "even";
    }else {
        cout << "odd";
    }
    return 0;
}

