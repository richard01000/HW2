#include <iostream>                 // Author:          Potop Richard
#include <string>                   // File:            StudentManagementSystem.cpp
#include <vector>                   // Description:     Student Management System
#include <fstream>                  // Github:          https://github.com/richard01000/HW2

#define OUT(var) std::cout<<var<<std::endl;
#define IGNORE std::cin.ignore();

int g_mainMenuUserChoice = 0;
bool g_mainMenuState = true;
bool g_generalMenuState = false;
bool g_facultyMenuState = false;

/*class fileManager {
protected:
	void saveSystem(std::string a) {
		std::ofstream saveFile("save.txt");
		for (int i = 0; i < 1; i++) {
			saveFile << a << std::endl;
			saveFile.close();
		}
	}
};*/

class allClasses {
protected:
	class generalVariables {
	public:
		std::string faculties; // will contain: facultyName / abbreviation / students (pick a list) / studyField
	};

	class facultyVariables {
		std::string enrolledStudents; // will contain: firstName / lastName / email / enrollementDate / dateOFBirth
		std::string graduatedStudents;
		std::string studentFaculty;
		std::vector<std::string> students;
	};
};

class allOperations : public allClasses/*, public fileManager */ {
public:
	void quitOption() {
		std::cout << "\nQuiting\n";
		exit(0);
	}

	void generalOperations() {
		generalVariables obj;
		while (g_generalMenuState == true) {
			std::cin >> g_mainMenuUserChoice;
			switch (g_mainMenuUserChoice) {
			case 1:
				std::cout << "\n1 - Create a new faculty:\n";
				break;
			case 2:
				std::cout << "\n2 - Search what faculty a student belongs to by a unique identifier:\n"; //  (for example by email or a unique ID).
				break;
			case 3:
				std::cout << "\n3 - Display University faculties:\n";
				break;
			case 4:
				std::cout << "\n4 - Display all faculties belonging to a field:\n";
				break;
			case 5:
				std::cout << "\n5 - Going back\n";
				g_generalMenuState = false;
				g_mainMenuState = true;
				break;
			case 6:
				quitOption();
			default:
				std::cout << "\nError incorrect input pick between 1 and 5\n";
				break;
			}
		}
	}

	void facultyOpertations() {
		while (g_facultyMenuState == true) {
			std::cin >> g_mainMenuUserChoice;
			switch (g_mainMenuUserChoice) {
			case 1:
				std::cout << "\n1 - Create and assign a student to a faculty:\n";
				break;
			case 2:
				std::cout << "\n2 - Graduate a student from a faculty:\n";
				break;
			case 3:
				std::cout << "\n3 - Display current enrolled students:\n";// (Graduates would be ignored)
				break;
			case 4:
				std::cout << "\n4 - Display graduates:\n";// (Currently enrolled students would be ignored).
				break;
			case 5:
				std::cout << "\n5 - Tell or not if a student belongs to a faculty:\n";
				break;
			case 6:
				std::cout << "\n6 - Going back\n";
				g_facultyMenuState = false;
				g_mainMenuState = true;
				break;
			case 7:
				quitOption();
			default:
				std::cout << "\nError incorrect input pick between 1 and 5\n";
				break;
			}
		}
	}
};

int main() {
	allOperations function;
	while (g_mainMenuState == true) {
		std::cout << "\n|===========================================|\n|Welcome to TUM's student management system!|\n|===========================================|\n\nWhat do you want to do?\n1 - General operations \n2 - Faculty operations\n\n3 - Quit Program\n\nyour input> ";
		std::cin >> g_mainMenuUserChoice;
		switch (g_mainMenuUserChoice) {
		case 1:
			std::cout << "\n\n|==================|\n|General operations|\n|==================|\n\nWhat do you want to do?\n\n1 - create faculty\n2 - display faculties\n3 - search student and show faculty\n4 - display all faculties of a field\n\n5 - Back\n6 - Quit Program\n\nyour input> ";
			g_mainMenuState = false;
			g_generalMenuState = true;
			function.generalOperations();
			break;
		case 2:
			std::cout << "\n\n|==================|\n|Faculty operations|\n|==================|\n\nWhat do you want to do?\n\n1 - Create and assign a student to a faculty\n2 - Graduate a student from a faculty\n3 - Display current enrolled students\n4 - Display graduates\n5 - Tell or not if a student belongs to a faculty\n\n6 - Back\n7 - Quit Program\n\nyour input> ";
			g_mainMenuState = false;
			g_facultyMenuState = true;
			function.facultyOpertations();
			break;
		case 3:
			function.quitOption();
		default:
			std::cout << "\nError incorrect input pick between 1 and 4\n";
		}
	}
}