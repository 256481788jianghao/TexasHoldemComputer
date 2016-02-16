#include "common.h"
#include "Card.h"

Card::Card(int c, int n){
    color = c;
    number = n;
}

Card::Card(){
    Card(-1,-1);
}

int Card::operator==(Card& card){
    if(this->color == card.color && this->number == card.number){
        return 1;
    }
    return 0;
}

void  Card::operator=(Card& card){
    this->color = card.color;
    this->number = card.number;
}

