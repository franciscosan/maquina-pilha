#ifndef STACK_H
#define STACK_H

struct node {
    int value;
    struct node *next;
};

struct stack {
    struct node *top;
};

// Inicializa a pilha
void init_stack(struct stack *s);

// Empilha um valor
void push(struct stack *s, int value);

// Desempilha e retorna o valor
int pop(struct stack *s);

// Verifica se a pilha está vazia
int is_empty(struct stack *s);

// Libera toda a memória usada pela pilha
void free_stack(struct stack *s);

#endif
