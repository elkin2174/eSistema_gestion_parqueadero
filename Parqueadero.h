#ifndef Parqueadero_H
#define Parqueadero_H

#include <vector>
#include <iostream>
#include "Veiculo.h"
#include "Automovil.h"
#include "Motocicleta.h"
#include "Recibo.h"
#include "Cliente.h"
using namespace std;

class Parqueadero{
  private:
    string nombre;
    string nit;
    string direccion;
    vector<Veiculo*> automoviles;
    vector<Veiculo*> motocicletas;
    vector<Persona*> clientes;
    vector<Recibo*> recibos;

  public:
    Parqueadero() : nombre(""), nit(""), direccion(""){};
    Parqueadero(string _nombre, string _nit,string _direccion) : nombre(_nombre), nit(_nit), direccion(_direccion){};

    //Getters
    string getNombre();
    string getNIT();
    string getDireccion();

    // Setters
    void setNombre(string _nombre);
    void setNIT(string _nit);
    void setDireccion(string _direccion);

    //Metodos
    void imprimirCantidad();
    void imprimirInforme();
    void generarRecibo();
    void addAutomovil(Veiculo* a);
    void addMotocicleta(Veiculo* m);
    void addCliente(Persona* c);
    void imprimirRecaudo();
    void imprimirMayorTiempo();
};
#else
  class Parqueadero;
#endif