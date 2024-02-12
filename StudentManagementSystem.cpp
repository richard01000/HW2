#include <iostream>                 // Author:          Potop Richard
#include <string>                   // File:            StudentManagementSystem.cpp
#include <vector>                   // Description:     Student Management System
#include <fstream>                  // Github:          https://github.com/richard01000/HW2

#define OUT(var) std::cout<<var<<std::endl;
#define IGNORE std::cin.ignore();

int g_mainMenuUserChoice = 0; // will nedd more global variables for bool states
bool state = true;
/* // il use this saveSystem later now i dont have brain for it
void saveSystem() {// AAAAAAAAA this mf will be used later for saving into files (grade 9 task) it might need a class
	std::ofstream saveFile("save.txt");
	saveFile << "aue"; QsaveFile.close();

	std::ofstream logFile("log.txt"); logFile.close();         // AAAAAAAAA will need to create a log system for all the important changes (grade 10 task)
}*/
//idk whats this garbage
/*
	// this shit is crazy all this must be in general variables
	std::string textCreateFaculty;
	std::string searchStundentFaculty;
	std::string displayUniversityFaculties;
	std::string displayAllFacultiesBelongingToAField;
*/

class allClasses {
protected:
	class generalVariables {
		std::vector<std::string> faculties;
	};

	class facultyVariables {
		std::string facultyName;
		std::string facultyAbbreviation;
		std::vector<std::string> students{
			"1",
			"2",
			"3"
		};
		std::vector<std::string> studyField{
			"MECHANICAL_ENGINEERING"
			"SOFTWARE_ENGINEERING"
			"FOOD_TECHNOLOGY"
			"URBANISM_ARCHITECTURE"
			"VETERINARY_MEDICINE"
		};
	};

	class studentVariables {
	protected:
		std::string firstName;
		std::string lastName;
		std::string email;
		std::string enrollmentDate;
		std::string dateOfBirth;
	};
};

class allOperations : public allClasses {
public:
	void generalOperations() {          // THIS IS NOT DONE
		//std::string listElement;
		//std::cout << "Enter faculty: ";
		IGNORE;// if i dont use cin.ingnore(); then the program is bitching and is skiping the getline(); ending the program
		//getline(std::cin, listElement);
		//faculties.push_back(listElement);
		//this if for showing the list of faculties
		//for (std::string a : faculties) {// the variable (string a) takes the value of the components inside faculties one by one and goes trough loop (range based loop77)
			//std::cout << a << std::endl;
		//}
	//}
	}

	void facultyOpertations() {
		while (*statePointer == true) {
			std::cin >> g_mainMenuUserChoice;
			switch (g_mainMenuUserChoice) {
			case 1:
				std::cout << "\nCreate and assign a student to a faculty:\n";
				break;
			case 2:
				std::cout << "\nGraduate a student from a faculty:\n";
				break;
			case 3:           // (Graduates would be ignored)
				std::cout << "\nDisplay current enrolled students:\n"; // maybe add choices to search by first name/last name/email
				break;
			case 4:           // (Currently enrolled students would be ignored).
				std::cout << "\nDisplay graduates:\n";
				break;
			case 5:
				std::cout << "\nTell or not if a student belongs to a faculty:\n";
				break;
			case 6:
				std::cout << "\nGoing back\n";
				state = false;
				break;
			case 7:
				std::cout << "\nQuiting\n";
				exit(0);
			default:
				std::cout << "\nError incorrect input pick between 1 and 5\n";
			}
		}
	}

	void studentOperations() {
		while (*statePointer == true) {
			std::cin >> g_mainMenuUserChoice;
			switch (g_mainMenuUserChoice) {
			case 1:

				break;
			case 2:

				break;
			case 3:

				break;
			case 4:
				std::cout << "\nGoing back\n";
				state = false;
				break;
			case 5:
				std::cout << "\nQuiting\n";
				exit(0);
			default:
				std::cout << "\nError incorrect input pick between 1 and 5\n";
			}
		}
	}
};

int main() {
	allOperations function;
	while (*statePointer == true) {
		std::cout << "\n|===========================================|\n|Welcome to TUM's student management system!|\n|===========================================|\n\nWhat do you want to do?\n1 - General operations \n2 - Faculty operations\n3 - Student operations\n\n4 - Quit Program\n\nyour input> ";
		std::cin >> g_mainMenuUserChoice;
		switch (g_mainMenuUserChoice) {
		case 1:
			std::cout << "\n\n|==================|\n|General operations|\n|==================|\n\nWhat do you want to do?\n\n1 - create faculty\n2 - display faculties\n3 - search student and show faculty\n4 - display all faculties of a field\n\n5 - Back\n6 - Quit Program\n\nyour input> ";
			function.generalOperations();// this is empty !!!
			break;
		case 2:
			std::cout << "\n\n|==================|\n|Faculty operations|\n|==================|\n\nWhat do you want to do?\n\n1 - Create and assign a student to a faculty\n2 - Graduate a student from a faculty\n3 - Display current enrolled students\n4 - Display graduates\n5 - Tell or not if a student belongs to a faculty\n\n6 - Back\n7 - Quit Program\n\nyour input> ";
			function.facultyOpertations();
			break;
		case 3:
			std::cout << "\n\n|==================|\n|Student operations|\n|==================|\n\nWhat do you want to do?\n\n1 - add a new student\n2 - remove a student\n3 - change information of a student\n\n4 - Back\n\n5 - Quit Program\n\nyour input>";
			function.studentOperations();
			break;
		case 4:
			std::cout << "\nQuiting";
			exit(0);
		default:
			std::cout << "\nError incorrect input pick between 1 and 4\n";
		}
	}
}