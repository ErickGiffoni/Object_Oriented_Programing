#ifndef PESSOA_HPP
#define PESSOA_HPP
#include <iostream>
#include <string>
using namespace std;

class Pessoa{
  private:
    string nome;
    int idade;
    string telefone;

  public:
    Pessoa();
    ~Pessoa();
    int get_idade();
    void set_idade(int idade);
    string get_nome();
    void set_nome(string nome);
    string get_telefone();
    void set_telefone(string telefone);

    virtual void imprime_dados(); //nao vai dar prioridade a esse metodo (raiz)
                                  // vai buscar nas pontas
                                  // place holder -> marcando espaco

};

#endif
