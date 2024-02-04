#include "Parqueadero.h"

string Parqueadero::getNombre(){
  return this->nombre;
}
string Parqueadero::getNIT(){
  return this->nit;
}
string Parqueadero::getDireccion(){
  return this->direccion;
}

void Parqueadero::setNombre(string _nombre){
  this->nombre = _nombre;
}
void Parqueadero::setNIT(string _nit){
  this->nit = _nit;
}
void Parqueadero::setDireccion(string _direccion){
  this->direccion = _direccion;
}

void Parqueadero::imprimirCantidad(){
  cout <<"Cantidad de veiculos: " <<motocicletas.size() + automoviles.size() <<endl;
}
void Parqueadero::generarRecibo(){
  int horaLL = 0, horaSa = 0, minll = 0, minSa = 0;
  string id = "", nom = "", lic = "", pla = "", mar = "", mod = "";
  cout << "Ingrese los datos del Tiempo: " <<endl;
  cout << "Hora Entrada: "; cin >> horaLL;
  cout<<endl<< "Minuto entrada: ", cin >> minll;
  cout<<endl<< "Hora Salida: ", cin >> horaSa;
  cout<<endl<< "Minuto Salida: ", cin >> minSa;


}
