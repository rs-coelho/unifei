#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
# define TAM_NOME 50
# define TAM_ALUNOS 70

typedef enum{false,true} bool;

bool compare(int x,int v[TAM_ALUNOS]){
  int i=0;
  while(v[i]!='\0'){
    if(v[i]==x) return false;
    i++;
  }
  return true;
}

void inicializaMatrizDesordenada(char x[TAM_ALUNOS][TAM_NOME],char y[TAM_ALUNOS][TAM_NOME]){
  srand(time(NULL));
  int v[TAM_ALUNOS];
  for(int i=0;i<TAM_ALUNOS;i++){
    int c = rand()%TAM_ALUNOS;
    if(compare(c,v)||(i==0)){
      strcpy(y[i],x[c]);
      v[i]=c;
    }
    else i--;
  }
}
void imprimeMatriz(char m[TAM_ALUNOS][TAM_NOME]){
  for(int i=0;i<TAM_ALUNOS;i++){
      printf("%s \n",m[i]);
  }
}

int main(){
char ordenado[TAM_ALUNOS][TAM_NOME]={
"ALEX MARIANO MAJEAU",
"ALVARO ANTONIO DOS REIS GUERRA",
"ALYSSON CARVALHO RIBEIRO",
"ANA CAROLINA DE CAMPOS",
"ANA CAROLINA MALVEIRA FERREIRA",
"ANDRE LARS DA CUNHA",
"ANDRE LUIZ DE OLIVEIRA DALEFFI",
"BIANCA CABRAL C. C. BRANCO",
"BRUNO ANDREW MIONI",
"CAIO VITOR GOBIRA DAMASCENO",
"CAMILO CARNEIRO SILVA",
"CAROLINA VASQUES MOREIRA",
"DANIEL MALTONI DAMASIO",
"DANILO LOPES BARBOSA",
"DIEGO SILVA BEKER DOS REIS",
"EDSON BELTRANE JUNIOR",
"EDUARDO DE SOUZA",
"EDUARDO FARIA DE TOLEDO MORAES",
"ENRY LUCAS DE C. GONÇALVES",
"EZEQUIEL VICTOR DA SILVA",
"FELIPE SILVA DE PAULA",
"FLAVIO VANONI CARVALHO JUNIOR",
"FRANCISCO FELIPE GOMES SOUSA",
"GABRIEL LOPES DOS SANTOS",
"GABRIEL POGGIO SONEGHET",
"GEOWANA MARCELLA SIQUEIRA",
"GIOVANE CARVALHO SILVERIO",
"GUILHERME BERNARDI BROCHETA",
"GUILHERME HENRIQUE A. RIBEIRO",
"GUILHERME MALAQUIAS BORTOLETTO",
"GUILHERME MARQUES NETTO",
"GUILHERME PINHEIRO DOS SANTOS",
"GUSTAVO HIDEKI HIRATA TANI",
"HATOS ALBERT BARBOSA",
"HEITOR CAMACHO PINTO SANTOS",
"HUGO SILLMAN DA CUNHA CARVALHO",
"IVAN LACERDA DE REZENDE",
"JAYME JOSE DOS SANTOS NETO",
"JOAO PEDRO PASCUINI MUNHOZ",
"JONAS CAUAN DE OLIVEIRA",

"JULIANA FIGUEIREDO DE ANDRADE",
"LEONARDO DUARTE BONAFE",
"LINCOLN FARIA G. F. FILHO",
"LUCAS BARROS AMARAL",
"LUCAS GUTIERREZ VILLAS BOAS",
"LUCAS OBOLI DAMALIO",
"MARCOS VINICIUS LOPES CORTASSO",
"MARIA HELENA BRAGA BARNABE",
"MARINA DE SOUZA BALESTRASSI",
"MATHEUS H. B. SANTOS",
"MISAEL CEZAR GOMES DE SOUZA",
"MURILO RICHARD SANTOS",
"NICOLAS CAVALLI R. DA SILVA",
"OTTO FERREIRA DOS SANTOS",
"PAULO EDUARDO PAES SALOMON",
"PEDRO FELIPE DOMINGUITE",
"PEDRO PALHARI SANTOS",
"PEDRO PAULO DE FREITAS JUNIOR",
"RAFAEL CABRAL CAMILO DA SILVA",
"RAFAEL CAMARGOS SOUZA",
"RAFAEL FERNANDO TRESSOLDI YANO",
"RAFAELLA SILVA MONTI SOUZA",
"ROMEU JOAQUIM GARCIA",
"TERCIO NAOKI SATO",
"TULIO PASSOS LOPES",
"ULYSSES CAETANO BRAGA",
"VICTOR LUIZ BRANDAO",
"VICTOR RANZANI TISEO",
"VITOR NISHINO",
"WENDEL AUGUSTO CHERCHIGLIA",
};
char desordenado[TAM_ALUNOS][TAM_NOME];
inicializaMatrizDesordenada(ordenado, desordenado);
printf(">>> ORDENADO\n");
imprimeMatriz(ordenado);
printf("\n >>>DESORDENADO\n");
imprimeMatriz(desordenado);
}