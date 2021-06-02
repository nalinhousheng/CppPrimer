#include<iostream>
#include"sales_data.h"
using namespace std;

int main()
{
	Sales_data book;
	double price;
	cin >> book.bookNo >> book.units_sold >> price;
	book.CalcRevenue(price);
	book.Print();

	return 0;
}