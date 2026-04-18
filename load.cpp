#include <iostream>
#include "noteManager.h"
#include <fstream>
#include "json.hpp"
using json = nlohmann::json;

// Loading from JSON file
void load(NoteManager& nm){
    std::ifstream file("notes.json");
    if (!file.is_open()) {
        std::cout << "File not found. New one is created." << std::endl;
        return;
    }

    json j_list;
    file >> j_list; // injecting the JSON file to the JSON object

    nm.getNotesVector().clear();
    for(const auto& item : j_list){
        nm.addNote(item["content"]);
    }
    file.close();
    std::cout << "Data is loaded." << std::endl;
}