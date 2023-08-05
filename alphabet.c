#include <stdio.h>
#define alpha 25
#define letter_a 97
#define letter_z 123
void alphabet(){
    while(1){
        int i, c, mod, div;
        printf("Enter a number(For exit 0): ");
        scanf("%d", &mod);
        if (mod == 0){
            break;
        }
        div = mod / alpha;
        mod = mod % alpha + letter_a;
        for (i = 0; i < div; i++){
            for (c = letter_a; c < letter_z; c++){
                printf("%c ", c);
            }
        }
        for (c = letter_a; c < mod; c++){
            printf("%c ", c);
        }
        printf("\n");
    }

}
int main (){
    alphabet();
    return 0;
}
