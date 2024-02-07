#include <iostream>                 // Author:          Potop Richard
#include <string>                   // Description:     Student Management System
#include <vector>                   // Github:          https://github.com/richard01000/HW2

#define OUT(var) std::cout<<var<<std::endl;

int mainMenuChoice = 0;//this together with mainMenuLoopTexts must be placed somewhere else

// mainMenuLoopTexts is for all the loop text displayed in the program.
int mainMenuLoopTexts(){//must complete with variants
    std::cout << "|===========================================|\n|Welcome to TUM's student management system!|\n|===========================================|\n\nWhat do you want to do?\n1 - General operations \n2 - Faculty operations\n3 - Student operations\n\n4 - Quit Program\n\nyour input> ";
    std::cin>>mainMenuChoice;
    switch (mainMenuChoice){//switch to manage all the text that could be accessed in the main menu
    case 1:
        std::cout<<"\n\n|==================|\n|General operations|\n|==================|\n\nWhat do you want to do?\n\n1 - create faculty\n2 - display faculties\n3 - search student and show faculty\n4 - display all faculties of a field\n\n5 - Back\n6 - Quit Program\n\nyour input> ";
        break;
    case 2:
        std::cout<<"\n\n|==================|\n|Faculty operations|\n|==================|\n\nWhat do you want to do?\n\n1 - display enroled students\n2 - display graduated stundents\n3 - check if student belongs to faculty\n\n4 - Back\n5 - Quit Program\n\nyour input> ";
        break;
    case 3:
        std::cout<<"\n\n|==================|\n|Student operations|\n|==================|\n\nWhat do you want to do?\n\n1 -";
        break;
    default:
        std::cout<<"Error incorrect input pick between 1 and 3";
    }
    // this shit is crazy all this must be in general operations
    std::string textCreateFaculty;
    std::string searchStundentFaculty;
    std::string displayUniversityFaculties;
    std::string displayAllFacultiesBelongingToAField;
    return 0;// i dont fucking know why this is here it gives warning without it
}

class studentData {
    public:
    std::string firstName;
    std::string lastName;
    std::string email;
    std::string enrollmentDate;
    std::string dateOfBirth;
};
class faculty {
    std::string facultyName;
    std::string facultyAbbreviation;
    std::vector<std::string> students {//must find a way to work with this bitch together with enumeration
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
    public:
    std::vector<std::string> faculties;
    generalOperations(){// for now it works to input and output elements into a list now the only thing left here is to make more lists like this bitch
        std::cout<<"Testing for now --> ";
        std::cin>>mainMenuChoice;
        if(mainMenuChoice==1){
            std::string listElement;    // AAAAAAAAAAAA dosent work because is in a IF statement and all this bullshit only works if (mainMenuChoice == 1)
            std::cout<<"Enter faculty: ";
            std::cin.ignore();// if i dont use cin.ingnore(); then the program is bitching and is skiping the getline(); ending the program
            getline(std::cin, listElement);
            faculties.push_back(listElement);
            //this if for showing the list of faculties
            for(std::string a : faculties){// the variable (string a) takes the value of the components inside faculties one by one and goes trough loop (range based loop77)
               std::cout<<a<<std::endl;
            }
        }
    }
};
int main(){
    mainMenuLoopTexts();
    return 0;
}