#include <iostream>
using namespace std;



int main(){

    int score[5];
    int sum = 0 ,max = score[0] ,min = score[0];//加逗號連續建立變數
    double average;
    
    cout << "Enter score : ";
    for(int i = 0; i < 5; i++){
        cin >> score[i];
        //sum += score[i];想知道是否可以邊輸入邊計算
    }
    for(int i = 0; i < 5; i++){
        sum += score[i];
    }
    average = sum / 5;
    for (int i = 1; i < 5; i++){
        if (score[i] > max){
            max = score[i];
        }

        if (score[i] < min){
            min = score[i];
        }
    }
    cout << "Sum = " << sum << endl << "Average = " << average << endl 
         << "Max = " << max << endl << "Min = " << min << endl;
return 0;        
}

