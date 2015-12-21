/*
 * Nome do arquivo: Assento.cpp
 * Autores: Hitalo Siqueira, Bruna Pompeu, Thales Chagas
 * Turma: 011
 * Descricao: Executa as funções de controle de assentos.
 * Data de conclusao: 30/06/2014
 */

 /*Bibliotecas padrão da linguagem*/

#include <iostream>
#include <vector>
#include "Assento.h"
using namespace std;

/*Verifica disponibilidade de assento*/
bool Assento::verificaDisponibilidade(){
	return this->disponibilidade;
}

/*Atribui disponibilidade ao assento*/
void Assento::setDisponibilidade(bool disponibilidade){
	this->disponibilidade = disponibilidade;
}

/*Recebe a identificação do assento*/
int Assento::getIdAssento(){
	return this->idAssento;
}
/*Atribui identificação ao assento*/
void Assento::setIdAssento(int idAssento){
	this->idAssento = idAssento;
}
