#include "Automovil.h"
#include  <string> 

int Automovil::getNumeroPuertas(){
  return this->numeroPuertas;
}
int Automovil::getNumeroPasajeros(){
  return this->numeroPasajeros;
}

void Automovil::setNumeroPuertas(int _numeroPuertas){
  this->numeroPuertas = _numeroPuertas;
}
void Automovil::setNumeroPasajeros(int _numeroPasajeros){
  this->numeroPasajeros = _numeroPasajeros;
}
string Automovil::getTipo(){
  return "AUTOMOVIL";
}

void Automovil::imprimirDatos(){
  Veiculo::imprimirDatos();
  cout << "Puertas: \t" + to_string(getNumeroPuertas()) << "\n" <<
          "Pasajeros: \t" + to_string(getNumeroPasajeros()) << "\n" <<
          "Tipo de Veiculo: \t" << "Carro" << "\n";   
}
