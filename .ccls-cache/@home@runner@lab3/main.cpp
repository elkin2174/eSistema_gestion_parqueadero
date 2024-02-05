#include <iostream>
#include "Parqueadero.h"
int main() {

  Parqueadero* parqueadero = new Parqueadero("La Sexta","123123123H","Av xd con xd oeste");

  int opt = 9;
  while(opt != 0){
    cout <<"<---SISTEMA DE GESTION DE PARQUEADERO --->"<<endl;
    cout <<"Elija una opcion a continuacion: "<<endl;
    cout <<"1 - Generar Recibo."<<endl;
    cout <<"2 - Ver cantidad de Veiculos."<<endl;
    cout <<"3 - Ver Recaudo."<<endl;
    cout <<"4 - Ver Cliente con mas tiempo."<<endl;
    cout <<"5 - Imprimir informe completo (En contruccion)"<<endl;
    cout <<"6 - Buscar Recibo Por ID de Cliente (En construccion"<<endl;
    cout <<"0 - Salir"<<endl;
    cout <<"Opcion: "; cin >> opt;

    if(opt == 1){
      parqueadero->generarRecibo();
    }else if ( opt == 2){
      parqueadero->imprimirCantidad();
    }else if ( opt == 3){
      parqueadero->imprimirRecaudo();
    }else if ( opt == 4){
      parqueadero->imprimirMayorTiempo();
    }else if ( opt == 5){
      cout<<"Informe completo"<<endl;
    }else if ( opt == 6){
      cout<<"Busqueda por ID";
    }else if ( opt == 0){
      cout << "Saliendo del programa" <<endl;
      delete parqueadero;
      break;
    }
  



    

  }
}