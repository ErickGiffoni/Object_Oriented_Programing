#include <iostream>

using namespace std;

int testa_excecao(){
  int valor;
  cout << "Insira um valor" << endl;
  cin >> valor;
// verificacao de erro
  if(valor < 0){
    throw (1); //arremesso da excecao
  }

  return valor;

}

int main (int argc , char **argv){

  int valor;

// tratamento da excecao
  try {
    valor = testa_excecao();
    cout << "Valor " << valor << endl;
  } catch(int exception){
    cout << "Ocorreu uma excecao do tipo int" << endl;
  }

  cout << "Programa encerrado corretamente\n"; // se deu tudo certo


  return 0;
}
