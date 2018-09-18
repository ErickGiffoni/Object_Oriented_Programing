#include <iostream>

using namespace std;

int testa_excecao(){
  int valor;
  cout << "Insira um valor" << endl;
  cin >> valor;
// verificacao de erro
  if(valor < 0){
    //throw (1); //arremesso da excecao int
    //throw ('a'); //arremesso da excecao char
    throw (4.5); // arremesso de excessao double
  }

  return valor;

}

int main (int argc , char **argv){

  int valor;

// tratamento da excecao
  try {
    valor = testa_excecao();
    cout << "Valor " << valor << endl;
  } catch(char exception){
    cout << "Ocorreu uma excecao do tipo char" << endl;
  }
  catch (int exception){
    cout << "Ocorreu uma excecao do tipo int\n";
  }
  catch (...){
    cout << "EXCECAO GENERICA\n";
  }

  cout << "Programa encerrado corretamente\n"; // se deu tudo certo


  return 0;
}
