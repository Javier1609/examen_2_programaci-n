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


    void insert(const std::string &name, const Variante &value) {
        auto result = symbolTable.insert({name, value});
        if (!result.second) {
            throw std::runtime_error("El simbolo ya existe en el entorno.");
        }
    }

    Variante lookup(const std::string &name) const {
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
    catch (
    const std::runtime_error &e
    ) {
        std::cout << e.what() << std::endl;
    }
    return

    Variante();

    void remove(const std::string &name) {
        auto it = symbolTable.find(name);
        if (it != symbolTable.end()) {
            symbolTable.erase(it);
        } else {
            throw std::runtime_error("Símbolo no encontrado en el entorno.");
        }
    }

    bool exists(const std::string &name) const {
        return symbolTable.find(name) != symbolTable.end();
    }

    Environment(const Environment &other) = delete;
    Environment.insert("jugador_x", Variante(0.0));

    if (env.exists("jugador_x") ) {
        double posx = env.lookup("jugador_x").get<double>();
        double newPosx = posx + 1.0;

        env.insert("jugador_x",
        Variante(newPosx)
        );

    } else {
        std::cerr << "Error: Alguno de los símbolos del jugador no existe en el entorno." << std::endl;

    }

    env.insert("jugador_x",
    Variante(newPosx)
    );

    else {
        std::cerr << "Error: Alguno de los símbolos del jugador no existe en el entorno." << std::endl;
    }

}
}