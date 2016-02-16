#include "common.h"
#include "CardNode.h"

void CardNode::init(Card& c){
    card = new Card();
    if(card == NULL){
        LOGD("CardNode new Card faild");
    }else{
        (*card) = c;
        next = NULL;
    }
}

CardNode::CardNode(){
    Card tmp;
    init(tmp);
}

CardNode::CardNode(Card& c){
    init(c);
}

CardNode::~CardNode(){
    if(card){
        delete card;
    }
}
