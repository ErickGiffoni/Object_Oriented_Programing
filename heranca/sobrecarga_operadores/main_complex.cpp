#include <iostream>
#include "complexo.hpp"

using namespace std;

int main (){

  Complexo c1, c2, resultado;
  Complexo c3(10, -2), c4(-4, 7);

  cout << "Primeiro numero complexo (nao digite i) : " ;
  c1.entrada();

  cout << "Segundo numero complexo (nao digite i) : " ;
  c2.entrada();

  c1.imprime_numero();
  c2.imprime_numero();
  c3.imprime_numero();
  c4.imprime_numero();

  // soma
  resultado = c1 + c2;
    cout << "Soma ";
    resultado.imprime_numero() ;

  //subtracao
  resultado = c2 - c1;
  cout << "Sub ";
    resultado.imprime_numero();

  // multiplicacao
  resultado = c3*c4;
  cout << "Mult ";
    resultado.imprime_numero();

  return 0;
}
