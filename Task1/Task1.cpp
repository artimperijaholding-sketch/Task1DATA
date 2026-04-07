

#include <iostream>
#include <iomanip>
#include "Date.h"
#include "Product.h"

int main1()
{
	Date a;
	Date b(2000, 1, 1);
	a.showDate();
	cout << endl;
	b.showDate();
	cout << "-----------------------------------" << endl;
	Date a1=--a;
	a.showDate();
	a1.showDate();
	cout << endl;
	cout << "-----------------------------------" << endl;
	Date a2=a--;
	a.showDate();
	a2.showDate();
	cout << endl;
	cout << "-----------------------------------" << endl;
	cout << a<< ":"<<a+5<<" = "<<5+a<<endl;
	cout << a<< ":"<<a+5.0f<<" = "<<5.0f+a<<endl;
	cout << a << ":" << a + 5L << " = " << 5L + a << endl;;
	cout << endl;
	//cin >> b;
	//cout << b;
	//a.nextDate();
	//b.prevDate();
	//a.showDate();
	//cout << endl;
	//b.showDate();
	//cout << "-----------------------------------" << endl;
	////cout << (a > b) << endl;
	//cout << "a==b: " << boolalpha << (a == b) << endl;
	//cout << "a!=b: " << boolalpha << (a != b) << endl;
	//cout << "a<=b: " << boolalpha << (a <= b) << endl;
	//cout << "a>=b: " << boolalpha << (a >= b) << endl;;
	//cout << "a>b: " << boolalpha << (a > b) << endl;
	//cout << "a<b: " << boolalpha << (a < b) << endl;
	//cout << "-----------------------------------" << endl;
	//a.showDate();
	//a += 10;
	//a.showDate();
	//a += 10.0f;
	//a.showDate();
	//a += 10l;

	//a.showDate();
	//cout << endl;
	//a -= 10;
	//a.showDate();
	//a -= 10.0f;
	//a.showDate();
	//a -= 10l;
	//a.showDate();
	//cout << "-----------------------------------" << endl;
	//cout << endl;
	//Date result1 = a + 10;
	//a.showDate();
	//result1.showDate();


	return 0;


}
int main()
{
	Product a;
	Product a2("Milk", 25.5f, Date(2026, 4, 1), 7);
	//cin >> a;
	//cout << endl;
	cout << a << a2;

	return 0;
}
