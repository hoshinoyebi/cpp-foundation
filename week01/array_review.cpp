#include <iostream>
using namespace std;

int main() {
	
	bool found = false;
	int sum = 0, target;
	double average;//float
	int num[5];
	
	cout << "enter num[5] array : ";

	for(int n = 0; n < 5; n++) {//限制框架 <5 !<=4
		cin >> num[n];
		sum += num[n];
	}
	int max = num[0], min = num[0];
	average = sum / 5.0;
    cout << "enter targer : ";
	cin >> target;

	for(int n = 0; n < 5; n++) {
		if (max < num[n]) {
			max = num[n];
		}
		if (min > num[n]) {
			min = num[n];
		}
	}
	cout << "Sum = " << sum << endl << "Average = " << average << endl
		<< "Max = " << max << endl << "Min = " << min << endl << "Index = " ;

	
	int index;
	
	for (int n = 0; n < 5; n++) {
		if (num[n] == target) {
			found = true;
			index = n;
			cout << index << endl;
			break;
        }
	}
	if(!found){
		cout << "not found";
	}

	
	return 0;





}