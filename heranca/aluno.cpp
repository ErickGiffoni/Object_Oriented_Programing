#include "aluno.hpp"
#include <iostream>

using namespace std;

Aluno::Aluno(){
  set_nome("");
  set_telefone("000-0000");
  set_idade(0);
  //Aluno
  matricula = 0;
  ira= 5.0;
  semestre = 1;
}

Aluno::~Aluno(){};

int Aluno::get_matricula(){
  return matricula;
}

void Aluno::set_matricula(int matricula){
   this->matricula = matricula;
}

float Aluno::get_ira(){
  return ira;
}

void Aluno::set_ira(float ira){
  this->ira = ira;
}

int Aluno::get_semestre(){
  return semestre;
}

void Aluno::set_semestre(int semestre){
   this->semestre = semestre;
}


Aluno::Aluno(string nome, string telefone, int idade){
  set_nome(nome);
  set_telefone(telefone);
  set_idade(idade);
  matricula = 0;
  ira = 5.0;
  semestre = 0;
}

void Aluno::imprime_dados(){
  cout << "Nome: " << get_nome() << endl;
  cout << "Telefone: " << get_telefone() << endl;
  cout << "Idade: " << get_idade() << endl;

  cout << "MAtricula: " << get_matricula() << endl;
  cout << "Ira: " << get_ira() << endl;
  cout << "Semestre: " << get_semestre() << endl;
}
