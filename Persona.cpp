#include "Persona.h"

string Persona::getId(){
  return this->id;
}
string Persona::getNombre(){
  return this->nombre;
}
void Persona::setId(string _id){
  this->id = _id;
}
void Persona::setNombre(string _nombre){
  this->nombre = _nombre;
}

void Persona::imprimirDatos(){
  cout<< " <---------- datos ----------->" << endl;
  cout << "documento: " + getId() + "\n" +
          "Nombre: " + getNombre() + "\n";
          
}