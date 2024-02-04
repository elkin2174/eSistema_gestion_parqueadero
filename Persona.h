#ifndef Persona_H
#define Persona_H

#include <vector>
#include <iostream>

using namespace std;

class Persona{

  private:
    string id;
    string nombre;
    
  public:
    Persona() : id(""), nombre(""){};
    Persona(string _id, string _nombre) : id(_id), nombre(_nombre){};

    // Getters
    string getId();
    string getNombre();

    //Setters
    void setId(string _id);
    void setNombre(string _nombre);

    // Metodos de clase
    virtual void imprimirDatos();
    
};

#else
  class Persona;
#endif