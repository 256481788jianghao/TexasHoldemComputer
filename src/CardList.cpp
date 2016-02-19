#include "common.h"
#include "CardList.h"

CardList::CardList(){
    size = 0;
    head = new CardNode();
    if(head == NULL){
        LOGD("CardList new head failed");
    }
}
CardList::~CardList(){
   if(head){
        CardNode* pNext = head;
        while(pNext != NULL){
            CardNode* cur = pNext;
            pNext = cur->next;
            delete cur;
        }
   } 
}

int CardList::length(){
    return size;
}

void CardList::insert(int index,Card& card){
    if(index < 0){
        LOGD("CardList insert index < 0");
        return;
    }

    CardNode* pNode = new CardNode(card);
    if(pNode == NULL){
        LOGD("CardList add new CardNode failed");
        return;
    }

    CardNode* pCur = head;
    for(int i=0;i<index+1;i++){
        if(pCur->next == NULL){
            break;
        }
        pCur = pCur->next;
    }
    CardNode* pTmp = pCur->next;
    pCur->next = pNode;
    pNode->next = pTmp;
}

Card& CardList::get(int index){
    CardNode* pCur = head;
    if(index < 0 || index > size-1){
        LOGD("CardList get index < 0 || index > size-1");
        return (*(head->card));
    }
    for(int i=0;i<size;i++){
        pCur = pCur->next;
    }
    return (*(pCur->card));
}

void CardList::add(Card& card){
    int index = 0;
    Card c1;
    for(int index=0;index<size;index++){
        c1 = get(index);
        if(c1.number > card.number){
            break;
        }
    }
}
