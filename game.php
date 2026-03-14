<?php

class Heroi {

    public $nome;
    public $idade;
    public $tipo;
    public $tipoAtaque="arma não definida";

    function __construct($nome,$idade,$tipo){
        $this->nome=$nome;
        $this->idade=$idade;
        $this->tipo=$tipo;
    }

    function heroiAtacar(){

        if($this->tipo=="mago"){
            $this->tipoAtaque="magia";
        }
        elseif($this->tipo=="guerreiro"){
            $this->tipoAtaque="espada";
        }
        elseif($this->tipo=="monge"){
            $this->tipoAtaque="artes marciais";
        }
        elseif($this->tipo=="ninja"){
            $this->tipoAtaque="shuriken";
        }

        echo "O heroi {$this->nome} do tipo {$this->tipo} atacou usando {$this->tipoAtaque}\n";
    }
}

$herois = [
    new Heroi("Goku",20,"monge"),
    new Heroi("Naruto",15,"ninja"),
    new Heroi("Samurai Shadow",33,"guerreiro")
];

foreach($herois as $h){
    $h->heroiAtacar();
}
