#include <stdio.h>
#include <stdlib.h>

#include "pilha.h"

// definição do struct elemento
typedef struct elemento {
  char dado;
  struct elemento *prox;
} Elemento;

// função para alocar memória do tipo Pilha
Pilha *criar_pilha() {
  Pilha *pi = (Pilha *)malloc(sizeof(Pilha));

  // se a lista foi criada corretamente, indica que ela está vazia
  if (pi != NULL) {
    *pi = NULL;
  }

  return pi;
}

// função para liberar memória
int liberar_pilha(Pilha *pi) {
  if (pi == NULL) {
    return 0;
  }

  // libera todos os nós da pilha que foram alocados
  Elemento *no;
  while (*pi != NULL) {
    no = *pi;
    *pi = (*pi)->prox;
    free(no);
  }

  // libera o ponteiro da pilha
  free(pi);

  return 1;
}

// função para obter o tamanho da pilha
int tamanho_lista(Pilha *pi) {
  // a pilha não foi criada corretamente
  if (pi == NULL) {
    return 0;
  }

  int cont = 0;
  Elemento *no = *pi;

  // acrescenta cont até acabar a lista
  while (no != NULL) {
    cont++;
    no = no->prox;
  }

  return cont;
}

// função para alocar memória do tipo Elemento
Elemento *criar_elemento() {
  Elemento *no = (Elemento *)malloc(sizeof(Elemento));

  return no;
}

// função para inserir elemento no início da pilha (topo)
int empilhar(Pilha *pi, char dado) {
  if (pi == NULL) {
    return 0;
  }

  // cria um elemento novo
  Elemento *no = criar_elemento();

  if (no == NULL) {
    return 0;
  }

  // atribui valores ao elemento novo
  no->dado = dado;
  no->prox = (*pi);

  // insere elemento no início da pilha (topo)
  *pi = no;

  return 1;
}

// função para remover elemento do início da pilha (topo)
int desempilhar(Pilha *pi) {
  if (pi == NULL) {
    return 0;
  }

  // pilha vazia, não remove nada
  if ((*pi) == NULL) {
    return 0;
  }

  // muda inicio para o proximo elemento
  Elemento *atual;
  atual = *pi;
  *pi = (*pi)->prox;

  // libera Elemento atual
  free(atual);

  return 1;
}

// função para consultar o primeiro elemento (topo)
int consultar_topo_pilha(Pilha *pi, char *dado) {

  // verifica se a pilha foi criada corretamente e se não está vazia
  if (pi == NULL || *pi == NULL) {
    return 0;
  }

  // copia o dado do topo da pilha (início da lista)
  *dado = (*pi)->dado;

  return 1;
}

int mover(Pilha *p1, Pilha *p2) {
  if (p2 == NULL || p1 == NULL)
    return 0;

  if ((*p2) == NULL || (*p1)->dado < (*p2)->dado) {
    empilhar(p2, (*p1)->dado);
    desempilhar(p1);
    return 1;
  }
  printf("Pode nao\n");
  return 0;
}
