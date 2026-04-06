

#include <iostream>
#include <iomanip>
#include "Date.h"

int main()
{
	Date a;
	Date b(2000, 1, 1);
	a.showDate();
	cout << endl;
	b.showDate();
	cout << "-----------------------------------" << endl;
	a.nextDate();
	b.prevDate();
	a.showDate();
	cout << endl;
	b.showDate();
	cout << "-----------------------------------" << endl;
	//cout << (a > b) << endl;
	cout << "a==b: " << boolalpha << (a == b) << endl;
	cout << "a!=b: " << boolalpha << (a != b) << endl;
	cout << "a<=b: " << boolalpha << (a <= b) << endl;
	cout << "a>=b: " << boolalpha << (a >= b) << endl;;
	cout << "a>b: " << boolalpha << (a > b) << endl;
	cout << "a<b: " << boolalpha << (a < b) << endl;
	cout << "-----------------------------------" << endl;
	a.showDate();
	a += 10;
	a.showDate();
	a += 10.0f;
	a.showDate();
	a += 10l;

	a.showDate();
	cout << endl;
	a -= 10;
	a.showDate();
	a -= 10.0f;
	a.showDate();
	a -= 10l;
	a.showDate();



	return 0;


}
