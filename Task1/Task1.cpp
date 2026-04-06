

#include <iostream>
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
	cout << (a > b) << endl;
	return 0;


}
