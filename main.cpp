#include <iostream>
#include "carro.hpp"

using namespace std;

int main(int argc, char ** argv){

  //declarar um objeto
  Carro carro1;
  Carro carro2;

  Carro *carro3;
  //alocacao de um carro3
  carro3 = new Carro();

  Carro *carro4 = new Carro();

  carro1.set_chassis("3829HUJI");
  carro2.set_chassis("476GFTRE");

  carro1.set_cor("preto");
  carro3->set_cor("branco");
  carro1.set_estado("rapidaummmmmm");
  carro3->set_estado("rapidaummmmmm tambem");
  carro1.set_modelo("MAVERICK");
  carro3->set_modelo("MAVERICK BRANCO");
  carro1.set_fabricante("Nao sei");
  carro3->set_fabricante("Tambem Nao sei");
  carro1.set_numero_de_portas(2);
  carro3->set_numero_de_portas(2);

  cout << "Chassis do carro 1 : "<< carro1.get_chassis() << endl << "Chassis carro 2:"
      << carro2.get_chassis() << endl;

  cout << "Carro criado é :" << endl << carro1.get_modelo() << endl << carro1.get_cor()
  << endl << carro1.get_estado() << endl << carro1.get_numero_de_portas() << " Portas" << endl;
  cout << "Carro criado é :" << endl << carro3->get_modelo() << endl << carro3->get_cor()
  << endl << carro3->get_estado() << endl << carro3->get_numero_de_portas() << " Portas" << endl;

  //movimento do carro
  cout << endl << "Carro 3:" << endl ; carro3->ligar();carro3->acelerar(10.2);
  cout << endl << "FREIIIAAAAAA!" << endl ;carro3->desligar();carro3->frear(10.2);

  delete carro3; //libera a memoria
  delete carro4;

  return 0;

};
