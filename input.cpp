#include <iostream>

// For getting operation input
int getOperation(){
    int operation{};
    while(true){
        if (std::cin >> operation && operation >= 1 && operation <= 5) {
            std::cin.ignore();
            return operation;
        } else {
            std::cout << "Invalid input. Please try again." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }
    }


// For getting ID input
int getId(int lastID){
    int id{};
    while(true){
        if (std::cin >> id && id >= 1 && id <= lastID) {
            std::cin.ignore();
            return id;
        } else {
            std::cout << "There is no such note with that ID. Please try again." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }
}

// For getting content input
std::string_view getContent(std::string& content){
    std::getline(std::cin, content);
    return content;
}