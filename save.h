#include <iostream>
#include "noteManager.h"
#include <fstream>
#include "json.hpp"
using json = nlohmann::json;

// Save function
void save(NoteManager& nm);