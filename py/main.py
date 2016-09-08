# -*- coding: utf-8 -*-
"""
Created on Sat Sep  3 20:31:04 2016

@author: Administrator
"""
TYPE_HTS = 0
TYPE_TS = 1
TYPE_4T = 2
TYPE_HL = 3
TYPE_TH = 4
TYPE_SZ = 5
TYPE_3T = 6
TYPE_2D = 7
TYPE_1D = 8
TYPE_GP = 9

class Math:
    def C(self,n,k):
        ans = 1;
        for i in range(k):
            ans *= int(n-i)
        for i in range(k):
            ans /= int(k-i)
        return int(ans)
        
MATH = Math()


        
class Card:
    def __init__(self,color,number):
        self.color = color
        self.number = number
        
    def __eq__(self,other):
        return (self.color == other.color) and (self.number == other.number) 
    
    def print(self):
        print("color="+str(self.color)+" number="+str(self.number))
        
class CardTreeNode:
    def __init__(self,data,parent=None):
        self.parent = parent
        self.data = data
        self.children = []
        
    def isLast():
        return len(self.children) == 0
        
class CardTree:
    def makeTree(self,startList):
        self.root = startList[0]
        for i in range(1,len(startList)):
            self.root
        

class CardGroup5:
    def __init__(self,CardList):
        self.CardListSortedByNumber = sorted(CardList,key=lambda card:card.number,reverse=False)     
        self.CardListSortedByColor = sorted(CardList,key=lambda card:card.color,reverse=False)
        
    def print(self,byNumber=True):
        if byNumber:
            for card in self.CardListSortedByNumber:
                card.print()
        else:
            for card in self.CardListSortedByColor:
                card.print()
            print("type="+str(self.type()))
                
    def type(self):
        if self._isTH() and self.CardListSortedByNumber[0] == 1 \
        and self.CardListSortedByNumber[1] == 10 \
        and self.CardListSortedByNumber[2] == 11 \
        and self.CardListSortedByNumber[3] == 12 \
        and self.CardListSortedByNumber[4] == 13:
            return TYPE_HTS
            
    
    def _isTH(self):
        if self.CardListSortedByColor[0] == self.CardListSortedByColor[4]:
            return True
        return False
        
    def _is4T(self):
        if self.CardListSortedByNumber[0] == self.CardListSortedByNumber[3] \
        or self.CardListSortedByNumber[1] == self.CardListSortedByNumber[4]:
            return True
        return False
        
        
if __name__ == '__main__':
    print("======start=========")
    tree = CardTree([])
    print(MATH.C(52,7))
    print("======end===========")