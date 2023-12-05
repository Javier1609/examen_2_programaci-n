#include <iostream>
#include <map>
#include <stdexcept>
#include <string>

class Variante {
private:
    enum class Type { INT, FLOAT, STRING, BOOL, NONE };

    }
class Environment {
private:
    std::map<std::string, Variante> symbolTable;
};