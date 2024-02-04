#ifndef Motocicleta_H
#define Motocicleta_H

#include <vector>
#include <iostream>
#include "Veiculo.h"

using namespace std;

class Motocicleta : public Veiculo{
  private:

    float cilindraje;

  public:

    Motocicleta() : Veiculo(), cilindraje(0.0) {};
    Motocicleta(string _placa, string _marca, string _modelo, float _cilindraje) : Veiculo(_placa,_marca,_modelo), cilindraje(_cilindraje){};

    // Getters
    float getCilindraje();

    // Setters
    void setCilindraje(float _cilindraje);
    
    // Metodos de la clase
    string getTipo();
    void imprimirDatos();
    
};

#else
  class Motocicleta;
#endif