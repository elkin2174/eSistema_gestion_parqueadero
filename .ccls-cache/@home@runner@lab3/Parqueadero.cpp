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

// Metodos De Clase
void Parqueadero::imprimirCantidad(){
  cout <<"Cantidad de veiculos: " <<motocicletas.size() + automoviles.size() <<endl;
}


void Parqueadero::generarRecibo(){
  int horaLL = 0, horaSa = 0, minll = 0, minSa = 0;
  string id = "", nom = "", lic = "", pla = "", mar = "", mod = "";
  string tipo = "";
  Recibo* recibo;
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
  cout<<endl<< "Tipo de Veiculo(Automovil o Motocicleta): "; getline(cin,tipo);
  transform(tipo.begin(), tipo.end(), tipo.begin(), ::toupper);
  
  if(tipo == "AUTOMOVIL"){
    int pue = 0, pasa = 0;
    cout<<endl<< "Numero de puertas: "; cin >> pue;
    cout<<endl<< "Numero de pasajeros: "; cin >> pasa;
    recibo = new Recibo(horaLL, horaSa, minll, minSa, id, nom, lic, pla, mar, mod, pue, pasa);
    addAutomovil(recibo->getVeiculo());
    
  }else if(tipo == "MOTOCICLETA"){
    float cil = 0.0;
    cout<<endl<< "Cilindraje: "; cin >> cil;
    recibo = new Recibo(horaLL, horaSa, minll, minSa, id, nom, lic, pla, mar, mod, cil);
    addMotocicleta(recibo->getVeiculo()); 
    
  }else{
    cout << "Porfavor ingrese un tipo correcto.";
    throw "Error";
    
  }
  
  recibos.push_back(recibo);
  recibo->imprimirRecibo();
  addCliente(recibo->getCliente()); 
  
}

void Parqueadero::addAutomovil(Veiculo* a){
  automoviles.push_back(a);
}

void Parqueadero::addMotocicleta(Veiculo* m){
  motocicletas.push_back(m);
}
void Parqueadero::addCliente(Persona* c){
  clientes.push_back(c);
}

void Parqueadero::imprimirInforme(){
  
}
void Parqueadero::imprimirRecaudo(){
  double sumaCarro = 0;
  double sumaMoto = 0;

  for (Recibo* recibo : recibos){
    if(recibo->getVeiculo()->getTipo() == "AUTOMOVIL"){
      sumaCarro += recibo->getTarifa();
    }else{
      sumaMoto += recibo->getTarifa();
    };
  }
  cout << "Recuado Automovil: " << sumaCarro <<endl;
  cout << "Recaudo Motocicleta: "<< sumaMoto <<endl;
 
};

void Parqueadero::imprimirMayorTiempo(){
  double horaMayor = 0;
  Recibo* reciboMayor;
  for (Recibo* recibo : recibos){

    if(recibo->getHoras() > horaMayor){
      horaMayor = recibo->getHoras();
      reciboMayor = recibo;
    }
  }
  cout << "El cliente con mas tiempo en el establcimiento; " <<endl;
  reciboMayor->imprimirRecibo();
}