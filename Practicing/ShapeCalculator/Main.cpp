#include <iostream>
#include <Windows.h>
#include <vector>
#include <string>
#include "cRect.h"
#include "cTriangle.h"

int main()
{
	enum emenus {
		MAIN = 1,
		ADDSHAPE = 2,
		REMOVESHAPE = 3
	};

	std::string user_input = "defaulttypebeat";
	std::vector<cShape*> shape_arr;
	int curr_menu = emenus::MAIN;

	std::cout << "------------------------------------------------------------------\n";
	std::cout << "WELCOME! THIS PROGRAM LETS YOU ADD AND REMOVE SHAPES AND WILL DISPLAY VARIOUS INFORMATION ABOUT THEM!\n";
	std::cout << "(ALL LENGTHS ARE INPUT IN SI-UNIT FOR LENGTH (METER//M)\n" << std::endl;
	while (user_input != "Exit") {
		switch (curr_menu) {
		case emenus::MAIN:
			std::cout << "Your list of shapes: \n";

			if (shape_arr.size() == 0) {
				std::cout << "EMPTY!\n";
			}
			else {
				for (int i = 0; i < shape_arr.size(); ++i) {
					//TODO
				}
			}

			std::cout << "------------------------------------------------------------------\n";
			std::cout << "What do you want to do? (Enter 1-2)\n\n";
			std::cout << "1. Add shape\n";
			std::cout << "2. Remove shape\n";
			std::cout << "Type 'exit' to turn off the program\n\n";
			std::cout << "Input: ";
			std::cin >> user_input;

			if (user_input == "1") {
				system("cls");
				curr_menu = emenus::ADDSHAPE;
			}
			else if (user_input == "2") {
				system("cls");
				curr_menu = emenus::REMOVESHAPE;
			}
			else if (user_input == "Exit" || user_input == "exit") {
				curr_menu = 0;
			}
			else {
				system("cls");
				std::cout << "Invalid input!";
				Sleep(1000);
				system("cls");
			}
			break;
		case emenus::ADDSHAPE:
			std::cout << "What shape do you want to add? (Enter 1-2)\n\n";
			std::cout << "1. Rectangle/Square\n";
			std::cout << "2. Triangle\n";
			std::cout << "Input: ";
			std::cin >> user_input;

			if (user_input == "1") {
				system("cls");
				double val1 = 0;
				double val2 = 0;

				std::cout << "Enter length of width: ";
				std::cin >> val1;
				std::cout << "Enter length of height: ";
				std::cin >> val2;
			}
			else if (user_input == "2") {
				//TODO
			}
			else {
				system("cls");
				std::cout << "Invalid input!";
				Sleep(1000);
				system("cls");
			}
			break;
		case emenus::REMOVESHAPE:

			break;
		default:
			system("cls");
			std::cout << "Thanks for using the program!";
			Sleep(3000);
			return 0;
		}
	}
	system("cls");
	std::cout << "Thanks for using the program!";
	Sleep(3000);
	return 0;
}