#include <iostream>
using namespace std;

int main() {
	
	bool found = false;
	int sum = 0, target;
	float average;
	int num[5];
	
	cout << "enter num[5] array : ";

	for(int n = 0; n <= 4; n++) {
		cin >> num[n];
		sum += num[n];
	}
	int max = num[0], min = num[0];
	average = sum / 5.0;
    cout << endl << "enter targer : ";
	cin >> target;

	for(int n = 0; n <= 4; n++) {
		if (max < num[n]) {
			max = num[n];
		}
		if (min > num[n]) {
			min = num[n];
		}
	}
	int index;
	for (int n = 0; n < 5; n++) {
		if (num[n] == target) {
			found = true;
			index = n;
			break;
		}
	}
	cout << "Sum = " << sum << endl << "Average = " << average << endl
		<< "Max = " << max << endl << "Min = " << min << endl << "Index = " << index << endl;
	return 0;





}