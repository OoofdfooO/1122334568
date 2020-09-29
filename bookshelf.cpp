

#include <iostream>
#include "book.h"
#include "printbook.h"
#include "shelf.h"
#include "BookShelf.h"
#include "string"

using namespace std;
int main(int argc, char** argv) {
	setlocale(LC_ALL, "RUS");
	int mode = -1;
	vector<BookShelf> bshelfs;
	BookShelf bshelf;
	while (mode != 0) {
		cout << "- = MEНЮ = -." << endl;
		cout << "1. Добавить шкаф." << endl;
		cout << "2. Добавить полку в шкаф." << endl;
		cout << "3. Добваить книгу." << endl;
		cout << "4. Вывод на экран." << endl;
		cout << "0. Выход." << endl;
		cin >> mode;
		switch (mode) {
		case 0: continue;
		case 1:
			bshelfs.push_back(bshelf);
			cout << "Шкаф добавлен!" << endl << endl;
			break;
		case 2:
			if (bshelfs.size() > 0) {
				cout << "Доступно " << bshelfs.size() << "шкафов" << endl;
				cout << "Введите номер шкафа (от 1 до " << bshelfs.size() << "):";
				int n = 0;
				cin >> n;
				if (n > 0 && n <= bshelfs.size()) {
					bshelfs[n - 1].addShelf();
					cout << "Полка добавлена." << endl << endl;
				}else {
					cout << "Ошибка в номере шкафа. Повторите." << endl << endl;
				}
			}
			else {
				cout << "Доступные шкафы отсутствуют!" << endl << endl;
			}
			break;
		case 3:
			if (bshelfs.size() > 0) {
				cout << "Доступно " << bshelfs.size() << "шкафов" << endl;
				cout << "Введите номер шкафа (от 1 до " << bshelfs.size() << "):";
				int n = 0;
				cin >> n;
				if (n > 0 && n <= bshelfs.size()) {
					cout << "Введите номер полки." << endl << endl;
					int m = 0;
					cin >> m;
					printbook pb;
					cout << "Введите название книги: ";
					string name;
					cin >> name;
					cout << "Введите кол-во страниц: ";
					int pages;
					cin >> pages;
					pb.setName(name);
					pb.setPages(pages);
					bshelfs[n].addBook(pb, m - 1);
				}
				else {
					cout << "Ошибка в номере шкафа. Повторите." << endl << endl;
				}
			}
			else {
				cout << "Доступные шкафы отсутвуют:" << endl << endl;
			}
			break;
		case 4:
			for (int i = 0; i < bshelfs.size(); i++) {
				cout << "==Шкаф №" << i + 1 << "===" << endl;
				bshelfs[i].Print();
			}break;
			}
		}
		cout << "Пока!";
		return 0;
	};
