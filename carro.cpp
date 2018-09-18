#include "carro.hpp"

//using namespace std::

Carro::Carro(){
	chassis = "0000";
	modelo = "Padrao";
	fabricante = "Generico";
	estado = "estacionado";
	velocidade = 0.0;
	numero_de_portas = 2;

	cout << "O carro foi criado" <<endl;
}

Carro::~Carro(){
	cout << "Carro deu pau, destruido" << endl;
}

string Carro::get_chassis(){
	return chassis;
}

void Carro::set_chassis(string chassis){
	this->chassis = chassis ; //this aponta para o escopo que estamos trabalhando

}

string Carro::get_cor(){
	return cor;
}

void Carro::set_cor(string cor){
	this->cor = cor;
}

int Carro::get_numero_de_portas(){
	return numero_de_portas;
}
void Carro::set_numero_de_portas(int numero_de_portas){
	this->numero_de_portas = numero_de_portas;
}
string Carro::get_modelo(){
	return modelo;
}
void Carro::set_modelo(string modelo){
	this->modelo = modelo;
}
string Carro::get_fabricante(){
	return fabricante;
}
void Carro::set_fabricante(string fabricante){
	this->fabricante = fabricante;
}
string Carro::get_estado(){
	return estado;
}
void Carro::set_estado(string estado){
	this->estado=estado;
}
float Carro::get_velocidade(){
	return velocidade;
}

float Carro::set_velocidade(float velocidade){
	return this->velocidade = velocidade;
}

void Carro::ligar(){
	cout << "Carro ligado!!!" << endl;
	set_estado("Estacionado e ligado");
}

void Carro::desligar(){
	cout << "Carro delisgado" << endl;
	set_estado("Estacionado e desligado");
	set_velocidade(0.0);
}

void Carro::frear(float fator_de_frenagem){
	float velocidade_atual;
	velocidade_atual = get_velocidade();
	velocidade_atual -= fator_de_frenagem;
	if(velocidade_atual < 0.0 ){
		velocidade_atual = 0.0;
	}
}

void Carro::acelerar(float fator_de_aceleracao){
		float velocidade_atual;
		velocidade_atual = get_velocidade();
		velocidade_atual += fator_de_aceleracao;

		}
