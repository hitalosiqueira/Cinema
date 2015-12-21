/*
 * Classe: Venda
 * Autores: Hitalo Siqueira, Bruna Pompeu, Thales Chagas, Matheus Paes, Augusto Santos
 * Descricao: Controla vendas
 * Interface:
 *		- Venda(int idVenda);
 *		- calcularValorTotal();
 *		- emitirIngresso();
 *		- addIngresso(vector<Sala> &sala, vector<Sessao> &sessao); 
 *		- removeIngresso(vector<Sala> &sala, vector<Sessao> &sessao);
 *		- imprimeIngressos();
 * Data de modificao: 30/06/2014
 */

#ifndef VENDA_H
#define	VENDA_H
#include "Ingresso.h"
#include "Sessao.h"
#include "Sala.h"
#include <vector>
using namespace std;

//Declaração da classe venda
class Venda{
	
	private:
		//Atributos da classe
		vector<Ingresso> ingresso;
		int idVenda;
		string dtVenda;
		double valorTotal;
		string FormaPagto;
	public:
		//Métodos da classe
		//Construtor
		Venda(int idVenda);
		
		//Calcula o valor total dos ingressos
		double calcularValorTotal();
		
		//Adiciona o ingresso a um arquivo
		void emitirIngresso();
		
		//Cadastra um ingresso
		void addIngresso(vector<Sala> &sala, vector<Sessao> &sessao);
		
		//Remove um ingresso
		void removeIngresso(vector<Sala> &sala, vector<Sessao> &sessao);
		
		//Mostra ingressos
		void imprimeIngressos();
};

#endif	/* VENDA_H */