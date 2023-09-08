#include <iostream>
#include <iomanip>
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

	std::cout << "#################################################################################\n";
	std::cout << "WELCOME! THIS PROGRAM LETS YOU ADD AND REMOVE SHAPES AND WILL DISPLAY VARIOUS INFORMATION ABOUT THEM!\n";
	std::cout << "(ALL LENGTHS ARE INPUT IN SI-UNIT FOR LENGTH (METER//M)\n";
	std::cout << "#################################################################################\n" << std::endl;

	//Program loop
	while (user_input != "Exit") {
		switch (curr_menu) {
		case emenus::MAIN:
			std::cout << "Your list of shapes: \n\n";

			if (shape_arr.size() == 0) {
				std::cout << "EMPTY!\n";
			}
			else {
				for (int i = 0; i < shape_arr.size(); ++i) {
					cShape& curr_shape = *shape_arr[i];
					double circumferance = curr_shape.CalcCirc();
					double area = curr_shape.CalcArea();
					std::string shape_type = curr_shape.CheckType();
					std::cout << std::fixed << std::setprecision(10) << (i + 1) << ". " << shape_type << "--> Circumferance: " << circumferance << " Area: " << area << '\n';
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
				curr_menu = emenus::ADDSHAPE;
			}
			else if (user_input == "2") {
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
			system("cls");
			std::cout << "What shape do you want to add? (Enter 1-3)\n\n";
			std::cout << "1. Rectangle\n";
			std::cout << "2. Square\n";
			std::cout << "3. Triangle\n";
			std::cout << "Input: ";
			std::cin >> user_input;

			if (user_input == "1") {
				system("cls");
				std::string temp_input = " ";
				double val1 = 0;
				double val2 = 0;

				std::cout << "Enter width size: ";
				std::cin >> temp_input;

				try {
					val1 = std::stod(temp_input);
					system("cls");
				}
				catch (std::invalid_argument) {
					std::cout << "\nInvalid input! Only numbers!";
					Sleep(1000);
				}
				catch (std::out_of_range) {
					std::cout << "\nToo large! Please lower the value!";
					Sleep(1000);
				}

				std::cout << "Enter height size: ";
				std::cin >> temp_input;

				try {
					val2 = std::stod(temp_input);
					shape_arr.push_back(new cRect(val1, val2));
					system("cls");
					curr_menu = emenus::MAIN;
				}
				catch (std::invalid_argument) {
					std::cout << "\nInvalid input! Only numbers!";
					Sleep(1000);
				}
				catch (std::out_of_range) {
					std::cout << "\nToo large! Please lower the value!";
					Sleep(1000);
				}
			}
			else if (user_input == "2") {
				system("cls");
				std::string temp_input = " ";
				double val1 = 0;

				std::cout << "Enter square size: ";
				std::cin >> temp_input;
				try {
					val1 = std::stod(temp_input);
					shape_arr.push_back(new cRect(val1));
					system("cls");
					curr_menu = emenus::MAIN;
				}
				catch (std::invalid_argument) {
					std::cout << "\nInvalid input! Only numbers!";
					Sleep(1000);
				}
				catch (std::out_of_range) {
					std::cout << "\nToo large! Please lower the value!";
					Sleep(1000);
				}
			}
			else if (user_input == "3") {
				system("cls");
				std::string temp_input = " ";
				double val1 = 0;
				double val2 = 0;
				double val3 = 0;

				std::cout << "Enter side 1 size: ";
				std::cin >> temp_input;

				try {
					val1 = std::stod(temp_input);
					system("cls");
				}
				catch (std::invalid_argument) {
					std::cout << "\nInvalid input! Only numbers!";
					Sleep(1000);
					system("cls");
					curr_menu = emenus::ADDSHAPE;
					break;
				}
				catch (std::out_of_range) {
					std::cout << "\nToo large! Please lower the value!";
					Sleep(1000);
					system("cls");
					curr_menu = emenus::ADDSHAPE;
					break;
				}

				std::cout << "Enter side 2 size: ";
				std::cin >> temp_input;

				try {
					val2 = std::stod(temp_input);
					system("cls");
				}
				catch (std::invalid_argument) {
					std::cout << "\nInvalid input! Only numbers!";
					Sleep(1000);
					system("cls");
					curr_menu = emenus::ADDSHAPE;
					break;
				}
				catch (std::out_of_range) {
					std::cout << "\nToo large! Please lower the value!";
					Sleep(1000);
					system("cls");
					curr_menu = emenus::ADDSHAPE;
					break;
				}

				std::cout << "Enter side 3 size: ";
				std::cin >> temp_input;

				try {
					val3 = std::stod(temp_input);
					system("cls");
				}
				catch (std::invalid_argument) {
					std::cout << "\nInvalid input! Only numbers!";
					Sleep(1000);
					system("cls");
					curr_menu = emenus::ADDSHAPE;
					break;
				}
				catch (std::out_of_range) {
					std::cout << "\nToo large! Please lower the value!";
					Sleep(1000);
					system("cls");
					curr_menu = emenus::ADDSHAPE;
					break;
				}

				if (val1 + val2 > val3 &&
					val1 + val3 > val2 &&
					val2 + val3 > val1) {
					if (val1 == val2 && val2 == val3) {
						shape_arr.push_back(new cTriangle(val1));
						system("cls");
						curr_menu = emenus::MAIN;
					}
					else if (val1 == val2 && val1 != val2) {
						shape_arr.push_back(new cTriangle(val1, val2));
						system("cls");
						curr_menu = emenus::MAIN;
					}
					else if (val2 == val3 && val2 != val1) {
						shape_arr.push_back(new cTriangle(val2, val1));
						system("cls");
						curr_menu = emenus::MAIN;
					}
					else {
						shape_arr.push_back(new cTriangle(val1, val2, val3));
						system("cls");
						curr_menu = emenus::MAIN;
					}
				}
				else {
					std::cout << "The lengths of the sides do not form a valid triangle!\n(To make a valid triangle, the sum of every two sides must be larger than the third side)";
					Sleep(5000);
				}
			}
			else {
				system("cls");
				std::cout << "Invalid input!";
				Sleep(1000);
				system("cls");
			}
			break;

		case emenus::REMOVESHAPE:
			system("cls");

			if (shape_arr.size() == 0) {
				std::cout << "You have no shapes!!";
				Sleep(1000);
				system("cls");
				curr_menu = emenus::MAIN;
			}
			else {
				std::string temp_input = " ";
				int shape_to_remove = -1;

				for (int i = 0; i < shape_arr.size(); ++i) {
					cShape& curr_shape = *shape_arr[i];
					double circumferance = curr_shape.CalcCirc();
					double area = curr_shape.CalcArea();
					std::string shape_type = curr_shape.CheckType();
					std::cout << std::fixed << std::setprecision(10) << (i + 1) << ". " << shape_type << "--> Circumferance: " << circumferance << " Area: " << area << '\n';
				}
				std::cout << "------------------------------------------------------------------\n";
				std::cout << "What shape do you want to remove? (Enter the number of shape)\n\n";
				std::cout << "Input: ";
				std::cin >> temp_input;
				
				try {
					shape_to_remove = std::stoi(temp_input);
				}
				catch (std::invalid_argument) {
					std::cout << "\nInvalid input! Only numbers!";
					Sleep(1000);
				}
				catch (std::out_of_range) {
					std::cout << "\nToo large! Please lower the value!";
					Sleep(1000);
				}

				//Give the correct index to the vector
				shape_to_remove = shape_to_remove - 1;

				if (shape_to_remove >= shape_arr.size()) {
					std::cout << "\nThat shape doesn't exist!";
					Sleep(1000);
				}
				else {
					delete shape_arr[shape_to_remove];
					shape_arr[shape_to_remove] = nullptr;
					shape_arr.erase(shape_arr.begin() + shape_to_remove);
					system("cls");
					curr_menu = emenus::MAIN;
				}
			}
			break;

		default:
			//Remove all pointers before closing program
			for (int i = 0; i < shape_arr.size(); ++i) {
				delete shape_arr[i];
				shape_arr[i] = nullptr;
			}

			system("cls");
			std::cout << "Thanks for using the program!";
			Sleep(3000);
			return 0;
		}
	}
	//Remove all pointers before closing program
	for (int i = 0; i < shape_arr.size(); ++i) {
		delete shape_arr[i];
		shape_arr[i] = nullptr;
	}
	system("cls");
	std::cout << "Thanks for using the program!";
	Sleep(3000);
	return 0;
}