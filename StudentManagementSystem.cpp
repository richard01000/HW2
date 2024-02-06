//
// File:        StudentManagementSystem.cpp
// Description: Student Management System
// Author:      Potop Richard
// Github:      https://github.com/richard01000/HW2
//

#include <iostream>
#include <string>
#include <list>

// mainMenuLoopTexts is for all the loop text displayed in the program.
struct mainMenuLoopTexts {//must complete with variants
    int userChoice = 0;
    std::string textStart = "|===========================================|\n|Welcome to TUM's student management system!|\n|===========================================|\n\nWhat do you want to do?\n1 - General operations \n2 - Faculty operations\n3 - Student operations\n\n4 - Quit Program\n\nyour input> ";
    std::string textGeneralOperations = "\n\n|==================|\n|General operations|\n|==================|\n\nWhat do you want to do?\n\n1 - create faculty\n2 - display faculties\n3 - search student and show faculty\n4 - display all faculties of a field\n\n5 - Back\n6 - Quit Program\n\nyour input> ";
    std::string textFacultyOperations = "\n\n|==================|\n|Faculty operations|\n|==================|\n\nWhat do you want to do?\n\n1 - display enroled students\n2 - display graduated stundents\n3 - check if student belongs to faculty\n\n4 - Back\n5 - Quit Program\n\nyour input> ";
    std::string textStudentOperations = "\n\n|==================|\n|Student operations|\n|==================|\n\nWhat do you want to do?\n\n1 -";
    // this shit is crazy all this must be in general operations
    std::string textCreateFaculty;
    std::string searchStundentFaculty;
    std::string displayUniversityFaculties;
    std::string displayAllFacultiesBelongingToAField;
};
mainMenuLoopTexts txt;//object to call anything from mainMenuLoopTexts

class student {
    std::string firstName = "First Name: ";
    std::string lastName = "Last Name: ";
    std::string email = "Email: ";
    std::string enrollmentDate = "Enrollment date(dd/mm/yyyy): ";
    std::string dateOfBirth = "Date of birth(dd/mm/yyyy): ";
    
};
class faculty {
    std::string name = "Name: ";
    std::string abbreviation = "Abbreviation: ";
    std::list<std::string> students {//must find a way to work with this bitch together with enumeration
        "1",
        "2",
        "3"
    };
    enum studyField {
        MECHANICAL_ENGINEERING,
        SOFTWARE_ENGINEERING,
        FOOD_TECHNOLOGY,
        URBANISM_ARCHITECTURE,
        VETERINARY_MEDICINE
    };
};
class generalOperations{
    std::list<std::string> faculties;
    public:
    generalOperations(){// for now it works to input and output elements into a list now the only thing left here is to make more lists like this bitch
        std::cout<<"Testing for now --> ";
        std::cin>>txt.userChoice;
        if(txt.userChoice==1 || txt.userChoice==2){
            //if(txt.userChoice==1){
            std::string listElement;    // AAAAAAAAAAAA dosent work because is in a IF statement and all this bullshit only works if (userChoice == 1)
            std::cout<<"Enter faculty: ";
            std::cin.ignore();// if i dont use cin.ingnore(); then the program is bitching and is skiping the getline(); ending the program
            getline(std::cin, listElement);
            faculties.push_back(listElement);
            //}
            //if(txt.userChoice==2){
            //this if for showing the list of faculties
            for(std::string a : faculties){// the variable (string a) takes the value of the components inside faculties one by one and goes trough loop (range based loop77)
               std::cout<<a<<std::endl;
            }
        //}
        }

    
    }
};
int main() {
    generalOperations();
    generalOperations();
    //
    //  test loop texts
    //
    //  std::cout<<txt.textStart;
    //  std::cout<<txt.textGeneralOperations;
    //  std::cout<<txt.textFacultyOperations;
    //  std::cout<<txt.textStudentOperations;
    //
    
    return 0;
}