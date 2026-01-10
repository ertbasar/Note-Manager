#pragma once
#include <iostream>
#include <vector>
#include "note.h"

class NoteManager{
    public:
    // Default constructor is used
    NoteManager() = default;

    // Any other constructor type is prohibited
    template<typename... Args>
    NoteManager(Args&&...) = delete;

    // Adding node to the vector
    void addNote(const std::string str);

    // Removing a node from the vector
    void removeNote(const int& id);

    // Changing the content of the node
    void changeNote(const std::string str, const int id);

    // For listing and printing the note contents
    void listNotes();

    // For returning the last ID number to use it in the input validation
    int lastID();

    private:
    std::vector<Note> m_notes{};
    int m_nextID{1};
};