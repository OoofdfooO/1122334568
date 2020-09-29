
#pragma once
#ifndef shelf_h
#define shelf_h
#include <string>
#include "printbook.h"
#include "book.h"
#include <vector>
using namespace std;
class Shelf {
protected:
	vector<printbook> pbooks;
public:
	Shelf() {
	}
	void addBook(printbook pb) {
		pbooks.push_back(pb);
	}

	printbook getBook(int id) {
		return pbooks[id];
	}
	void Print() {
		cout << "Shelf contents: \n";
		for (int i = 0; i < pbooks.size(); i++) {
			pbooks[1].Print();
		}
	}
};

#endif