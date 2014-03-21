#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char card_name[3];
    int count = 0;

    while(card_name[0] != 'X'){

        puts("Enter the card_name");
        scanf("%2s",card_name);
        int val = 0;

        switch(card_name[0]){
            case 'K':
            case 'J':
            case 'Q':
                val = 10;
                break;
            case 'A':
                val = 11;
                break;
            case 'X':
                continue;
            default:
                val = atoi(card_name);
                if(val <1 || val > 10){
                    puts("I Don't know what the value is.");
                    continue;
                }
        }


        //printf("The card value is :%i\n", val);
        if(val > 2 && val < 7){
            ++count;
        }else if(val == 10){
            --count;
        }
        printf("Current Count is %i\n",count);
    }
    return 0;
}
