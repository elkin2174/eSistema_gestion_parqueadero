#include "Parqueadero.h"
#include <string>
#include <algorithm>

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
  string tipo = "";
  cout << "Ingrese los datos del Tiempo: " <<endl;
  cout << "Hora Entrada: "; cin >> horaLL;
  cout<<endl<< "Minuto entrada: "; cin >> minll;
  cout<<endl<< "Hora Salida: "; cin >> horaSa;
  cout<<endl<< "Minuto Salida: "; cin >> minSa;
  cin.ignore();
  cout<<endl<< "Documeto del Cliente: "; getline(cin,id);
  cout<<endl<< "Nombre del Cliente: "; getline(cin,nom);
  cout<<endl<< "licencia del Cliente: "; getline(cin,lic);
  cout<<endl<< "Placa del Vehiculo: "; getline(cin,pla);
  cout<<endl<< "Marca del Cliente: "; getline(cin,mar);
  cout<<endl<< "Modelo del Cliente: "; getline(cin,mod);
  cout<<endl<< "Tipo de Veiculo"; getline(cin,tipo);
  transform(tipo.begin(), tipo.end(), tipo.begin(), ::toupper);
  
  if(tipo == "AUTOMOVIL"){
    int pue = 0, pasa = 0;
    cout<<endl<< "Numero de puertas: "; cin >> pue;
    cout<<endl<< "Numero de pasajeros: "; cin >> pasa;
    recibos.push_back(new Recibo(horaLL, horaSa, minll, minSa, id, nom, lic, pla, mar, mod, pue, pasa));
    
  }else if(tipo == "MOTOCICLETA"){
    float cil = 0.0;
    recibos.push_back(new Recibo(horaLL, horaSa, minll, minSa, id, nom, lic, pla, mar, mod, cil));
    
  }else{
    cout << "Porfavor ingrese un tipo correcto.";
  }

  
}
