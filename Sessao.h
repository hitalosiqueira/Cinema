/*
 * Classe: Sessao
 * Autores: Hitalo Siqueira, Bruna Pompeu, Thales Chagas, Matheus Paes, Augusto Santos
 * Descricao: Controla sessão
 * Interface:
 *		- Sessao(int nSessao, string filme, string horario, int sala, bool encerrada, int numVendido);
 *		- setSala(int sala);
 *		- getNSessao();
 *		- getSala();
 *		- setStatus(bool encerrada);
 *		- getStatus();
 *		- getHorario();
 *		- setHorario(string horario);
 *		- setNumVendido(int numVendido);
 *		- getNumVendido();
 *		- getFilme();
 *		- setFilme(string nomeFilme);
 *		- imprimeSessao();
 * Data de modificao: 30/06/2014
 */

#ifndef SESSAO_H
#define	SESSAO_H
using namespace std;

class Sessao{
	
	private:
		/*Atributos da classe*/
		string horario;
		bool encerrada;
		int numVendido;
		string filme;
		int nSessao;
		int sala;
	public:
		/*Métodos da classe*/
		//Construtor de Sessao
		Sessao(int nSessao, string filme, string horario, int sala, bool encerrada, int numVendido);
		
		//Atribui sessao a uma sala
		void setSala(int sala);
		
		//Recebe o número da sessão
		int getNSessao();
		
		//Recebe o número da sala
		int getSala();
		
		//Atribui status da sessão(encerrada ou não)
		void setStatus(bool encerrada);
		
		//Recebe status da sessão
		bool getStatus();
		
		//Recebe horário da sessão
		string getHorario();
		
		//Atribui horário a sessão
		void setHorario(string horario);
		
		//Atribui número de ingressos vendidos para sessão
		void setNumVendido(int numVendido);
		
		//Recebe o número de ingressos vendidos para sessão
		int getNumVendido();
		
		//Recebe filme
		string getFilme();
		
		//Atribui filme a sessão
		void setFilme(string nomeFilme);
		
		//Mostra sessão
		void imprimeSessao();
};



#endif	/* SESSAO_H */