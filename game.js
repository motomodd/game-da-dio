// GAME DE DIA, DEVE CONTER: VARIÁVEIS, OPERADORES, LAÇOS DE REPETIÇÃO, ESTRUTURAS CONDICIONAIS, CLASSES E OBJETOS

// CRIANDO A CLASS E SUAS PROPRIEDADES
class heroi{
    tipoAtaque = "(arma não definida)";
    constructor(nome, idade, tipo) {
        this.nome = nome;
        this.idade = idade;
        this.tipo = tipo;
    }

    heroiAtacar() {
        if (this.tipo == "mago") {
        this.tipoAtaque = "magia";
        } else if (this.tipo == "guerreiro") {
        this.tipoAtaque = "espada";
        } else if (this.tipo == "monge") {
        this.tipoAtaque = "artes marciais";
        } else if (this.tipo == "ninja") {
        this.tipoAtaque = "shuriken";
        }
        console.log(`O heroi ${this.nome} do tipo ${this.tipo} atacou usando ${this.tipoAtaque}`);
    }
}
const heroiGoku = new heroi("Goku", 20, "monge");
const heroiNaruto = new heroi("Naruto", 15, "ninja");
const heroiSamurai = new heroi("Samurai Shadow", 33, "guerreiro")

const nomeHerois = [heroiGoku, heroiNaruto, heroiSamurai];

for (let i = 0; i < nomeHerois.length; i++) {
    nomeHerois[i].heroiAtacar();
}
