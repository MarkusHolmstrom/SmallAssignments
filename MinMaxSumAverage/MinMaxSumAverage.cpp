
#include <iostream>
using namespace std;

void getOutput(int i, int number) {
	cout << number;
	if (i != 4)
	{
		cout << ", ";
	}
	else
	{
		cout << "\n";
	}
}

int getMin(int min, int i) {
	if (i < min)
	{
		return i;
	}
	return min;
}

int getMax(int max, int i) {
	if (i > max)
	{
		return i;
	}
	return max;
}

int main()
{
start:
	int numbers[5] = { 0, 0, 0, 0, 0 };
	int sum = 0;
	int min = INT_MAX;
	int max = INT_MIN;
	double average = 0;

    cout << "Insert 5 numbers!\n";
	for (size_t i = 0; i < 5; i++)
	{
		cin >> numbers[i];
	}
	// start print for the numbers
	cout << "Numbers = ";
	// lets do all the stuff in the same in for-loop
	for (size_t i = 0; i < 5; i++)
	{
		// output
		getOutput(i, numbers[i]);
		// add to sum
		sum += numbers[i];
		// find min
		min = getMin(min, numbers[i]);
		// find max
		max = getMax(max, numbers[i]);
	}
	average = sum / static_cast<double>(5);
	// print everything
	cout << "Sum = " << sum << ", Minimum number = " << min << ", Highest number = " << max << ", Average = " << average << endl;
	cout << "Restarting... " << endl;
	goto start;
}

