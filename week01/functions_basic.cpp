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

int sumToN(int x){
    int sum;
    for (int n = 1, n < x, n++){
        sum += n;
    }return sum;
}

int main(){
    int a;
    cin >> a;
    cout << sumToN(a);
    return 0;
}


