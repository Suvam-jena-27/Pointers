#include <stdio.h>
#include <string.h>

struct player{
    char name[20];
    int score;
};

int main(){
    struct player p1;
    struct player p2;
    strcpy(p1.name, "Raj");
    p1.score = 20;
    printf("Player 1\n");
    printf("Name: %s\n", p1.name);
    printf("Score: %d", p1.score);

    return 0;
}