#include <iostream>
#include <vector>
using namespace std;

class Heroi{

public:
    string nome;
    int idade;
    string tipo;
    string tipoAtaque="arma não definida";

    Heroi(string n,int i,string t){
        nome=n;
        idade=i;
        tipo=t;
    }

    void heroiAtacar(){

        if(tipo=="mago")
            tipoAtaque="magia";
        else if(tipo=="guerreiro")
            tipoAtaque="espada";
        else if(tipo=="monge")
            tipoAtaque="artes marciais";
        else if(tipo=="ninja")
            tipoAtaque="shuriken";

        cout<<"O heroi "<<nome<<" do tipo "<<tipo<<" atacou usando "<<tipoAtaque<<endl;
    }
};

int main(){

    vector<Heroi> herois={
        Heroi("Goku",20,"monge"),
        Heroi("Naruto",15,"ninja"),
        Heroi("Samurai Shadow",33,"guerreiro")
    };

    for(auto &h:herois){
        h.heroiAtacar();
    }
}
