#include <iostream>
#include <array>

using namespace std;

int sum(array<int, 5> arr) {
	int s = 0;
	for (int i = 0; i < arr.size(); i++) {
		s += arr[i];
	}

	return s;
}

double avg(double sum, double size) {
	return sum / size;
}

int main() {
	array<int, 5> arr;
	int total = 0;
	double average = 0;

	for (int i = 0; i < arr.size(); i++) {
		cout << i+1 << "�� ���ڸ� �Է����ּ���. : ";
		cin >> arr[i];
	}


	total = sum(arr);
	average = avg(total, arr.size());

	cout << "�հ� : " << total << endl;
	cout << "��� : " << average << endl;

	return 0;
}