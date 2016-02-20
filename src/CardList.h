#ifndef CARDLIST_H
#define CARDLIST_H

#include "Card.h"
#include "CardNode.h"

class CardList{
public:
    CardList();
    ~CardList();
    void add(Card& card);
    void del(Card& card);
    void del(int index);
    int find(Card& card);
    int length();
    Card& get(int index);
    Card& operator[](int index);
    void printAll();
private:
    int size;
    CardNode* head;
    void insert(int index,Card& card);
};
#endif//CARDLIST_H
