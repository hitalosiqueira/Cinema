/*
 * Nome do arquivo: TestaSala.cpp
 * Autores: Hitalo Siqueira, Bruna Pompeu, Thales Chagas
 * Turma: 011
 * Descricao: Programa para gerenciar salas, sessões e vendas de ingressos.
 * Data de conclusao: 02/07/2014
 */

 //Bibliotecas padrão do sistema
#include <iostream>
#include <vector>
#include <fstream>
#include "Sala.h"
#include "Sessao.h"
#include "Ingresso.h"
#include "Venda.h"
#include <stdlib.h>
using namespace std;

/*Protótipo de funções*/
void gerenciadorSalas(vector<Sala> &salas);
void gerenciadorSessao(vector<Sessao> &sessao, vector<Sala> &salas);
void gerenciadorVenda(vector<Sala> &salas, vector<Sessao> &sessao, vector<Venda> &venda);
void inicializaSalas(vector<Sala> &sala);
void inicializaSessao(vector<Sessao> &sessao);

int main () {
	//Atributos do programa principal
	int opcao;
	vector<Sala> salas;
	vector<Sessao> sessao; 
	vector<Venda> venda;
	inicializaSalas(salas);
	inicializaSessao(sessao);
	system("clear");


	cout << "------------------------------------" << endl;
	cout << "Sistema de Gestao de Salas de Cinema" << endl;
	cout << "------------------------------------" << endl;
	
	//Menu Principal
	do{
		cout << endl;
		cout << endl;
		cout << "Menu de opções" << endl;
		cout << "1 - Gerenciar Salas" << endl;
		cout << "2 - Gerenciar Sessao" << endl;
		cout << "3 - Gerenciar Venda" << endl;
		cout << "0 - Encerrar" << endl;

		cin >> opcao;

		switch (opcao){
			case 1: 
				system("clear");
				gerenciadorSalas(salas);
			break;
			case 2: 
				system("clear");
				gerenciadorSessao(sessao, salas);
			break;
			case 3:
				system("clear");
				gerenciadorVenda(salas,sessao,venda);
			break;
			case 0:{
				break;
			}
			default:
				system("clear");
				cout << "Opção Invalida" << endl;
			break;
			
		}

	}while (opcao != 0);


    return 0;
}

/*Função para inicializar salas - leitura de arquivo*/
void inicializaSalas(vector<Sala> &salas){
	int opcao = 1, nFileira, nAssentoFileira;
	ifstream in("sala.txt");
	if(!in) {
		cout << "O arquivo nao pode ser aberto" << endl;
		return;
	}
	
	while(opcao != 0){
		in >> nFileira;
		in >> nAssentoFileira;
		Sala *s = new Sala(salas.size(), nFileira, nAssentoFileira);
		salas.push_back((*s));
		delete s;
		in >> opcao;
	}
	in.close();
}

/*Função para inicializar sessão - leitura de arquivo*/
void inicializaSessao(vector<Sessao> &sessao){
	int opcao = 1, sala;
	string filme, horario;
	ifstream in("sessao.txt");
	if(!in) {
		cout << "O arquivo nao pode ser aberto" << endl;
		return;
	}
	
	while(opcao != 0){
		in >> filme;
		in >> horario;
		in >> sala;
		Sessao *s = new Sessao(sessao.size(), filme, horario, sala, false, 0);
		sessao.push_back((*s));
		delete s;
		in >> opcao;
	}
	in.close();

}

/*Função para gerenciar salas*/
void gerenciadorSalas(vector<Sala> &salas){
	int opcao, nFileira, nAssentoFileira, numSala;
	
	//Menu Salas
	do{
		cout << endl;
		cout << endl;
		cout << "Menu de opções" << endl;
		cout << "1 - Inserir Sala" << endl;
		cout << "2 - Remover Sala" << endl;
		cout << "3 - Interditar Sala" << endl;
		cout << "4 - Ver Salas" << endl;
		cout << "0 - Voltar ao Menu Anterior" << endl;

		cin >> opcao;

		switch (opcao){
			case 1:{ 
				system("clear");
				try{
					cout << "Entre com a quantidade de fileiras" << endl;
					cin >> nFileira;		
					cout << "Entre com a quantidade de assentos por fileira" << endl;
					cin >> nAssentoFileira;
					if((nFileira < 0)||(nAssentoFileira <0))
						throw "Entrada Incorreta";
					try{
						Sala *s = new Sala(salas.size(), nFileira, nAssentoFileira);
						salas.push_back((*s));
						delete s;
					}catch(bad_alloc){
						cout << "Memoria Indisponivel";
					}
				}catch (char const *e){
					cout << e << "\n";
				}
				break;
			}
			case 2:{
				system("clear");
				try{
					cout << "Entre com o numero da sala que deseja excluir" << endl;
					cin >> numSala;
					if(numSala<0)
						throw "Entrada Incorreta";
					salas.erase(salas.begin() + numSala);
				}catch (char const *e){
					cout << e << "\n";
				}
				break;
			}
			case 3:{
				system("clear");
				try{
					cout << "Selecione a sala" << endl;
					cin >> numSala;
					if(numSala<0)
						throw "Entrada Incorreta";
				}catch(char const *e){
					cout << e << "\n";
				}
				cout << "Menu de opções" << endl;
				cout << "1 - Liberar Sala" << endl;
				cout << "2 - Manutencao de equipamento" << endl;
				cout << "3 - Reforma" << endl;
				cout << "4 - Manutencao geral" << endl;
				int op;
				cin >> op;
				switch(op){
					case 1:
						salas[numSala].setEstado("disponivel");
					break;
					case 2:
						salas[numSala].setEstado("manuEquipamento");
					break;
					case 3:
						salas[numSala].setEstado("reforma");
					break;
					case 4:
						salas[numSala].setEstado("manuGeral");
					break;
					case 0:{
						break;
					}
					default:
						system("clear");
						cout << "Opção Invalida" << endl;
					break;
				}


			}
			case 4:{
				for(int i=0;i<salas.size();i++) {
					salas[i].imprimeSala();	
				}
				break;
			}
			case 0:{
				system("clear");
				break;
			}
			default:
				system("clear");
				cout << "Opção Invalida" << endl;
			break;

		}

	}while (opcao != 0);
}

/*Função para gerenciar sessão*/
void gerenciadorSessao(vector<Sessao> &sessao, vector<Sala> &salas){
	string filme, horario;
	int opcao, sala, nSessao;

	//Menu Sessão
	do{
		cout << endl;
		cout << endl;
		cout << "Menu de opções" << endl;
		cout << "1 - Inserir Sessao" << endl;
		cout << "2 - Encerrar Sessao" << endl;
		cout << "3 - Ver Sessoes" << endl;
		cout << "0 - Voltar ao Menu Anterior" << endl;
		
		cin >> opcao;

		switch (opcao){
			case 1:{
				system("clear");
				try{
					cout << "Entre com o nome do filme" << endl;
					cin >> filme;		
					cout << "Entre com o horario" << endl;
					cin >> horario;			
					cout << "Entre com a sala" << endl;
					cin >> sala;
					if(salas[sala].getEstado() != "disponivel")
						throw "Sala Interditada";
					for(int i = 0;i<salas.size(); i++){
						if((sessao[i].getHorario() == horario) && (sessao[i].getSala() == sala))
							throw "Sala já alocada para esse horario";
					}

					try{
						Sessao *s = new Sessao(sessao.size(), filme, horario, sala, false, 0);	
						sessao.push_back((*s));
						delete s;
					}catch(bad_alloc){
						cout << "Memoria Indisponivel";
					}
					

				}catch (char const *e){
					cout << e << "\n";					
				}

				break;
			}
			case 2:{
				system("clear");
				try{
					cout << "Entre com a sessao que deseja encerrar" << endl;
					cin >> nSessao;
					if(nSessao < 0)
						throw "Entrada Invalida";
					sessao.erase(sessao.begin() + nSessao);
				}catch (char const *e){
					cout << e << "\n";
				}
				break;
			}
			case 3:{
				for(int i=0;i<sessao.size();i++) {
					sessao[i].imprimeSessao();	
				}
				break;
			}
			case 0:{
				system("clear");
				break;
			}
			default:
				system("clear");
				cout << "Opção Invalida" << endl;
			break;

		}

	}while(opcao != 0);

}

/*Função para gerenciar venda*/
void gerenciadorVenda(vector<Sala> &salas, vector<Sessao> &sessao, vector<Venda> &venda){
	int opcao;
	int nVendas = 0;
	int total;
	
	//Menu Venda
	do{

		cout << "Menu de opções" << endl;
		cout << "1 - Inserir Ingresso" << endl;
		cout << "2 - Remover Ingresso" << endl;
		cout << "3 - Calcular Valor Total" << endl;
		cout << "4 - Emitir Ingresso(s)" << endl;
		cout << "0 - Voltar para o menu anterior" << endl;
		cin >> opcao;

		switch (opcao){
			case 1:{
				system("clear");
				Venda *v = new Venda(nVendas);
				venda.push_back(*v);
				delete v;
				venda[nVendas].addIngresso(salas,sessao);
				break;
			}
			case 2:{
				system("clear");
				venda[nVendas].removeIngresso(salas,sessao);
				break;
			}
			case 3:{
				system("clear");
				total = venda[nVendas].calcularValorTotal();
				break;
			}
			case 4:{
				system("clear");
				venda[nVendas].emitirIngresso();
				nVendas++;
				break;
			}
			case 0:{
				system("clear");
				break;
			}
			default:
				system("clear");
				cout << "Opção Invalida" << endl;
			break;
		}

	}while(opcao != 0);
}