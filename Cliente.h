#ifndef Cliente_H
#define Cliente_H


#include <vector>
#include <iostream>
#include "Persona.h"
#include <string>

using namespace std;

class Cliente : public Persona{
  private:
    string licencia;
  
  public:
    Cliente() : Persona(), licencia(""){};
    Cliente(string _id, string _nombre, string _licencia) : Persona(_id,_nombre), licencia(_licencia){};

    // Getters
    string getLicencia();
    //Setters
    void setLicencia(string _licencia);
    void imprimirDatos() override;
};

#else
  class Cliente;
#endif