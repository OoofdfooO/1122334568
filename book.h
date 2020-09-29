#include <iostream>
#ifndef book_h
#define book_h
using namespace std;

class book
{
public:
	string Name;
	int Pages;
	book()
	{
		Name = '-';
		Pages = 0;
	}
	string getName()
	{
		return Name;
	}
	int getPages()
	{
		return Pages;
	}
	void Print(){
		cout<< "Book:" << Name << ",p." << Pages << "\n";

	}
};
#endif