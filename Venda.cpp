/*
 * Nome do arquivo: Venda.cpp
 * Autores: Hitalo Siqueira, Bruna Pompeu, Thales Chagas
 * Turma: 011
 * Descricao: Programa para gerenciar vendas
 * Data de conclusao: 30/06/2014
 */

 //Bibliotecas padrão do sistema
#include <iostream>
#include <vector>
#include "Venda.h"
#include "Ingresso.h"
#include "Fileira.h"
#include "Sala.h"

//Construtor
Venda::Venda(int idVenda){
	this->idVenda = idVenda;
}

//Registrar ingresso
void Venda::addIngresso(vector<Sala> &sala, vector<Sessao> &sessao){
	int nSessao, s;
	bool disp;
	char fileira;
	int assento;
	string data;
	int tipo;

	cout << "Entre com a data" << endl;
	cin >> data;


	cout << "0 - Inteira" << endl;
	cout << "1 - Meia" << endl;
	cin >> tipo;


	cout << "Selecione a Sessao" << endl;
	for(int i=0;i<sessao.size();i++) {
		sessao[i].imprimeSessao();	
	}
	cin >> nSessao;

	for(int i = 0; i<sessao.size();i++){
		if(nSessao == sessao[i].getNSessao()){
			s = sessao[i].getSala();
		}
	}

	do{
		cout << "Selecione a Fileira e o Assento" << endl;
		sala[s].imprimeSala();	
		cin >> fileira; 
		cin >> assento;

		disp = sala[s].verificaFileira(fileira, assento);
		if((!disp)){
			cout << "Assento Ocupado" << endl;
		}
	}while(disp == false);

	Ingresso *in;
	if(tipo == 0){
		in = new Ingresso(ingresso.size(),10,assento,fileira,nSessao,tipo,data);
	}else{
		if(tipo == 1){
			in = new Ingresso(ingresso.size(),5,assento,fileira,nSessao,tipo,data);
		}
	}
	ingresso.push_back((*in));
	delete in;
}

//Remover ingresso
void Venda::removeIngresso(vector<Sala> &sala, vector<Sessao> &sessao){
	int opcao, s, id;
	cout << "Selecione o ingresso que deseja remover" << endl;
	imprimeIngressos();
	cin >> opcao;

	for(int i = 0; i<sessao.size();i++){
		if(ingresso[opcao].getNSessao() == sessao[i].getNSessao()){
			s = sessao[i].getSala();
		}
	}
	sala[s].setDisp(ingresso[opcao].getFileira(), ingresso[opcao].getAssento());
	ingresso.erase(ingresso.begin() + opcao);
}

//Mostra ingressos
void Venda::imprimeIngressos(){
	for(int i=0;i<ingresso.size();i++){
		cout <<"Ingresso " <<ingresso[i].getId() << " Tipo " << ingresso[i].getTipo()<<" Sessao "<< ingresso[i].getNSessao()<<endl; 
	}
}

//Calcula o valor de todos os ingressos cadastrados
double Venda::calcularValorTotal(){
	double total;
	imprimeIngressos();
	for(int i = 0; i<ingresso.size();i++){
		total +=  ingresso[i].getValor();
	}
	this->valorTotal = total;

	cout << "Total da Compra: " << valorTotal << endl;
	return total;
}

//Adiciona o ingresso a um arquivo
void Venda::emitirIngresso(){
	imprimeIngressos();
}
