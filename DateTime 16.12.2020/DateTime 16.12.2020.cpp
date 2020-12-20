#include <iostream>
#include "DateTime.h"

using namespace std;

int main()
{
	DateTime time(2020, 12, 20, 2, 12);

	time.setYear(2021);
	time.addMinutes(10);

	cout << "Year: " << time.getYear() << endl;
	cout << "Month: " << time.getMonth() << endl;
	cout << "Day: " << time.getDay() << endl;
	cout << "Hours: " << time.getHours() << endl;
	cout << "Minutes: " << time.getMinutes() << endl;
}


