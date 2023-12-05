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
    bool exists(const std::string& name) const {
        return symbolTable.find(name) != symbolTable.end();
    }

    Environment
    env.insert("jugador_x", Variant(0.0));
    env.insert("jugador_y", Variant(10.0));
    env.insert("jugador_z", Variant(0.0));
    env.insert("jugador_vida", Variant(100));

    if (env.exists("jugador_x") && env.exists("jugador_y") && env.exists("jugador_z") && env.exists("jugador_vida")) {
        double posx = env.lookup("jugador_x").get<double>();
        double posy = env.lookup("jugador_y").get<double>();
        double posz = env.lookup("jugador_z").get<double>();
        double posvida = env.lookup("jugador_vida").get<double>();
    }

    env.insert("jugador_x", Variant(newPosx));;

}




};