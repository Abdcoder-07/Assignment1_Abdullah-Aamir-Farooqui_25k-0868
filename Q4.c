#include <stdio.h>

int main() {
    int card1, card2, card3, card4, card5;
    int counter1 = 0, counter2 = 0, counter3 = 0, counter4 = 0, counter5 = 0;
    int counter6 = 0, counter7 = 0, counter8 = 0, counter9 = 0, counter10 = 0;
    int counter11 = 0, counter12 = 0, counter13 = 0;
    int Trigroup = 0, Pair = 0;

    printf("Enter five card values (1-13) separated by space: ");
    scanf("%d %d %d %d %d", &card1, &card2, &card3, &card4, &card5);

    if (card1 == 1) counter1++; else if (card1 == 2) counter2++; else if (card1 == 3) counter3++;
    else if (card1 == 4) counter4++; else if (card1 == 5) counter5++; else if (card1 == 6) counter6++;
    else if (card1 == 7) counter7++; else if (card1 == 8) counter8++; else if (card1 == 9) counter9++;
    else if (card1 == 10) counter10++; else if (card1 == 11) counter11++; else if (card1 == 12) counter12++;
    else if (card1 == 13) counter13++;

    if (card2 == 1) counter1++; else if (card2 == 2) counter2++; else if (card2 == 3) counter3++;
    else if (card2 == 4) counter4++; else if (card2 == 5) counter5++; else if (card2 == 6) counter6++;
    else if (card2 == 7) counter7++; else if (card2 == 8) counter8++; else if (card2 == 9) counter9++;
    else if (card2 == 10) counter10++; else if (card2 == 11) counter11++; else if (card2 == 12) counter12++;
    else if (card2 == 13) counter13++;

    if (card3 == 1) counter1++; else if (card3 == 2) counter2++; else if (card3 == 3) counter3++;
    else if (card3 == 4) counter4++; else if (card3 == 5) counter5++; else if (card3 == 6) counter6++;
    else if (card3 == 7) counter7++; else if (card3 == 8) counter8++; else if (card3 == 9) counter9++;
    else if (card3 == 10) counter10++; else if (card3 == 11) counter11++; else if (card3 == 12) counter12++;
    else if (card3 == 13) counter13++;

    if (card4 == 1) counter1++; else if (card4 == 2) counter2++; else if (card4 == 3) counter3++;
    else if (card4 == 4) counter4++; else if (card4 == 5) counter5++; else if (card4 == 6) counter6++;
    else if (card4 == 7) counter7++; else if (card4 == 8) counter8++; else if (card4 == 9) counter9++;
    else if (card4 == 10) counter10++; else if (card4 == 11) counter11++; else if (card4 == 12) counter12++;
    else if (card4 == 13) counter13++;

    if (card5 == 1) counter1++; else if (card5 == 2) counter2++; else if (card5 == 3) counter3++;
    else if (card5 == 4) counter4++; else if (card5 == 5) counter5++; else if (card5 == 6) counter6++;
    else if (card5 == 7) counter7++; else if (card5 == 8) counter8++; else if (card5 == 9) counter9++;
    else if (card5 == 10) counter10++; else if (card5 == 11) counter11++; else if (card5 == 12) counter12++;
    else if (card5 == 13) counter13++;

    if (counter1 == 3) Trigroup = 1; if (counter1 == 2) Pair = 1;
    if (counter2 == 3) Trigroup = 1; if (counter2 == 2) Pair = 1;
    if (counter3 == 3) Trigroup = 1; if (counter3 == 2) Pair = 1;
    if (counter4 == 3) Trigroup = 1; if (counter4 == 2) Pair = 1;
    if (counter5 == 3) Trigroup = 1; if (counter5 == 2) Pair = 1;
    if (counter6 == 3) Trigroup = 1; if (counter6 == 2) Pair = 1;
    if (counter7 == 3) Trigroup = 1; if (counter7 == 2) Pair = 1;
    if (counter8 == 3) Trigroup = 1; if (counter8 == 2) Pair = 1;
    if (counter9 == 3) Trigroup = 1; if (counter9 == 2) Pair = 1;
    if (counter10 == 3) Trigroup = 1; if (counter10 == 2) Pair = 1;
    if (counter11 == 3) Trigroup = 1; if (counter11 == 2) Pair = 1;
    if (counter12 == 3) Trigroup = 1; if (counter12 == 2) Pair = 1;
    if (counter13 == 3) Trigroup = 1; if (counter13 == 2) Pair = 1;

    if (Trigroup == 1 && Pair == 1) {
        printf("Yes! That's a full house.\n");
    } else {
        printf("Nope. That's not a full house.\n");
    }

    return 0;
}
