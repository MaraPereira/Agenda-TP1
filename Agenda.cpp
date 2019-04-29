#include<iostream>
#include "Agenda.hpp"

using namespace std;

void Iniciar_Lista(Lista_Compromissos *lista){
    lista->inicio= nullptr;
    lista->fim = nullptr;
    lista->anterior=nullptr;
    lista->atual= nullptr;
}

void Inserir_Compromisso(Lista_Compromissos *lista, string descricao, int horario){
    Compromisso *novo = new Compromisso();
    novo->descricao=descricao;
    novo->horario=horario;
    novo->prox=nullptr;
    if (lista->inicio==nullptr){
        lista->inicio=novo;
        lista->fim=novo;
    }else{
        lista->fim->prox=novo;
        lista->fim=novo;
    }
    lista->num_compromissos++;
}

void Remover_Compromisso(Lista_Compromissos *lista,int x){
    if (x< lista->num_compromissos){
        cout <<"Erro";
        return;
    }
    Compromisso *atual=lista->inicio;
    Compromisso *anterior=nullptr;
    for(int j=0;j<x;j++){
        lista->anterior=atual;
        lista->atual=atual->prox;
    }
    if(anterior!=nullptr){
        lista->anterior->prox=atual->prox;
    }
    if(x==0){
        lista->inicio=atual->prox;
    }
    if(x==lista->num_compromissos - 1){
        lista->fim=anterior;
    }
    lista->num_compromissos--;
    delete lista->atual;
}

void Imprimir(Lista_Compromissos lista){
    Compromisso *aux= lista.inicio;
    while(aux!=nullptr){
        cout << aux->descricao <<"\n";
        cout << aux->horario <<"\n";
        aux=aux->prox;
    }
}

void Iniciar(Conj_dias *conjunto_dias,int dias){
    int i=0;
    conjunto_dias->lista=new Lista_Compromissos[dias];
    for(i=0;i<dias;i++){
        Iniciar_Lista(&conjunto_dias->lista[i]);
    }
}
