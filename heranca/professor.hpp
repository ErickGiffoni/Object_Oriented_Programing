#ifndef PROFESSOR_HPP
#define PROFESSOR_HPP

#include <string>
#include "pessoa.hpp"
using namespace std;

class Professor : public Pessoa{

private:
  float salario;
  string titulacao;
  string *lista_de_disciplinas;

public:
  Professor();
  ~Professor();

  float get_salario();
  void set_salario(float salario);

  string get_titulacao();
  void set_titulacao(string titulacao);



};

#endif
