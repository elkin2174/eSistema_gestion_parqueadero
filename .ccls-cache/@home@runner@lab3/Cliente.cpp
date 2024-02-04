#include "Cliente.h"

string Cliente::getLicencia(){
  return this->licencia;
}
void Cliente::setLicencia(string _licencia){
  this->licencia = _licencia;
}

void Cliente::imprimirDatos(){
  Persona::imprimirDatos();
  cout << "Licencia No: " << getLicencia() << endl;
}