#pragma once
#include <string>

class Note{
    public:
    // Default constructor is prohibited
    Note() = delete;

    // Constructor with content
    Note(const std::string& str, const int& id);

    // Func. for setting the note node content
    void setNote(const std::string& str);

    // Func. for returning the note node content
    std::string getNote() const;

    // Func. for printing the note node content
    void printNote()const;

    private:
    int m_id{};
    std::string m_content{};
};