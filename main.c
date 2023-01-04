#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "mylib/mylib.h"

void reset(){
    printf("\033[0m");
}

void red(){
    printf("\033[0;31m");
}

void blue(){
    printf("\033[0;34m");
}

void OFF() {
    printf("                 ________________________\n");
    printf("                |xxxxxxxxxxxxxxxxxxxxxxx|               \n");
    printf("                |xxxxxxxxxxxxxxxxxxxxxxx|               \n");
    printf("                |xxxxxxxxxxxxxxxxxxxxxxx|               \n");          
    printf("                |xxxxxxxxxxxxxxxxxxxxxxx|               \n");
    printf("                |xxxxxxxxxxxxxxxxxxxxxxx|               \n");
    printf("                |xxxxxxxxxxxxxxxxxxxxxxx|               \n");
    printf("                |xxxxxxxxxxxxxxxxxxxxxxx|               \n");
    printf("                |xxxxxxxxxxxxxxxxxxxxxxx|               \n");
    printf("                |xxxxxxxxxxxxxxxxxxxxxxx|               \n");
    printf("                `-----------------------'\n");
}

void ON() {
    printf("                 ________________________\n");
    printf("                |xxxxxxxxxxxxxxxxxxxxxxxxxx              \n");
    printf("                |xxxxxxxxxxxxxxxxxxxxxxxxxxxx              \n");
    printf("                |xxxxxxxxxxxxxxxxxxxxxxxxxxxxx               \n");          
    printf("                |xxxxxxxxxxxxxxxxxxxxxxxxxxxxxx               \n");
    printf("                |xxxxxxxxxxxxxxxxxxxxxxx|xxxxxxxx               \n");
    printf("                |xxxxxxxxxxxxxxxxxxxxxxx|xxxxxxxx               \n");
    printf("                |xxxxxxxxxxxxxxxxxxxxxxx|xxxxxxxxxx               \n");
    printf("                |xxxxxxxxxxxxxxxxxxxxxxx|               \n");
    printf("                |xxxxxxxxxxxxxxxxxxxxxxx|               \n");
    printf("                `-----------------------'\n");
}


int main(void){
    int c0 = 0, c1 = 0, b, o0 = 0;
    while (true){
        printf("Water outside is  ");
        if (o0 == 0){
            red();
            printf("Not Present\n");
            OFF();
        } else{
            blue();
            printf("Present\n");
            ON();
        }
        reset();

        printf("Type in 0 or 1 (0 for not switching the lever, 1 for switching the lever): ");
        scanf("%d", &b);

        if (b == 0 || b == 1){
            states(c0, c1, o0, b, &c0, &c1, &o0);
        } else{
            printf("enter only 0 or 1\n");
        }
    }

    return 0;
}