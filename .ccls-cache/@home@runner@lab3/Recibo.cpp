#include "Recibo.h"
#include <chrono>
#include <iostream>
#include <iomanip>
#include <ctime>
#include <sstream>

using namespace std;
string Recibo::getFecha(){
  auto t = time(nullptr);
  auto tm = *localtime(&t);

  ostringstream oss;
  oss << put_time(&tm, "%d-%m-%Y");
  auto str = oss.str();

  return str;
}

double Recibo::getHoras(){
  return ((horaSalida*60 + minutoSalida) - (horaLlegada*60 + minutoLlegada));
}

double Recibo::getTarifa(){

  if(getHoras() <= 30){
    
      if (vehiculo->getTipo() == "AUTOMOVIL"){
        return 3500;
      }else{
        return 2000;
      }
  }else if (30 < getHoras() && getHoras() <= (60*3)){
    
      if (vehiculo->getTipo() == "AUTOMOVIL"){
        return 9000;
      }else{
        return 6000;
      }
  }else{
    
      if (vehiculo->getTipo() == "AUTOMOVIL"){
        return 20000;
      }else{
        return 14000;
      }
  }
}
Persona* Recibo::getCliente(){
  return this->cliente;
}
Veiculo* Recibo::getVeiculo(){
  return this->vehiculo;
}
void Recibo::imprimirRecibo(){
  string minllegadastring = "";
  string minSalidastring = "";
  if(minutoLlegada < 10){
    minllegadastring = "0" + to_string(minutoLlegada);
  }else{
    minllegadastring = to_string(minutoSalida);
  }
  if(minutoSalida < 10){
    minSalidastring = "0" + to_string(minutoSalida);
  }else{
    minSalidastring = to_string(minutoSalida);
  }
  cout<<"<-------------Recibo-------------->"<<endl
  <<"Fecha: " << getFecha() <<endl
  << "Hora entrada: " << horaLlegada << ":" <<minllegadastring <<endl
  << "Hora Salida: " << horaSalida << ":" + minL<<endl
  << "Tarifa: "<< getTarifa() <<endl;
  cliente->imprimirDatos();
  vehiculo->imprimirDatos();
  
}
