#include <stdio.h>

int main(void) {

  int qNotas;
  float nota, soma = 0, media;

  printf("Digite a quantidade de notas: ");
  scanf("%d", &qNotas);

  int contador = 1;

  while (contador <= qNotas) {
    printf("Digite nota %d: ", contador);
    scanf("%f", &nota);

    soma += nota;

    contador++;
  }
  media = soma / qNotas;
  
  printf("A média de %d é: %.2f\n", qNotas, media);

  return 0;
}