#ifndef CARDNODE_H
#define CARDNODE_H

#include "Card.h"

class CardNode{
public:
    Card* card;
    CardNode* next;
    CardNode();
    CardNode(Card& c);
    ~CardNode();   
private:
    void init(Card& c); 
};
#endif//CARDNODE_H
