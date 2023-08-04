#include <stdio.h>
void alphabet(){
    while(1){
        int i, c, mod, div;
        printf("Enter a number(For exit 0): ");
        scanf("%d", &mod);
        if (mod == 0){
            break;
        }
        div = mod / 25;
        mod = mod % 25 + 97;
        for (i = 0; i < div; i++){
            for (c = 97; c < 123; c++){
                printf("%c", c);
                printf(" ");
            }
        }
        for (c = 97; c < mod; c++){
            printf("%c", c);
            printf(" ");
        }
        printf("\n");
    }

}
int main (){
    alphabet();
    return 0;
}
