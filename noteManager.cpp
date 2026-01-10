#include <string>
#include <iostream>
#include "noteManager.h"
#include <algorithm>

// Adding node to the vector
void NoteManager::addNote(const std::string str){
    m_notes.push_back({str, m_nextID++});
};

// Removing a node from the vector
void NoteManager::removeNote(const int& id){
    m_notes.erase(m_notes.begin() + id - 1);
    m_nextID--;
}

// Changing the content of the node
void NoteManager::changeNote(const std::string str, const int id){
    m_notes[id-1].setNote(str);
}

// For listing and printing the note contents
void NoteManager::listNotes(){
    for (int i = 1; i < m_nextID; ++i)
    {
        std::cout << "Note ID: " << i << "\n" << m_notes[i-1].getNote() << "\n";
    }
    
}

int NoteManager::lastID(){
    return m_nextID-1;
}