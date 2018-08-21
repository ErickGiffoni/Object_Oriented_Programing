#include <iostream>
#include <string>

class Carro{
	// atributos 
	string chassis;
	string cor;
	int numero_de_portas;
	string modelo;
	string fabricante;
	string estado;
	float velocidade;
	
	//Métodos
	Carro(); // método construtor -> mesmo nome da classe
	~Carro(); // destrutor -> tem o til na frente
	//Métodos acessores -> acesso aos atributos
	string get_chassis(); //meio de acesso ao chasssi
	void set_chassi(string chassis); //definir/atualizar o numero do chassi
	string get_cor();
	void set_cor(string cor);
	int get_numero_de_portas();
	void set_numero_de_portas(int numero_de_portas);
	string get_modelo();
	void set_modelo(string modelo);
	string get_fabricante();
	void set_fabricante(string fabricante);
	string get_estado();
	void set_estado(string estado);
	float get_velocidade();
	//void set_velocidade(float velocidade); 
	//OUTROS Métodos 
	void ligar();
	void desligar();
	void acelerar(float fator_de_aceleracao);
	void frear(float fator_de_frenagem);
//end
};
