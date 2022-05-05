#ifndef LIST_HPP
#define LIST_HPP
#include <iostream>
#include <string>
#include <fstream>
#define MAXTAM 100

using namespace std;

typedef struct Item{
    string nome;
    int contador = 0;
}Item;

typedef struct Lista{
    Item vet[MAXTAM];
    int first;
    int last;
}Lista;

void FLVazia(Lista *l);
void LInsert(Lista *l, Item d);
void LRemove(Lista *l, Item d);
void Swap(Item *a, Item *b);
void LImprime(Lista *l);

void menu();
void readText(Lista *l, Item d);
void Compare(Lista *l);

#endif