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

int maxOfTwo(int x, int y){
    if (x > y){
    return x;
}else {
    return y;
}
}

int main(){
    int a,b;
    cin >> a >> b;
    cout << maxOfTwo(a,b);
    return 0;
}


