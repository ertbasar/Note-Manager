#include <string>
#include <iostream>
#include "noteManager.h"
#include <algorithm>

// Adding node to the vector
void NoteManager::addNote(const std::string& str){
    m_notes.push_back({str, m_nextID++});
};

// Removing a node from the vector
void NoteManager::removeNote(const int& id){
    m_notes.erase(m_notes.begin() + id - 1);
}

// For listing and printing the note contents
void NoteManager::listNotes(){
    for (int i = 0; i < m_nextID; i++)
    {
        std::cout << "Note ID: " << i+1 << "\n" << m_notes[i].getNote() << "\n";
    }
    
}