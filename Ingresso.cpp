/*
 * Nome do arquivo: Ingresso.cpp
 * Autores: Hitalo Siqueira, Bruna Pompeu, Thales Chagas
 * Turma: 011
 * Descricao: Este programa executa as funções de controle de ingresso.
 * Data de conclusao: 30/06/2014
 */

#include <iostream>
#include "Ingresso.h"

//Construtor
Ingresso::Ingresso(int id, double valor, int assento, char fileira, int nSessao,int tipo, string data){
	this->id = id;
	this->dtIngresso = data;
	this->valor = valor;
	this->tipo = tipo;
	this->nSessao = nSessao;
	this->fileira = fileira;	
	this->assento = assento;
}

//Recebe a data do ingresse
string Ingresso::getDtIngresso(){
	return this->dtIngresso;
}

//Recebe valor do ingresso
double Ingresso::getValor(){
	return this->valor;
}

//Atribui a data ao ingresso
void Ingresso::setDtIngresso(string dtIngresso){
	this->dtIngresso = dtIngresso;
}

//Atribui o valor ao ingresso
void Ingresso::setValor(double valor){
	this->valor = valor;
}


//Atribui o tipo do ingresso (meio ou inteiro)
void Ingresso::setTipo(int tipo){
	this->tipo = tipo;
}

//Recebe o tipo do ingresso
int Ingresso::getTipo(){
	return this->tipo;
}

//Atribui uma sessao ao ingresso
void Ingresso::setNSessao(int nSessao){
	this->nSessao = nSessao;
}

//Atribui uma fileira ao ingresso
void Ingresso::setFileira(char fileira){
	this->fileira = fileira;
}

//Atribui um assento ao ingresso
void Ingresso::setAssento(int assento){
	this->assento = assento;
}

//Recebe a sessao relacionada ao ingresso
int Ingresso::getNSessao(){
	return this->nSessao;
}

//Recebe a fileira relacionada ao ingresso
char Ingresso::getFileira(){
	return this->fileira;
}

//Recebe o assento relacionado ao ingresso
int Ingresso::getAssento(){
	return this->assento;
}

//Recebe a identificacao do ingresso
int Ingresso::getId(){
	return this->id;
}