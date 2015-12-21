/*
 * Nome do arquivo: Sessao.cpp
 * Autores: Hitalo Siqueira, Bruna Pompeu, Thales Chagas
 * Turma: 011
 * Descricao: Executa as funções de controle de sessão.
 * Data de conclusao: 30/06/2014
 */

#include <iostream>
#include "Sessao.h"
using namespace std;


//Construtor de sessao
Sessao::Sessao(int nSessao, string filme, string horario, int sala, bool encerrada, int numVendido){
	this->nSessao = nSessao;
	this->filme = filme;
	this->horario = horario;
	this->encerrada = encerrada;
	this->sala = sala;
	this->numVendido = numVendido;
}

//Atribui sessao a uma sala
void Sessao::setSala(int sala){
	this->sala = sala;
}

//Recebe a sala da sessao
int Sessao::getSala(){
	return this->sala;
}

//Recebe o numero da sessao
int Sessao::getNSessao(){
	return this->nSessao;
}

//Atribui o status da sessao
void Sessao::setStatus(bool encerrada){
	this->encerrada = encerrada;
}

//Recebe o status da sessao
bool Sessao::getStatus(){
	return this->encerrada;
}

//Recebe horario da sessao
string Sessao::getHorario() {
	return this->horario;
}

//Atribui horario a sessao
void Sessao::setHorario(string horario){
	this->horario = horario;
}

//Atribui o numero de ingressos vendidos da sessao
void Sessao::setNumVendido(int numVendido) {

	this->numVendido = numVendido;
}

//Recebe o Filme da sessao
string Sessao::getFilme(){
	return this->filme;
}

//Atribui o filme a sessao
void Sessao::setFilme(string nomeFilme){
	this->filme = nomeFilme;
}

//Mostra sessao
void Sessao::imprimeSessao(){
	cout << "Sessao " << getNSessao() <<" "<< getFilme() << " " << getHorario() << endl;
}