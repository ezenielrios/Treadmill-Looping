// ---------------------------------------------------------------
// Programming Assignment:	LAB2B
// Developer:			   Ezeniel Rios
// Date Written:			3/13/2021
// Purpose:				Treadmill Looping
// ---------------------------------------------------------------
#include <iostream>
using namespace std;

int main()
{
	double cal, time, sum{};

	cout << "We will evaluate the total calories burn for your time on the treadmill. \n";
	cout << "Enter calories to burned per min: ";
	cin >> cal; // cal burn per minute
	cout << "Enter time on treadmill in minutes: ";
	cin >> time; //get time

	for (int count = 0; count <= time; count += 5) {
		sum = cal * count; // multiplies calories per min by total time
		cout << "Total Burned at: \t" << count; // display time
		cout << "minutes is : \t" << sum << endl; //display calories
	}

	cout << "Total time in minutes = " << time << endl;
	cout << "Total Burned Calories = " << sum << endl; //Total burn
	system("pause");
}