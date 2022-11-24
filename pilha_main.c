#include <stdio.h>
#include <stdlib.h>

#include "pilha.h"

int main() {
  Pilha *p1 = criar_pilha();
  Pilha *p2 = criar_pilha();
  Pilha *p3 = criar_pilha();

  empilhar(p1, 'U');
  empilhar(p1, 'O');
  empilhar(p1, 'I');
  empilhar(p1, 'E');
  empilhar(p1, 'A');

  mover(p1, p2);
  // mover(p1, p2);

  liberar_pilha(p1);
  liberar_pilha(p2);
  liberar_pilha(p3);

  return 0;
}