#include "Motocicleta.h"

float Motocicleta::getCilindraje(){
  return this->cilindraje;
}
void Motocicleta::setCilindraje(float _cilindraje){
  this->cilindraje = _cilindraje;
}
string Motocicleta::getTipo(){
  return "MOTOCICLETA";
}
void Motocicleta::imprimirDatos(){
  Veiculo::imprimirDatos();
  cout << "Cilindraje: \t" + to_string(getCilindraje()) << "\n" <<
          "Tipo de Veiculo: \t" << "Motocicleta" << "\n";  
}