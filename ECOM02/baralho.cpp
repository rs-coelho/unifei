#include "baralho.h"
#include "cartatrem.h"
#include "cartaobjetivo.h"
#include <algorithm>
#include <ctime>        // std::time
#include <cstdlib>      // std::rand, std::srand

typedef int objetivos;
typedef int pesos;

srand(unsigned(time(NULL)));

Baralho::Baralho(){
  // inicializa o baralho de cartas trem
  for (int i=0; i<110; i++) {
    if(i<12)
      trens[i].cor = 0; //COR PRETA
    if(i>=12 && i<24)
      trens[i].cor = 1; //COR VERMELHA
    if (i>=24 && i<36)
      trens[i].cor = 2; //COR AMARELO
    if (i>=36 && i<48)
      trens[i].cor = 3; //COR BRANCO
    if(i>=48 && i<60)
      trens[i].cor = 4; //COR LARANJA
    if(i>=60 && i<72)
      trens[i].cor = 5; //COR ROSA
    if (i>=72 && i<84)
      trens[i].cor = 6; //COR AZUL
    if (i>=84 && i<96)
      trens[i].cor = 7; //COR VERDE
    if (i>=96 && i<110)
      trens[i].cor = 8; //LOCOMOTIVA
    random_shuffle(trens[0],trens[110],rand());
  }//End Construtor Padrão

  // iniciliza o baralho de cartas de objetivo
  objetivos a; //Cidades de origem e destino
  pesos b; //Peso de cada cidade

  for (int j = 0; j < 30; j++) {
    objts[j]->peso = b;
    objts[j]->orig = a;
    objts[j]->dest = a+1;
    a++;
    b++;
  }
}

Baralho::Baralho(const Baralho& c){
  int i=0;
  primT=c.primT;
  primO=c.primO;
  while(i<110)
    trens[i]=c.trens[i];

  i=0;

  while(i<30)
    objts[i]=c.objts[i];
}//End Construtor de Cópia

Baralho& Baralho::operator=(const Baralho& a){
  //Sobrecarga do operador = que permite atribuir os valores de um objeto a outro
  return Baralho(a);
}//End Operator =

CartaTrem Baralho::comprarTrem(){
  //tira a primeira carta da lista de vagões
  CartaTrem a = trens[primT];
  primT++;
  return a;
}//End ComprarTrem

CartaObjetivo Baralho::comprarObjetivo(){
  //tira a primeira carta da lista de objetivo
  CartaObjetivo b = objts[primO];
  primO++;
  return b;
}//End ComprarObjetivo
