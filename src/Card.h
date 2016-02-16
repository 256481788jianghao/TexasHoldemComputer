#ifndef CARD_H
#define CARD_H
class Card{
public:
    int color;
    int number;
    Card();
    Card(int c,int n);
    int operator==(Card& card);
    int operator=(Card& card);
};
#endif//CARD_H
