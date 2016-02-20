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
    for(int i=0;i<index;i++){
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
    for(int i=0;i<index+1;i++){
        pCur = pCur->next;
    }
    return (*(pCur->card));
}

void CardList::add(Card& card){
    int index = 0;
    Card c1;
    for(index=0;index<size;index++){
        c1 = get(index);
        if(c1.number > card.number){
            break;
        }
    }
    int insertPosition = index;
    if(insertPosition < 0){
        insertPosition = 0;
    }
    insert(insertPosition, card);
    size++;
}

int CardList::find(Card& card){
    int index = -1;
    Card c1;
    for(index=0;index<size;index++){
        c1 = get(index);
        if(c1 == card){
            return index;
        }
    }
    return -1;
}

void CardList::del(Card& card){
    int index = -1;
    index = find(card);
    if(index != -1){
        del(index);
    }
}

void CardList::del(int index){
    if(index < 0 || index > size -1){
        return;
    }
    CardNode* pBeforeIndex = head;
    for(int i=0; i<index; i++){
        pBeforeIndex = pBeforeIndex->next;
    }
    CardNode* pIndex = pBeforeIndex->next;
    CardNode* pAfterIndex = pIndex->next;
    delete pIndex;
    pBeforeIndex->next = pAfterIndex;
    size--;
}

Card& CardList::operator[](int index){
    return get(index);
}

void CardList::printAll(){
    cout<<"CardList length="<<length()<<endl;
    for(int i=0;i<length();i++){
        cout<<"CardList["<<i<<"] color="<<(*this)[i].color<<" number="<<(*this)[i].number<<endl;
    }
}

















