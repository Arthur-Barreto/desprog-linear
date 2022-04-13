#include <stdlib.h>

#include "stack_int.h"

struct _stack_int {
    int capacity;
    int *data;
    int size;
};

stack_int *stack_int_new(int capacity) {
    stack_int *s = malloc(sizeof(stack_int));
    s->capacity = capacity;
    s->data = malloc(capacity * sizeof(int));
    s->size = 0;
    return s;
}

void stack_int_delete(stack_int **_s) {
    stack_int *s = *_s;
    free(s->data);
    free(s);
    *_s = NULL;
}

int stack_int_empty(stack_int *s) {
    return 0;
}

int stack_int_full(stack_int *s) {
    return 0;
}

void stack_int_push(stack_int *s, int value) {
}

int stack_int_pop(stack_int *s) {
    return 0;
}
