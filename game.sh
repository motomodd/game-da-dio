#!/bin/bash

heroi_atacar() {
    nome=$1
    tipo=$2
    tipoAtaque="arma não definida"

    if [[ $tipo == "mago" ]]; then
        tipoAtaque="magia"
    elif [[ $tipo == "guerreiro" ]]; then
        tipoAtaque="espada"
    elif [[ $tipo == "monge" ]]; then
        tipoAtaque="artes marciais"
    elif [[ $tipo == "ninja" ]]; then
        tipoAtaque="shuriken"
    fi

    echo "O heroi $nome do tipo $tipo atacou usando $tipoAtaque"
}

heroi_atacar "Goku" "monge"
heroi_atacar "Naruto" "ninja"
heroi_atacar "Samurai Shadow" "guerreiro"
