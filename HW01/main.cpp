#include <iostream>
#include <array>

using namespace std;

int upper(int type, array<int, 5>& arr)
{
	int empty = 0;

	if (type == 1) {
		for (int i = 0; i < arr.size(); i++) {
			for (int j = 0; j < arr.size() - 1 - i; j++) {
				if (arr[j] > arr[j + 1]) {
					empty = arr[j + 1];
					arr[j + 1] = arr[j];
					arr[j] = empty;
				}
			}
		}
	}
	else if (type == 2) {
		for (int i = 0; i < arr.size(); i++) {
			for (int j = 0; j < arr.size() - 1 - i; j++) {
				if (arr[j] < arr[j + 1]) {
					empty = arr[j + 1];
					arr[j + 1] = arr[j];
					arr[j] = empty;
				}
			}
		}
	}

	return 0;
}

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
	int total = 0, type = 0;
	double average = 0;

	for (int i = 0; i < arr.size(); i++) {
		cout << i+1 << "�� ���ڸ� �Է����ּ���. : ";
		cin >> arr[i];
	}

	cout << "[ 1 : ��������, 2 : �������� ]" << endl;;
	cout << "���� ���� Ÿ���� ����ּ���. : ";

	cin >> type;

	if (type < 1 or 2 < type) {
		cout << "�߸��� ���� ���� Ÿ���Դϴ�." << endl;
		cout << "�⺻ ���� Ÿ���� ������������ �ݿ��˴ϴ�." << endl;
		type = 1;
	}

	upper(type, arr);

	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << " ";
	}

	cout << endl;

	total = sum(arr);
	average = avg(total, arr.size());

	cout << "�հ� : " << total << endl;
	cout << "��� : " << average << endl;

	return 0;
}