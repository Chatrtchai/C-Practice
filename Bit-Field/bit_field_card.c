#include <stdio.h>

// enum : เป็นเซ็ตของ integer จึงมีขนาดเท่ากับ int คือ 4 byte
typedef enum {
    ACE = 1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING
} Face;

// enum : เป็นเซ็ตของ integer จึงมีขนาดเท่ากับ int คือ 4 byte
typedef enum {
    CLUBS, DIAMONDS, HEARTS, SPADES 
} Suit;

typedef struct {
    Face face : 4; 
    Suit suit : 2; 
} Card;

int main() {

    Card queen_heart;

    queen_heart.face = QUEEN;
    queen_heart.suit = HEARTS;

    printf("%lu\n", sizeof(Card)); // Output byte

}