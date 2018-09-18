#include "professor.hpp"

Professor::Professor(){
  set_nome("");
  set_telefone("000-0000");
  set_idade(0);
  set_titulacao("");
  set_salario(0.0);
}

Professor::~Professor(){};

float Professor::get_salario(){
  return salario;
}

void Professor::set_salario(float salario){
  this->salario = salario;
}

string Professor::get_titulacao(){
  return titulacao;
}

void Professor::set_titulacao(string titulacao){
  this->titulacao = titulacao;
}
