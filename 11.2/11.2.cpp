#include <iostream>
using namespace std;
const unsigned int ARRSIZE = 10;
int main()
{
	bool fail = false;
	float arr[ARRSIZE];
	for (int i = 0; i < ARRSIZE; i++)
	{
		do
		{
			fail = false;
			cout << "Enter a value for " << i + 1 << " array item: ";
			cin >> arr[i];
			if (cin.fail())
			{
				cout << "\nIncorrect valye has been entered!" << endl << endl;
				fail = true;
			}
			cin.clear();
			cin.ignore();
		} while (fail);
	}
	cout << "\nAn array has been obtained: ";
	for (int i = 0; i < ARRSIZE; i++)
	{
		cout << arr[i] << " ";
	}

	float max_val = arr[0];
	unsigned int max_idx = 0;
	for (int i = 0; i < ARRSIZE; i++)
	{
		if (max_val < arr[i])
		{
			max_val = arr[i];
			max_idx = i;
		}
	}
	cout << "\nThe maximum element of an array is " << max_val << " and it`s index is " << max_idx << endl;

	cout << "\nChanged array: ";
	for (int i = 0; i < ARRSIZE; i++)
	{
		if (arr[i] < 0 && i < max_idx)
			arr[i] = 0;
		cout << arr[i] << " ";
	}
	cout << endl;
}