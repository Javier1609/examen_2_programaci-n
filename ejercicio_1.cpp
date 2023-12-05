#include <iostream>
#include <map>
#include <stdexcept>
#include <string>

class Variante {
private:
    enum class Type {
        INT, FLOAT, STRING, BOOL, NONE
    };

}
class Environment {
private:
    std::map<std::string, Variante> symbolTable;
public:

    Environment() {}


    void insert(const std::string& name, const Variante& value) {
        auto result = symbolTable.insert({name, value});
        if (!result.second) {
            throw std::runtime_error("El simbolo ya existe en el entorno.");
        }
    }


};