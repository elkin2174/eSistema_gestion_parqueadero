#include <iostream>
#include "Parqueadero.h"
#include "Recibo.h"
int main() {
  Recibo recibo1(12,12,04,30,"1234","Elkin Tovar","12888L","HDX81F","Mercedez Benz", "2020",620.20);

  recibo1.imprimirRecibo();
  
}