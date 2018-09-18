#ifndef COMPLEXO_HPP
#define COMPLEXO_HPP

class Complexo {

private:
  float real;
  float imag;

public:
  Complexo() : real(0), imag(0) {}; // notacao compacta do c++
  Complexo(float r, float i) : real(r), imag(i) {};

  void entrada(); // set num complexo
  void imprime_numero();

  Complexo operator + (Complexo c2); // notacao de sobrecarga
  Complexo operator - (Complexo c2); // tipo de retorno, operador, parametro
  Complexo operator * (Complexo c2);

};

#endif
