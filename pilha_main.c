#include <stdio.h>
#include <stdlib.h>

#include "pilha.h"

int main() {
  Pilha *p1 = criar_pilha();
  Pilha *p2 = criar_pilha();
  Pilha *p3 = criar_pilha();
  int opcao, a, b;
  char matrix[5];

  empilhar(p1, 'U');
  empilhar(p1, 'O');
  empilhar(p1, 'I');
  empilhar(p1, 'E');
  empilhar(p1, 'A');

  do {
    printf("\n*********************************************\n");
    printar_pilhas(p1, p2, p3);

    printf("Opcoes: 0 - Sair do Jogo, 1 - Mudar Elemento\n");
    scanf("%d", &opcao);
    if (opcao == 0) {
      printf("Bom jogo!\n");
      break;
    }

    else if (opcao == 1) {
      printf("Mover da pilha: ");
      scanf("%d", &a);
      switch (a) {
      case 1:
        printf("Para a pilha: ");
        scanf("%d", &b);
        if (b == 2) {
          mover(p1, p2);
          break;
        } else if (b == 3) {
          mover(p1, p3);
          break;
        } else {
          printf("Tem essa pilha n parceir@\n");
          break;
        }

      case 2:
        printf("Para a pilha: ");
        scanf("%d", &b);
        if (b == 1) {
          mover(p2, p1);
          break;
        } else if (b == 3) {
          mover(p2, p3);
          break;
        } else {
          printf("Tem essa pilha n parceir@\n");
          break;
        }
      case 3:
        printf("Para a pilha: ");
        scanf("%d", &b);
        if (b == 1) {
          mover(p3, p1);
          break;
        } else if (b == 2) {
          mover(p3, p2);
          break;
        } else {
          printf("Tem essa pilha n parceir@\n");
          break;
        }
      default:
        printf("Nao pode fazer isso ow!\n");
        break;
      }
    } else {
      printf("Nao tem essa opcao mano\n");
    }

  } while (1);

  liberar_pilha(p1);
  liberar_pilha(p2);
  liberar_pilha(p3);

  return 0;
}
