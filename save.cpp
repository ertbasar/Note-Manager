#include <iostream>
#include "noteManager.h"
#include "save.h"
#include <fstream>
#include "json.hpp"
using json = nlohmann::json;

void save(NoteManager& nm){
    json j_list = json::array(); // JSON array we will inject the data before saving

    // injecting notes to JSON array
    for(int i = 0; i < nm.lastID(); i++){
        json j_note;
        j_note["id"] = i+1;
        j_note["content"] = nm.getNotesVector()[i].getNote();
        j_list.push_back(j_note);
    }

    // injecting JSON array to a file
    std::ofstream file("notes.json");
    if(file.is_open()){
        file << j_list.dump(4);
        file.close();
        std::cout << "Data is saved." << std::endl;
    }
}