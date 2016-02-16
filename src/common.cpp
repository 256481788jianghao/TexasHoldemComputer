#include "common.h"
#include "Card.h"
#include "CardNode.h"

void LOGD(string str){
    cout<<"*** "<<str<<" ***"<<endl;
}

void ModuleTest(){
    LOGD("start test Card");
    Card card1(1,2);
    Card card2 = card1;
    Card card3;
    if(card1 == card2 && card1 != card3){
        LOGD("Card Module pass");
    }else{
        LOGD("Card Module not pass");
    }
    
    LOGD("start test CardNode");
    CardNode cnode1;
    CardNode cnode2(card1);
    if(cnode1.card->color == -1 && cnode1.card->number == -1
       && cnode2.card->color == 1,cnode2.card->number == 2){
        LOGD("CardNode Module pass");
    }else{
        LOGD("CardNode Module not pass");
    }
}
