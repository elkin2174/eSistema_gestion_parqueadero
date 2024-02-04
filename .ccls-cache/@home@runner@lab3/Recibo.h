#ifndef Recibo_H
#define Recibo_H

#include <vector>
#include <iostream>
#include <ctime>
#include "Cliente.h"
#include "Automovil.h"
#include "Motocicleta.h"

using namespace std;

class Recibo{
  private:
    int horaLlegada;
    int horaSalida;
    int minutoLlegada;
    int minutoSalida;
    time_t now = time(0);
    Persona* cliente;
    Veiculo* vehiculo;

  public:
    // Constructor para recibo de vehiculo
    Recibo(int _horaLlegada, int _horaSalida, int _minutoLlegada, int _minutoSalida, string _id, string _nombre, string _licencia, string _placa,string _marca, string _modelo, int _puertas, int _pasajeros)
: horaLlegada(_horaLlegada), horaSalida(_horaSalida), minutoLlegada(_minutoLlegada), minutoSalida(_minutoSalida),  cliente(new Cliente(_id, _nombre, _licencia)), vehiculo(new Automovil(_placa, _marca, _modelo,_puertas,_pasajeros)){};
    // Constructo para Recibo de Motocicleta
    Recibo(int _horaLlegada, int _horaSalida, int _minutoLlegada, int _minutoSalida, string _id, string _nombre, string _licencia, string _placa,string _marca, string _modelo, float _cilindraje)
  : horaLlegada(_horaLlegada), horaSalida(_horaSalida), minutoLlegada(_minutoLlegada), minutoSalida(_minutoSalida),  cliente(new Cliente(_id, _nombre, _licencia)), vehiculo(new Motocicleta(_placa, _marca, _modelo,_cilindraje)){};

    string getFecha();
    double getHoras();
    double getTarifa();
    Persona* getCliente();
    Veiculo* getVeiculo();
    
    void imprimirRecibo();

;
};
//  std::cout << std::put_time(&tm, "%d-%m-%Y %H-%M-%S") << std::endl;

#else
  class Recibo;
#endif