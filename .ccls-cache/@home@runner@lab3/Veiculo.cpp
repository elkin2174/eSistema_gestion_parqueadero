#include "Veiculo.h"
#include <iostream>
#include <string>

string Veiculo::getMarca(){
  return this->marca;
}
string Veiculo::getPlaca(){
  return this->placa;
}
string Veiculo::getModelo(){
  return this->modelo;
}

void Veiculo::setPlaca(string _placa){
  this->placa = _placa;
}
void Veiculo::setMarca(string _marca){
  this->marca = _marca;
}
void Veiculo::setModelo(string _modelo){
  this->modelo = _modelo;
}

string Veiculo::getTipo(){
  return "NULL";
}


void Veiculo::imprimirDatos(){
  cout << " <------ Datos del veiculo ------->" << endl;
  cout << "Placa: \t" + getPlaca() << "\n" <<
          "Marca: \t" + getMarca() << "\n" <<
          "Modelo: \t" + getModelo() << "\n";    
}