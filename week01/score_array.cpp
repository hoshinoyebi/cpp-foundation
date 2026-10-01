#include <iostream>
using namespace std;



int main(){
    /*
    int score[5];
    int sum = 0;//加逗號連續建立變數
    double average;
    
    cout << "Enter score : ";
    for(int i = 0; i < 5; i++){
        cin >> score[i];
        sum += score[i];//correct
        //sum += score[i];想知道是否可以邊輸入邊計算//yes
    }
    int max = score[0] ,min = score[0];
    average = sum / 5.0;//浮點數問題
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
*/    
    int number[5] = {12, 7, 25, 9, 18};
    int target;
    bool found = false;
    cout << "number[5] = {12, 7, 25, 9, 18}" << endl << "Enter your target number: ";
    cin >> target;
    
    for(int i = 0; i < 5; i++){
        if(number[i] == target){
            cout << "Index = " << i << endl;
            found = true;
            break;
        }
    }
    if(!found){
        cout << "Not found" << endl;
    }


return 0;        
}

