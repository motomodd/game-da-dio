package main

import "fmt"

type Heroi struct {
	nome string
	idade int
	tipo string
}

func (h Heroi) heroiAtacar(){

	tipoAtaque := "arma não definida"

	if h.tipo=="mago"{
		tipoAtaque="magia"
	}else if h.tipo=="guerreiro"{
		tipoAtaque="espada"
	}else if h.tipo=="monge"{
		tipoAtaque="artes marciais"
	}else if h.tipo=="ninja"{
		tipoAtaque="shuriken"
	}

	fmt.Printf("O heroi %s do tipo %s atacou usando %s\n",h.nome,h.tipo,tipoAtaque)
}

func main(){

	herois := []Heroi{
		{"Goku",20,"monge"},
		{"Naruto",15,"ninja"},
		{"Samurai Shadow",33,"guerreiro"},
	}

	for _,h := range herois{
		h.heroiAtacar()
	}
}
