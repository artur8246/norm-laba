#include <iostream> 

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "������� ������ ������� n: " << endl;
	cin >> n;
	double* arr = new double[n];

	cout << "������� " << n << " ������������ �����:" << endl;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int i = 0; i < n; i++)
		cout << "a[" << i << "] = " << arr[i] << endl;

	cout << "1--------------------------------------" << endl;

	double a, b;
	cout << "������� a, b: " << endl;
	cin >> a >> b;

	if (a < b)
	{
		double temp = a;
		a = b;
		b = temp;
	}

	int count = 0;

	for (int i = 0; i < n; i++)
		if (arr[i] >= a && arr[i] <= b)
			count++;

	cout << "\n���������� ��������� �� A �� B: " << count << endl;

	cout << "2--------------------------------------" << endl;

	double max = arr[0];

	int index = 0;

	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			index = i;
		}
	}

	cout << "������������ ������� �������: " << max << endl;

	double sum = 0.0;
	for (int i = index + 1; i < n; i++)
	{
		sum += arr[i];
	}

	if (index == n - 1)
		cout << "������������ ������� - ��������� � �������" << endl;
	else
		cout << "����� ��������� ������� ����� �������������: " << sum << endl;

	cout << "3--------------------------------------" << endl;

	for (int j = 0; j < n - 1; j++)
		for (int i = 0; i < n - 1; i++)
			if (abs(arr[i]) > abs(arr[i + 1]))
			{
				double temp = arr[i];
		    	arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}

	cout << "������ ����� ��������������: " << endl;

	for (int i = 0; i < n; i++)
		cout << "a[" << i << "] = " << arr[i] << endl;

	delete[] arr;

	system("pause");
}
