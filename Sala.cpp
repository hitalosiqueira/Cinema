/*
 * Nome do arquivo: Sala.cpp
 * Autores: Hitalo Siqueira, Bruna Pompeu, Thales Chagas
 * Turma: 011
 * Descricao: Executa as funções de controle de sala.
 * Data de conclusao: 30/06/2014
 */

#include <iostream>
#include <vector>
#include "Sala.h"
#include "Assento.h"

using namespace std;

/*Contrutor para sala*/
Sala::Sala(int numSala, int nFileiras, int nAssentosFileira){
    estado = "disponivel";
	this->numSala = numSala;
	this->nFileiras = nFileiras;
	this->nAssentosFileira = nAssentosFileira;
	char letra = 'a';
	f.resize(nFileiras);
	
	for(int i = 0; i < this->nFileiras; i++){
		f[i].setIdFileira(letra);
		f[i].iniciaAssentos(nAssentosFileira);
		letra++;
	}
}


//Atribui um número a sala
void Sala::setNumSala(int numSala){
	this->numSala = numSala;
}

//Atribui a quantidade de fileiras para uma sala
void Sala::setNFileiras(int nFileiras){
	this->nFileiras = nFileiras;
}

//Atribui a quantidade de assentos para uma sala
void Sala::setNAssentosFileira(int nAssentosFileira){
	this->nAssentosFileira = nAssentosFileira;
}

//Recebe o número da sala
int Sala::getNumSala(){
	return this->numSala;
}

//Recebe o número de fileiras
int Sala::getNFileiras(){
	return this->nFileiras;
}

//Recebe o número de assentos da fileira
int Sala::getNAssentosFileira(){
	return this->nAssentosFileira;
}

//Atribui um estado a sala
void Sala::setEstado(string estado){
	this->estado = estado;
}
//Recebe o estado da sala
string Sala::getEstado(){
	return this->estado;
}

//Mostra sala
void Sala::imprimeSala(){
    cout << "Sala " << numSala << " " << getEstado() << endl;
    f[0].imprimeX();
    for(int i = 0; i < f.size(); i++){
        cout << f[i].getIdFileira() << "\t";
        f[i].imprimeAssentos();
        cout << "\n";
    }

}

//Verifica disponibilidade dos assentos
bool Sala::verificaFileira(char fileira, int assento){
	for(int i=0;i<f.size();i++){
		if(fileira == f[i].getIdFileira()){
			return f[i].verificaAssento(assento);
		}
	}
}

void Sala::setDisp(char fileira, int assento){
	for(int i=0;i<f.size();i++){
		if(fileira == f[i].getIdFileira()){
			f[i].setDisponibilidade(assento);
		}
	}
}






