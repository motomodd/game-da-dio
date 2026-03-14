class Heroi:

    def __init__(self,nome,idade,tipo):
        self.nome=nome
        self.idade=idade
        self.tipo=tipo
        self.tipoAtaque="arma não definida"

    def heroiAtacar(self):

        if self.tipo=="mago":
            self.tipoAtaque="magia"
        elif self.tipo=="guerreiro":
            self.tipoAtaque="espada"
        elif self.tipo=="monge":
            self.tipoAtaque="artes marciais"
        elif self.tipo=="ninja":
            self.tipoAtaque="shuriken"

        print(f"O heroi {self.nome} do tipo {self.tipo} atacou usando {self.tipoAtaque}")


herois=[
Heroi("Goku",20,"monge"),
Heroi("Naruto",15,"ninja"),
Heroi("Samurai Shadow",33,"guerreiro")
]

for h in herois:
    h.heroiAtacar()
