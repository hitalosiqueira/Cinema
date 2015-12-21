/*
 * Classe: Ingresso
 * Autores: Hitalo Siqueira, Bruna Pompeu, Thales Chagas, Matheus Paes, Augusto Santos
 * Descricao: Controla ingressos
 * Interface:
 *		- Ingresso(int id,double valor, int assento, char fileira, int nSessao,int tipo, string data);
 *		- setTipo(int tipo);
 *		- getFileira();
 *		- getAssento();
 *		- getId();
 *		- setFileira(char fileira);
 *		- setAssento(int assento);
 *		- getTipo();
 *		- getDtIngresso();
 *		- getValor();
 *		- getNSessao();
 *		- setNSessao(int nSessao);
 *		- setDtIngresso(string dtIngresso);
 *		- setValor(double valor);
 *		- imprimir();
 * Data de modificao: 30/06/2014
 */

#ifndef INGRESSO_H
#define	INGRESSO_H
#include <iostream>
#include <vector>

using namespace std;

//Declaração da classe ingresso
class Ingresso{
	
	private:
		//Atributos da classe
		string dtIngresso;
		int id;
		double valor;
		int tipo;
		int nSessao;
		char fileira;
		int assento;

	public:
		//Métodos da classe
		//Construtor
		Ingresso(int id,double valor, int assento, char fileira, int nSessao,int tipo, string data);
		
		//Atribui um tipo ao ingresso
		void setTipo(int tipo);
		
		//Recebe a fileira relacionada ao ingresso
		char getFileira();
		
		//Recebe o assento relacionado ao ingresso
		int getAssento();
		
		//Recebe a identificação do ingresso
		int getId();
		
		//Atribui uma fileira ao ingresso
		void setFileira(char fileira);
		
		//Atribui um assento ao ingresso
		void setAssento(int assento);
		
		//Recebe o tipo do ingresso
		int getTipo();
		
		//Recebe a data do ingresso
		string getDtIngresso();
		
		//Recebe o valor do ingresso
		double getValor();
		
		//Recebe o numero sa sessao
		int getNSessao();
		
		//Atribui uma sessão ao ingresso
		void setNSessao(int nSessao);
		
		//Atribui uma data ao ingresso
		void setDtIngresso(string dtIngresso);
		
		//Atribui um valor ao ingresso
		void setValor(double valor);
		
		//Mostra ingresso
		void imprimir();
};



#endif	/* INGRESSO_H */