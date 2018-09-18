#ifndef ALUNO_HPP
#define ALUNO_HPP

#include "pessoa.hpp" // heranca simples aqui
#include <string>
using namespace std;

class Aluno : public Pessoa{ // herda de Pessoa
  private:
  int matricula;
  float ira;
  int semestre;

public:
  Aluno();
  ~Aluno();
  int get_matricula();
  void set_matricula(int matricula);
  float get_ira();
  void set_ira(float ira);
  int get_semestre();
  void set_semestre(int semestre);

//polimorfismo
  Aluno(string nome, string telefone, int idade);

//sobrescrita
void imprime_dados();

};

#endif
