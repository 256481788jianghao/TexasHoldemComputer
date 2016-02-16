#include "common.h"
#include "Card.h"

Card::Card(int c, int n){
    init(c,n);
}

Card::Card(){
    init(-1,-1);
}

int Card::operator==(Card& card){
    if(this->color == card.color && this->number == card.number){
        return 1;
    }
    return 0;
}

int Card::operator!=(Card& card){
    if((*this) == card){
        return 0;
    }
    return 1;
}

void  Card::operator=(Card& card){
    this->color = card.color;
    this->number = card.number;
}

void Card::init(int c, int n){
    color = c;
    number = n;
}
