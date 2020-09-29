
#ifndef printbook_h;
#define printbook_h
#include <string>
#include "book.h"
using namespace std;
class printbook : public book
{
private:
	int printpages;
public:
	printbook() : book() {
		printpages = 0;
	}
	int getPrintPages()
	{
		return printpages;
	}
	void setName(string s)
	{
		Name = s;
	}
	void setPages(int n) {
		printpages = n;
		Pages = n;
	}


};
#endif