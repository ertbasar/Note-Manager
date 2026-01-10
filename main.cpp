#include <iostream> 
#include "note.h"
#include "noteManager.h"

int main(){
    // Note manager object which we will use in this program
    NoteManager nm{};
    // For user's selection of operation
    int operation{};
    while(operation != 5){
        std::cout << "Please enter the operation you would like to do \n";
        std::cout << "List All Notes -> 1 \n";
        std::cout << "Add a Note -> 2 \n";
        std::cout << "Change a Note -> 3 \n" ;
        std::cout << "Remove a Note -> 4 \n";
        std::cout << "Exit the Program -> 5 \n";
        
        // For user's selection of operation
        std::cin >> operation;
        std::cin.ignore();
        // Need a check mechanism here

        // For note texts that will be used
        std::string newStr{};
        // For the id input operations
        int idInput{};
        
        switch (operation)
        {
        case 1:
            nm.listNotes();
            std::cout << "\n";
            break;
        case 2:
            std::cout << "Please enter your new note: " << std::endl;
            std::getline(std::cin, newStr);
            nm.addNote(newStr);
            std::cout << "\n";
            break;
        case 3:
            std::cout << "Please enter the ID number of the note you want to change: ";
            std::cin >> idInput;
            std::cin.ignore();
            std::cout << "Please enter your new note: ";
            std::getline(std::cin, newStr);
            nm.changeNote(newStr, idInput);
            std::cout << "\n";
            break;
        case 4:
            std::cout << "Please enter the ID number of the note you want to remove: ";
            std::cin >> idInput;
            std::cin.ignore();
            nm.removeNote(idInput);
            std::cout << "\n";
            break;
        case 5:
            std::cout << "See ya! \n";
            break;
        default:
            break;
        }

    }
    return 0;
}