// Fila encadeada simples...
// Victor Martins de Oliveira 12.119.119-1

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int valor;
    struct Noh *next; // Ponteiro para o proximo elemento
} Node;

typedef struct
{
    node *head, *tail;
    int size;
} List;

// Cria a lista
void initlist(Lista *lista)
{
    lista->head = NULL;
    lista->tail = NULL;
    lista->size = 0;
}

// Inserir dado no inicio da lista:
int insertinicio(Lista *lista, int valor)
{
    Node *newNode = malloc(sizeof(Node));
    lista->head = newNode;
    lista->size++;
    newNode->valor = valor;

    if (lista->size == 1)
    {
        lista->tail = newNode;
        newNode->next = NULL;
    }
}

// Inserir dado no fim da lista
int insertfim(Lista *lista, int valor)
{
    node *newNode = malloc(sizeof(Noh));
    node *p_anterior, *p_atual;
    p_atual = lista->head;
    newNode->next = NULL;
    newNode->valor = valor;

    while (p_atual != NULL)
    {
        p_anterior = p_atual;
        p_atual = p_atual->next;
    }

    p_anterior->next = newNode;
    lista->tail = p_anterior;
}

// Exibindo a lista
void showlist(Lista *lista)
{
    Node *inicio = lista->head;
    printf("Tamanho da lista: %d", lista->size);
    while (inicio != NULL)
    {
        printf("%d ", inicio->valor);
        inicio = inicio->next;
    }
    printf("\n");
}

int main(void)
{
    Lista lista1;
    initlist(&lista1);
    insertinicio(&lista1, 10);
    return 0;
}