/*
 * Classe: Sala
 * Autores: Hitalo Siqueira, Bruna Pompeu, Thales Chagas, Matheus Paes, Augusto Santos
 * Descricao: Gerencia uma sala
 * Interface:
 *		- Sala(int numSala, int nFileiras, int nAssentosFileira);
 *		- verificaFileira(char fileira, int assento);
 *		- getNumSala();
 *		- getNFileiras();
 *		- getEstado();
 *		- setEstado(string estado);
 *		- getNAssentosFileira();
 *		- setNumSala(int numSala);
 *		- setNFileiras(int nFileiras);
 *		- setNAssentosFileira(int nAssentosFileira);
 *		- imprimeSala();
 *		- setDisp(char fileira, int assento);
 * Data de modificao: 30/06/2014
 */

#ifndef SALA_H
#define	SALA_H
#include <vector>
#include "Fileira.h"
using namespace std;

//Declaração da classe Sala
class Sala{
	
	private:
		//Atributos da classe
		vector<Fileira> f;
		int numSala;
		int nFileiras;
		int nAssentosFileira;
		string estado;
	public:
		//Métodos da classe
		//Construtor
		Sala(int numSala, int nFileiras, int nAssentosFileira);
		
		//Vefirica fileira
		bool verificaFileira(char fileira, int assento);
		
		//Recebe o número da sala
		int getNumSala();
		
		//Recebe o número de fileiras
		int getNFileiras();
		
		//Recebe o estado da sala
		string getEstado();
		
		//Atribui um estado a sala
		void setEstado(string estado);
		
		//Recebe o número de assentos por fileira
		int getNAssentosFileira();
		
		//Atribui um número a sala
		void setNumSala(int numSala);
		
		//Atribui um número de fileiras a sala
		void setNFileiras(int nFileiras);
		
		//Atribui o número de assentos por fileira da sala
		void setNAssentosFileira(int nAssentosFileira);
		
		//Mostra sala
		void imprimeSala();
		
		//Atribui disponibilidade dos assentos da sala
		void setDisp(char fileira, int assento);

};

#endif	/* SALA_H */