#include <iostream>                 // Author:          Potop Richard
#include <string>                   // File:            StudentManagementSystem.cpp
#include <vector>                   // Description:     Student Management System
#include <fstream>                  // Github:          https://github.com/richard01000/HW2

#define OUT(var) std::cout<<var<<std::endl; //using OUT() for fast output of a variable

/* // il use this saveSystem later now i dont have brain for it
void saveSystem() {// AAAAAAAAA this mf will be used later for saving into files (grade 9 task) it might need a class
    std::ofstream saveFile("save.txt");
    saveFile << "aue"; saveFile.close();

    std::ofstream logFile("log.txt"); logFile.close();         // AAAAAAAAA will need to create a log system for all the important changes (grade 10 task)
}*/
//idk whats this garbage
/*
    // this shit is crazy all this must be in general operations
    std::string textCreateFaculty;
    std::string searchStundentFaculty;
    std::string displayUniversityFaculties;
    std::string displayAllFacultiesBelongingToAField;
*/

class curentState {
protected:
    int mainMenuUserChoice = 0;
    bool mainMenuActive = true;
    bool generalMenuActive = false;
    bool facultyMenuActive = false;         //maybe to make the save system work like: continnue from where you left --> y ; then use this mf
    bool studentMenuActive = false;
};

class generalOperations {
private:
    std::vector<std::string> faculties;
public:
    generalOperations() {// for now it works to input and output elements into a list now the only thing left here is to make more lists like this bitch
        //std::cin>>mainMenuUserChoice;
        //if(mainMenuUserChoice==1){
        std::string listElement;    // AAAAAAAAAAAA dosent work because is in a IF statement and all this bullshit only works if (mainMenuUserChoice == 1)
        std::cout << "Enter faculty: ";
        std::cin.ignore();// if i dont use cin.ingnore(); then the program is bitching and is skiping the getline(); ending the program
        getline(std::cin, listElement);
        faculties.push_back(listElement);
        //this if for showing the list of faculties
        for (std::string a : faculties) {// the variable (string a) takes the value of the components inside faculties one by one and goes trough loop (range based loop77)
            std::cout << a << std::endl;
        }
    }
    //} //all ok this must stay here, uncomment when the if statement works
};

class facultyOpertations : public curentState {
private:
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
public:
    facultyOpertations() {
        while (facultyMenuActive == true) {
            std::cin >> mainMenuUserChoice;
            switch (mainMenuUserChoice) {
            case 1:
                facultyMenuActive = false;
                mainMenuActive = true;
                break;
            case 2:
                facultyMenuActive = false;
                mainMenuActive = true;
                break;
            case 3:
                facultyMenuActive = false;
                mainMenuActive = true;
                break;
            case 4:
                std::cout << "\nQuiting";
                exit(0);
            default:
                std::cout << "\nError incorrect input pick between 1 and 4\n";
            }
        }
    }
};

class studentOperations {
private:
    std::string firstName;
    std::string lastName;
    std::string email;
    std::string enrollmentDate;
    std::string dateOfBirth;
public:
    studentOperations() {

    }
};

class mainMenuOperations : public curentState {//just wont work maybe delete this it dosent do anything
    mainMenuOperations() {
        while (facultyMenuActive == true) {
            std::cout << "\n|===========================================|\n|Welcome to TUM's student management system!|\n|===========================================|\n\nWhat do you want to do?\n1 - General operations \n2 - Faculty operations\n3 - Student operations\n\n4 - Quit Program\n\nyour input> ";
            std::cin >> mainMenuUserChoice;
            switch (mainMenuUserChoice) {//switch to manage all the text that could be accessed in the main menu
            case 1:
                std::cout << "\n\n|==================|\n|General operations|\n|==================|\n\nWhat do you want to do?\n\n1 - create faculty\n2 - display faculties\n3 - search student and show faculty\n4 - display all faculties of a field\n\n5 - Back\n6 - Quit Program\n\nyour input> ";
                generalMenuActive = true;
                mainMenuActive = false;
                break;
            case 2:
                std::cout << "\n\n|==================|\n|Faculty operations|\n|==================|\n\nWhat do you want to do?\n\n1 - display enroled students\n2 - display graduated stundents\n3 - check if student belongs to faculty\n\n4 - Back\n5 - Quit Program\n\nyour input> ";
                facultyMenuActive = true;
                mainMenuActive = false;
                break;
            case 3:// AAAAAAAAAA dont forget to add options inside this operation
                std::cout << "\n\n|==================|\n|Student operations|\n|==================|\n\nWhat do you want to do?\n\n1 - add a new student\n2 - remove a student\n3 - change information of a student\n\n4 - Quit Program\n\nyour input>";// i will die while making this
                studentMenuActive = true;
                mainMenuActive = false;
                break;
            case 4:
                std::cout << "\nQuiting";
                exit(0);
            default:
                std::cout << "\nError incorrect input pick between 1 and 4\n";
            }
        }
    }
};

int main() {
    std::cout << sizeof(generalOperations) << std::endl;
    std::cout << sizeof(facultyOpertations) << std::endl;
    std::cout << sizeof(studentOperations) << std::endl;
    return 0;
}