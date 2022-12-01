#include <iostream>
#include "state.h"

using namespace std;

void board(int x, int y) {

	for (int i = 0; i < y; i++) {
		cout << "\t\t#";
		for (int j = 0; j < x - 2; j++) {
			if (i == 0 || i == y - 1) cout << "#";
			else cout << ' ';
		}
		cout << "#\n";
	}
}

int main() {
	int x, y;
	cout << "Welcome to Werewolves vs Vampires\n";
	cout << "Please type the length of the map: ";
	cin >> x;
	cout << "Please type the width of the map: ";
	cin >> y;
	cout << "\n";

	system("cls");

	board(x, y);

	Map* ptr = new Map;
	ptr->set_length(x);
	ptr->set_width(y);
	ptr->set_time(false);

	cout << "Map is: " << ptr->get_length() << "x" << ptr->get_width();


}