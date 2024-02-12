#include <iostream>                 // Author:          Potop Richard
#include <string>                   // File:            StudentManagementSystem.cpp
#include <vector>                   // Description:     Student Management System
#include <fstream>                  // Github:          https://github.com/richard01000/HW2

#define OUT(var) std::cout<<var<<std::endl;
#define IGNORE std::cin.ignore();

// ADD POINTERS!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!








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

<<<<<<< HEAD
class allClasses {
public:
	int mainMenuUserChoice = 0;
	int* mainMenuUserChoicePointer = &mainMenuUserChoice;
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
		bool state = true;
		while (state == true) {
			std::cin >> *mainMenuUserChoicePointer;
			switch (*mainMenuUserChoicePointer) {
			case 1:
				std::cout << std::endl << "Enrolled students:" << std::endl;
				break;
			case 2:
				std::cout << std::endl << "Graduated students:" << std::endl;
				break;
			case 3:
				std::cout << std::endl << "Search student by email:" << std::endl; // maybe add choices to search by first name/last name/email
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

	void studentOperations() {      // THIS IS NOT DONE
		bool state = true;      // I THINK ITS TIME TO USE POINTERS HERE
		while (state == true) {
			std::cin >> *mainMenuUserChoicePointer;
			switch (*mainMenuUserChoicePointer) {
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
	allClasses variable;
	allOperations function;
	while (true) {
		std::cout << "\n|===========================================|\n|Welcome to TUM's student management system!|\n|===========================================|\n\nWhat do you want to do?\n1 - General operations \n2 - Faculty operations\n3 - Student operations\n\n4 - Quit Program\n\nyour input> ";
		std::cin >> variable.mainMenuUserChoice;// stupid cunt dosen't want to take the pointer
		switch (variable.mainMenuUserChoice) {//switch to manage all the text that could be accessed in the main menu
		case 1:
			std::cout << "\n\n|==================|\n|General operations|\n|==================|\n\nWhat do you want to do?\n\n1 - create faculty\n2 - display faculties\n3 - search student and show faculty\n4 - display all faculties of a field\n\n5 - Back\n6 - Quit Program\n\nyour input> ";
			function.generalOperations();// this is empty !!!
			break;
		case 2:
			std::cout << "\n\n|==================|\n|Faculty operations|\n|==================|\n\nWhat do you want to do?\n\n1 - display enroled students\n2 - display graduated stundents\n3 - check if student belongs to faculty\n\n4 - Back\n5 - Quit Program\n\nyour input> ";
			function.facultyOpertations();
			break;
		case 3:
			std::cout << "\n\n|==================|\n|Student operations|\n|==================|\n\nWhat do you want to do?\n\n1 - add a new student\n2 - remove a student\n3 - change information of a student\n\n4 - Back\n\n5 - Quit Program\n\nyour input>";// i will die while making this
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

class allClasses {
public:
    int mainMenuUserChoice = 0;
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



s
class allOperations : public allClasses{

void generalOperations() {// for now it works to input and output elements into a list now the only thing left here is to make more lists like this bitch
        //std::cin>>mainMenuUserChoice;
        //if(mainMenuUserChoice==1){
        //std::string listElement;    // AAAAAAAAAAAA dosent work because is in a IF statement and all this bullshit only works if (mainMenuUserChoice == 1)
        //std::cout << "Enter faculty: ";
        //std::cin.ignore();// if i dont use cin.ingnore(); then the program is bitching and is skiping the getline(); ending the program
        //getline(std::cin, listElement);
        //faculties.push_back(listElement);
        //this if for showing the list of faculties
        //for (std::string a : faculties) {// the variable (string a) takes the value of the components inside faculties one by one and goes trough loop (range based loop77)
            //std::cout << a << std::endl;
        //}
    }
//} //all ok this must stay here, uncomment when the if statement works

void facultyOpertations() {
    allClasses choice;
    while (true) {
        std::cin >> choice.mainMenuUserChoice;
        switch (choice.mainMenuUserChoice) {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            std::cout << "\nQuiting";
            exit(0);
        default:
            std::cout << "\nError incorrect input pick between 1 and 4\n";
        }
    }
}


void studentOperations() {

}


};








int main() {
    allClasses choice; 
        while (true) {
            std::cout << "\n|===========================================|\n|Welcome to TUM's student management system!|\n|===========================================|\n\nWhat do you want to do?\n1 - General operations \n2 - Faculty operations\n3 - Student operations\n\n4 - Quit Program\n\nyour input> ";
            std::cin >> choice.mainMenuUserChoice;
            switch (choice.mainMenuUserChoice) {//switch to manage all the text that could be accessed in the main menu
            case 1:
                std::cout << "\n\n|==================|\n|General operations|\n|==================|\n\nWhat do you want to do?\n\n1 - create faculty\n2 - display faculties\n3 - search student and show faculty\n4 - display all faculties of a field\n\n5 - Back\n6 - Quit Program\n\nyour input> ";
                break;
            case 2:
                std::cout << "\n\n|==================|\n|Faculty operations|\n|==================|\n\nWhat do you want to do?\n\n1 - display enroled students\n2 - display graduated stundents\n3 - check if student belongs to faculty\n\n4 - Back\n5 - Quit Program\n\nyour input> ";
                break;
            case 3:
                std::cout << "\n\n|==================|\n|Student operations|\n|==================|\n\nWhat do you want to do?\n\n1 - add a new student\n2 - remove a student\n3 - change information of a student\n\n4 - Quit Program\n\nyour input>";// i will die while making this
                break;
            case 4:
                std::cout << "\nQuiting";
                exit(0);
            default:
                std::cout << "\nError incorrect input pick between 1 and 4\n";
            }
        }
    //std::cout << sizeof(generalOperations) << std::endl;
    //std::cout << sizeof(facultyOpertations) << std::endl;
    //std::cout << sizeof(studentOperations) << std::endl;
    return 0;
}
>>>>>>> eb78a70a735e1d852eaae622b75469c58602afb3
