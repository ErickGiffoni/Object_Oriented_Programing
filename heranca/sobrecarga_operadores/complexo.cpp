#include <iostream>
#include "complexo.hpp"

using namespace std;

void Complexo::entrada(){
  cout << "(Real Imag): ";
  cin >> real >> imag;
}

void Complexo::imprime_numero(){
  if(imag < 0)
    cout << real <<" " << imag << "i"<< endl;
  else
  cout << real << " + " << imag << "i"<< endl;
}

Complexo Complexo::operator + (Complexo c2) {
  Complexo resultado;
  resultado.real = real + c2.real;
  resultado.imag = imag + c2.imag;
  return resultado;
}

Complexo Complexo::operator - (Complexo c2) {
  Complexo resultado;
  resultado.real = real - c2.real;
  resultado.imag = imag - c2.imag;
  return resultado;
}

Complexo Complexo::operator * (Complexo c2) {
  Complexo resultado;
  resultado.real = real * c2.real - (imag * c2.imag);
  resultado.imag = real*c2.imag + (imag*c2.real);
  return resultado;
}
