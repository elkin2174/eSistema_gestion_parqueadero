#ifndef Veiculo_H
#define Veiculo_H

#include <vector>
#include <iostream>

using namespace std;

class Veiculo{
  private:
    string placa;  
    string marca;
    string modelo;


  public:
    Veiculo() : placa(""), marca(""), modelo(""){};
    Veiculo(string _placa, string _marca, string _modelo) : placa(_placa), marca(_marca), modelo(_modelo){};
    
    //getters 
    string getPlaca();
    string getMarca();
    string getModelo();

    // Setters
    void setPlaca(string _placa);
    void setMarca(string _marca);
    void setModelo(string _modelo);

    //Metodos de clase
    virtual string getTipo();
    virtual void imprimirDatos();
    

};



#else
  class Veiculo;
#endif