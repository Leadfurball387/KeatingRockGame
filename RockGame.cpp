#include <iostream>
#include <string>


int main() {
	
	// User input to select which row to take a rock (O) from
	int row{};

	int amount{};

	// # of rocks in each row
	int row1{ 5 };
	int row2{ 4 };
	int row3{ 3 };


	while (row1 >= 0 && row2 >= 0 && row3 >= 0) {

		// Inverted pyramid of 'O's, representing rocks

		// 'O's for row 1
		for (int i = row1; i > 0; i--) {
			if (i == row1) {
				std::cout << "1. ";
			}
			if (i >= 1) {
				std::cout << "O   ";
			}
			if (i == 1) {
				std::cout << '\n';
			}
		}

		// 'O's for row 2
		for (int i = row2; i > 0; i--) {
			if (i == row2) {
				std::cout << "2.   ";
			}
			if (i >= 1) {
				std::cout << "O   ";
			}
			if (i == 1) {
				std::cout << '\n';
			}
		}

		// 'O's for row 3
		for (int i = row3; i > 0; i--) {
			if (i == row3) {
				std::cout << "3.     ";
			}
			if (i >= 1) {
				std::cout << "O   ";
			}
			if (i == 1) {
				std::cout << '\n';
			}
		}

		std::cout << "Please select which row you would like to take from: ";
		std::cin >> row;

		if (row == 1 || row == 2 || row == 3) {

			std::cout << "You have selected row " << row << ". Please state how many rocks you would like to take from row " << row << ": ";
			std::cin >> amount;

			if (row == 1) {
				row1 = row1 - amount;
				if (row1 < 0) {
					std::cout << "You took too much! Please try again.\n";
				}
				if (row1 == 0) {
					std::cout << "1.\n";
				}
			}
			else if (row == 2) {
				row2 = row2 - amount;
				if (row2 < 0) {
					std::cout << "You took too much! Please try again.\n";
				}
				if (row2 == 0) {
					std::cout << "2.\n";
				}
			}
			else if (row == 3) {
				row3 = row3 - amount;
				if (row3 < 0) {
					std::cout << "You took too much! Please try again.\n";
				}
				if (row3 == 0) {
					std::cout << "3.\n";
				}
			}
		}
	}
	return 0;
}