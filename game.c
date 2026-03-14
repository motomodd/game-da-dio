#include <stdio.h>
#include <string.h>

struct Heroi {
    char nome[50];
    int idade;
    char tipo[20];
};

void heroiAtacar(struct Heroi h){

    char tipoAtaque[30]="arma não definida";

    if(strcmp(h.tipo,"mago")==0)
        strcpy(tipoAtaque,"magia");
    else if(strcmp(h.tipo,"guerreiro")==0)
        strcpy(tipoAtaque,"espada");
    else if(strcmp(h.tipo,"monge")==0)
        strcpy(tipoAtaque,"artes marciais");
    else if(strcmp(h.tipo,"ninja")==0)
        strcpy(tipoAtaque,"shuriken");

    printf("O heroi %s do tipo %s atacou usando %s\n",h.nome,h.tipo,tipoAtaque);
}

int main(){

    struct Heroi herois[3]={
        {"Goku",20,"monge"},
        {"Naruto",15,"ninja"},
        {"Samurai Shadow",33,"guerreiro"}
    };

    for(int i=0;i<3;i++){
        heroiAtacar(herois[i]);
    }

}
