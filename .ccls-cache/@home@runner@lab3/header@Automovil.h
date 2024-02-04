#ifndef Automovil_H
#define Automovil_H

#include <vector>
#include <iostream>
#include "Veiculo.h"

using namespace std;

class Automovil : public Veiculo{
  private:
    int numeroPuertas;
    int numeroPasajeros;

  public:
    Automovil() : Veiculo(), numeroPuertas(0), numeroPasajeros(0){};
    Automovil(string _placa, string _marca, string _modelo, int _numeroPuertas, int _numeroPasajeros) : Veiculo(_placa, _marca, _modelo), numeroPuertas(_numeroPuertas), numeroPasajeros(_numeroPasajeros){};
    // Getters
    int getNumeroPuertas();
    int getNumeroPasajeros();
    // setters
    void setNumeroPuertas(int _numeroPuertas);
    void setNumeroPasajeros(int _numeroPasajeros);
    // Metodos de case
    void imprimirDatos();

};


#else
  Class Automovil;
#endif