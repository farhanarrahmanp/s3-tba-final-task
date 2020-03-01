#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#define next(P) P->next
#define head(Q) Q.head
#define tail(Q) Q.tail
#define info(P) P->info

#include <iostream>
#include <stdlib.h>

using namespace std;

typedef string infotype;
typedef struct ElmQueue *address;

struct ElmQueue{
    infotype info;
    address next;
};

struct Queue{
    address head;
    address tail;
};

address allocation(infotype X);
void createQueue(Queue &Q);
void enQueue(Queue Q, address P);

#endif // HEADER_H_INCLUDED
