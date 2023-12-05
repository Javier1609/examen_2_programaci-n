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
    Variante lookup(const std::string& name) const {
        auto it = symbolTable.find(name);
        if (it != symbolTable.end()) {
            return it->second;
        } else {
            throw std::runtime_error("El símbolo no ha sido encontrado en el entorno.");
        }
    }
    try {
        Environment env;

        env.insert("variable1", Variante(42));

        Variante result = env.lookup("variable2");
    }
    catch (const std::runtime_error& e) {
        std::cout << e.what() << std::endl;
    }
     return Variante();



};