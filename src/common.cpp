#include "common.h"
#include "Card.h"
#include "CardNode.h"
#include "CardList.h"

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
    LOGD("start test CardList");
    Card card4(2,4);
    Card card5(2,5);
    card3.number = 3;
    card3.color = 2;
 
    CardList clist1;
    clist1.add(card4);
    clist1.add(card5);
    clist1.add(card2);
    clist1.add(card3);
    clist1.printAll();
    int index = -1;
    index = clist1.find(card3);
    cout<<"CardList find card3 at index="<<index<<endl;
    clist1.del(card4);
    cout<<"CardList del card4"<<endl;
    clist1.printAll();
    CardList clist2;
    clist2.concat(clist1);
    cout<<"CardList clist2 concat clist1 clist2 == clist1? "<<(clist2 == clist1)<<endl;
    
    
}
