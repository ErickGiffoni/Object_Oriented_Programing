#include "pessoa.hpp"
#include <iostream>
using namespace std;

Pessoa::Pessoa(){
  nome = "";
  idade = 0;
  telefone = "000-0000";
}

Pessoa::~Pessoa(){};

int Pessoa::get_idade(){
  return idade; // pode assim, pois nao ha ambiguidade
}

void Pessoa::set_idade(int idade){
   this->idade = idade;
}

string Pessoa::get_nome(){
  return nome;
}

void Pessoa::set_nome(string nome){
   this->nome = nome;
}

string Pessoa::get_telefone(){
  return telefone;
}

void Pessoa::set_telefone(string telefone){
  this->telefone = telefone;
}

void Pessoa::imprime_dados(){
  cout << "Nome: " << get_nome() << endl;
  cout << "Telefone: " << get_telefone() << endl;
  cout << "Idade: " << get_idade() << endl;
}
