#include <iostream>
#include "Agenda.cpp"

using namespace std;

int Agenda(){
    int Opcao=0;
    if(Opcao!=4){
        cout <<"Escolha uma opcao:\n\n";
        cout <<"01-Inserir Compromisso\n";
        cout <<"02-Remover Compromisso\n";
        cout <<"03-Listar os Compromissos\n";
        cout <<"04-Fechar Agenda\n";
    };
    cin >> Opcao;
    return Opcao;
}

int main(){
    int Op,mes,x;
    Lista_Compromissos lista;
    int dia, horario;
    string descricao;
    Op=Agenda();
    while(Op!=4){
        switch(Op){
        case 1:{
            cout <<"Insira o numero do mes desejado\n";
            cin>> mes;
            cout<<"Insira dia:\n";
            cin>>dia;
            cout<<"Insira o horario:\n";
            cin>> horario;
            cout<<"Insira o nome do compromisso:\n";
            cin>> descricao;
            Inserir_Compromisso(&lista,descricao,horario);
            break;
        }
        case 2:{
            cout <<"Insira o num do mes desejado\n";
            cin>> mes;
            cout<<"Insira o numero do compromisso que deseja excluir:\n";
            cin>>x;
            Remover_Compromisso(&lista,x);
            break;
        }
        case 3:{
            cout<<"Insira o num do mes desejado\n";
            cin>>mes;
            Imprimir(lista);
            break;
        }
    }}
    return 0;
}
