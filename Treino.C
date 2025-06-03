#include <stdio.h>
 int main(){
  
    float temperatura, umidade;
    unsigned int estoque, estoqueMinimo = 100;
  
    printf("Entre com a temperatura: \n");
    scanf("%f", &temperatura);
    
    printf("Entre com a umidade: \n");
    scanf("%f", &umidade);
 
    printf("Entre com a estoque: \n");
    scanf("%u", &estoque);
    
    if(temperatura >= 30){
      printf("Temperatura está alta.\n");
    } else {
      printf("Temperatura está dentro dos parâmetros.\n");
    }

     if(umidade >= 50){
      printf("Umidade está alta.\n");
    } else {
      printf("Umidade está dentro dos parâmetros.\n");
    }

    if(estoque >= estoqueMinimo){
      printf("Estoque bom.\n");
    } else {
      printf("Estoque baixo.\n");
    }
  }
  //int numero1 = 6;
    //int numero2 = 5;

    //if (numero1 >= numero2) {
      //printf ("o número 1 é maior\n");
    //} else{
    //printf("o número 2 é menor\n");
    //}
