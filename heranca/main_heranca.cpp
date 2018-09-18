#include <iostream>
#include "aluno.hpp"
#include "professor.hpp"
// pessoa esta incluso no aluno hpp e no professor hpp

using namespace std;

int main(){

  Professor *prof1 = new Professor();
  cout << "Prof nao existe rsrs \n" ;
  prof1->imprime_dados();

  Pessoa *pessoa1 = new Pessoa();
  pessoa1->set_nome("Lucas");
  pessoa1->set_telefone("39452408");
  pessoa1->set_idade(32);

  Aluno *aluno1 = new Aluno();

  aluno1->set_nome("Erick");
  aluno1->set_idade(18);
  aluno1->set_telefone("543-2100");
  aluno1->set_matricula(170141161);
  aluno1->set_semestre(3);
  aluno1->set_ira(4.2);

  cout << "Universidade de Brasília\n" << "Aluno: "<< aluno1->get_nome()<<endl;
  //cout << "Idade: "<< aluno1->get_idade()<< endl<< "Telefone: "<<aluno1->get_telefone()<<endl;
  //cout << "Matricula: "<<aluno1->get_matricula()<< endl;
  //cout << "Semestre: "<<aluno1->get_semestre()<<endl;
  //cout << "Ira: "<<aluno1->get_ira()<< endl;
  //cout<< "Koroi kuzaum"<< endl;

  pessoa1->imprime_dados();

  aluno1->imprime_dados();

  Pessoa * lista_de_pessoas[5];
  lista_de_pessoas[0] = pessoa1;
  lista_de_pessoas[1] = aluno1; // pode pq sao da mesma "familia" de classes
  lista_de_pessoas[2] = prof1;
  lista_de_pessoas[3] = new Aluno("Foguinho", "1234567", 23);

  for(int i=0; i<4; i++){
    cout << "Elemento da lista " << i<<endl;
    lista_de_pessoas[i]->imprime_dados();
    cout << "----------\n";
  }

  return 0;
}
