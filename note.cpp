#include <string>
#include <iostream>
#include "note.h"

// Constructor with content and id
Note::Note(const std::string& str, const int& id):m_content{str},m_id{id}{}

// Func. for setting the note node content
void Note::setNote(const std::string& str){
    m_content = str;
}

// Func. for returning the note node content
std::string Note::getNote() const {
    return m_content;
}

// Func. for printing the note node content
void Note::printNote() const {
    std::cout << m_content << "\n";
}