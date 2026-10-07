#include <iostream>
#include <vector>
using namespace std;
int main(){

    vector<int> numbers;
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        numbers.push_back(x);
    }

    int sum = 0;
    for(int i = 0; i < numbers.size(); i++){
        sum += numbers[i];
    }
    double average = sum / numbers.size();

    int max = numbers[0], min = numbers[0];

    for(int i = 0; i < numbers.size(); i++){
        if(max < numbers[i]){
            max = numbers[i];
        }
        if(min > numbers[i]){
            min = numbers[i];
        }
    }
    cout << "Numbers : ";
    for(int i = 0; i < numbers.size(); i++){
        cout << numbers[i] << " ";
    }
    cout << endl << "Sum : " << sum << endl << "Average : " << average << endl << "Max : " << max << endl << "Min : " << min << endl;


return 0;
}