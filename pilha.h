
typedef struct elemento *Pilha;

// funções para alocar e desalocar memória
Pilha *criar_pilha();
int liberar_pilha(Pilha *pi);

// função para obter informação da pilha
int tamanho_pilha(Pilha *pi);

// funções para empilhar e desempilhar elementos da pilha
int empilhar(Pilha *pi, char dado);
int desempilhar(Pilha *pi);

// função para consultar elemento no topo da pilha
int consultar_topo_pilha(Pilha *pi, char *dado);

// função para mover entre as pilhas
int mover(Pilha *p1, Pilha *p2);
