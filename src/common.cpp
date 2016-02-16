#include "common.h"
#include "Card.h"

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
}
