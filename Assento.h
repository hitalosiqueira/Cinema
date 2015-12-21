/*
 * Classe: Assento
 * Autores: Hitalo Siqueira, Bruna Pompeu, Thales Chagas, Matheus Paes, Augusto Santos
 * Descricao: Controla assentos.
 * Interface:
 *		- setIdAssento() :
 *		- verificaDisponibilidade() :
 *		- setDisponibilidade() :
 *		- getIdAssento() :
 * Data de modificao: 30/06/2014
 */

#ifndef ASSENTO_H
#define	ASSENTO_H
using namespace std;

/*Declaração da classe Assento*/
class Assento{
	
	private:
		/*Atributos da classe*/
		int idAssento;
		bool disponibilidade;
	public:
		//Métodos da classe
		/*Atribui identificação ao assento*/
		void setIdAssento(int idAssento);
		
		/*Verifica disponibilidade de assento*/
		bool verificaDisponibilidade();
		
		/*Atribui disponibilidade ao assento*/
		void setDisponibilidade(bool disponibilidade);
		
		/*Recebe a identificação do assento*/
		int getIdAssento();
};

#endif	/* ASSENTO_H */