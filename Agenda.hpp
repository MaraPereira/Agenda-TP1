#include<iostream>
using namespace std;

typedef struct Compromisso{
    string descricao;
    int horario;
    Compromisso *prox;
}Compromisso;

typedef struct Lista_Compromissos{
    Compromisso *inicio;
    Compromisso *fim;
    Compromisso *anterior;
    Compromisso *atual;
    int num_compromissos;
}Lista_Compromissos;

typedef struct Conj_dias{
     Lista_Compromissos *lista;
 }Conj_dias;

typedef struct Mes{
    int mes;
    Mes *prox;
    Conj_dias dias;
}Mes;


void Iniciar_Lista(Lista_Compromissos *lista);
void Inserir_Compromisso(Lista_Compromissos *lista, string descricao, int horario);
void Iniciar(Conj_dias *conjunto_dias,int mes);
void Imprimir(Lista_Compromissos lista);
void Remover_Compromisso(Lista_Compromissos *lista, int x);
