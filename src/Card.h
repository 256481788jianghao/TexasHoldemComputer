#ifndef CARD_H
#define CARD_H
class Card{
public:
    int color;
    int number;
    Card();
    Card(int c,int n);
    int operator==(Card& card);
    int operator!=(Card& card);
    void operator=(Card& card);
private:
    void init(int c, int n);
};
#endif//CARD_H
