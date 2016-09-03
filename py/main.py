# -*- coding: utf-8 -*-
"""
Created on Sat Sep  3 20:31:04 2016

@author: Administrator
"""

class Card:
    def __init__(self,color,number):
        self.color = color
        self.number = number
    
    def print(self):
        print("color="+str(self.color)+" number="+str(self.number))
        
if __name__ == '__main__':
    print("======start=========")
    card = Card(1,13)
    card.print()
    print("======end===========")