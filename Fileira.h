/*
 * Classe: Fileira
 * Autores: Hitalo Siqueira, Bruna Pompeu, Thales Chagas, Matheus Paes, Augusto Santos
 * Descricao: Controla fileira
 * Interface:
 *		- setIdFileira() :
 *		- verificaAssento() :
 *		- getIdFileira() :
 *		- iniciaAssentos() :
 *		- imprimeAssentos() :
 *		- imprimeX() :
 *		- setDisponibilidade(int assento) :
 * Data de modificao: 30/06/2014
 */

#ifndef FILEIRA_H
#define	FILEIRA_H
#include <vector>
#include "Assento.h"
using namespace std;

/*Declaração da classe Fileira*/
class Fileira{
	
	private:
		/*Atributos da classe*/
		vector<Assento> a;
		char idFileira;
	public:
		/*Métodos da classe*/
		//Mostra a numeração dos assentos
		void imprimeX();
		
		//Atribui uma fileira
		void setIdFileira(char idFileira);
		
		//Verifica assento
		bool verificaAssento(int assento);
		
		//Recebe a identificação de uma fileira
		char getIdFileira();
		
		//Insere assentos da fileira
		void iniciaAssentos(int nAssentosFileira);
		
		//Mostra assentos
		void imprimeAssentos();
		
		//Atribui disponibilidade de assento
		void setDisponibilidade(int assento);
};

#endif	/* FILEIRA_H */