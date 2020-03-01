#include "header.h"

address allocation(infotype X){
    address P = new ElmQueue;
    info(P) = X;
    next(P) = NULL;

    return P;
}

void createQueue(Queue &Q){
    head(Q) = NULL;
    tail(Q) = NULL;

}

void enQueue(Queue Q, address P){
    if (head(Q)==NULL && tail(Q)==NULL){
        tail(Q) = P;
        head(Q) = P;
    }else{
        next(tail(Q)) = P;
        tail(Q) = P;
    }
}
