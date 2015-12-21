/*
 * Nome do arquivo: Fileira.cpp
 * Autores: Hitalo Siqueira, Bruna Pompeu, Thales Chagas
 * Turma: 011
 * Descricao: Este programa executa as funções de controle de fileira.
 * Data de conclusao: 30/06/2014
 */

#include <iostream>
#include <vector>
#include "Fileira.h"
using namespace std;

//Atribui a identificação da fileira
void Fileira::setIdFileira(char idFileira){
	this->idFileira = idFileira;
}

//Recebe a identificação da fileira
char Fileira::getIdFileira(){
	return this->idFileira;
}

//Inicializa os acentos de uma fileira
void Fileira::iniciaAssentos(int nAssentosFileira){
    a.resize(nAssentosFileira);
    for(int i=0;i<nAssentosFileira;i++){
        a[i].setDisponibilidade(true);
        a[i].setIdAssento(i);
    }
}

//Mostra assentos
void Fileira::imprimeAssentos(){

    for(int i=0;i<a.size();i++){
        cout << a[i].verificaDisponibilidade() << "  ";
    }
}

//Verifica disponibilidade dos assentos
bool Fileira::verificaAssento(int assento){
    bool aux;
    for(int i = 0; i < a.size(); i++){
        if(assento == a[i].getIdAssento()){

            if(a[i].verificaDisponibilidade()){
                aux = a[i].verificaDisponibilidade();
                a[i].setDisponibilidade(false);
            }
        }
    }
    return aux;
}

//Mostra a numeração dos assentos
void Fileira::imprimeX(){
    cout << "\t";
    for(int i=0;i<a.size();i++){
        cout << i << "  ";
    }
    cout << "\n\n";
}

//Atribui disponibilidade de assento
void Fileira::setDisponibilidade(int assento){
    for(int i = 0; i < a.size(); i++){
        if(assento == a[i].getIdAssento()){
            a[i].setDisponibilidade(true);
        }
    }
}