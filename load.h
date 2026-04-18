#include <iostream>
#include "noteManager.h"
#include <fstream>
#include "json.hpp"
using json = nlohmann::json;

// Loading from JSON file
void load(NoteManager& nm);