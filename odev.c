#include <stdio.h>
int main () {
    int  sayi, siz, a, b, c, option;
    printf("katalogdan sec birini beaa: ");
    scanf("%d" , &option);
    printf("Uzunlugu seciniz lan: ");
    scanf("%d", &siz);
if (option == 1){
    for(sayi = 1; sayi <= siz; sayi++) {        // Right Half
            for(a = 1; a <= sayi; a++) {
        printf("*");}
        printf("\n");}}
else if(option == 2) {
    for (sayi = 1; sayi <= siz; sayi++){       // Left Half
        for(a = sayi; a <= siz; a++){
            printf(" ");}
        for(b = 1; b <= sayi; b++) {
            printf("*");}
    printf("\n");  }}
else if(option == 3) {
    for (sayi = 1; sayi <= siz; sayi++){       //Rhombus
        for(a = sayi; a <= siz; a++){
            printf(" ");}
        for(b = 1; b <= sayi; b++) {
            printf("*");}
        for (c = sayi; c <= siz; c++) {
            printf("*");
        }
    printf("\n");  }}
else if(option == 4) {
    for (sayi = 1; sayi <= siz; sayi++){       // Full pyramid
        for(a = sayi; a <= siz; a++){
            printf(" ");}
        for(b = 1; b <= sayi; b++) {
            printf("*");}
        for (c = 2; c <= sayi; c++) {
            printf("*");
        }
    printf("\n");  }}
else if (option == 5) {
    for (sayi = siz; sayi >= 1 ; sayi--) {   //Inverted Right
        for (a = 1; a <= sayi; a++){
            printf("*");}
    printf("\n"); }
}
else if (option == 6) {
    for (sayi = 1; sayi <= siz; sayi++){        // Rhombus 2
        for(c = 2; c <= sayi; c++) {
            printf(" ");}
        for(a = sayi; a <= siz; a++){
            printf("*");}
        for(b = 1; b <= sayi; b++) {
            printf("*");}
    printf("\n");} }
else if (option== 7)  {
    for (sayi = 1; sayi <= siz; sayi++){           //inverted left
        for(b = 2; b <= sayi; b++)
            printf(" ");
        for(a = sayi; a <= siz; a++)
            printf("*");
printf("\n");}
}
else if (option == 8) {
    for (sayi = 1; sayi <= siz; sayi++) {    //half pyramid of numbers
        for (a = 1; a <= sayi; a++) {
            printf("%d" ,a);}
      printf("\n");  }
    }
else if (option == 9) {
    for (sayi = 1; sayi <= siz; sayi++) {  //left full pyramid
        for(a = 1; a <= sayi; a++ ){
        printf("*");}
        printf("\n");}
    for(sayi = siz; sayi >= 1; sayi--){
        for(b = 2; b <= sayi; b++ ){
            printf("*");}
  printf("\n");  }
}
else if (option == 10){
        for (a = siz; a >= 1; a-- ){      // square
            printf("* ");}
        printf("\n");
        for (b = 3; b <= siz; b++){
            printf("* ");
            for (c = 3; c <= siz; c++) {
                printf("  ");}
            printf("*" "\n");
            }
        for (a = siz; a >= 1; a-- ){
            printf("* ");}
        }
else {
    printf("1 ile 10 arasinda sayi gir!");
}
return 0;
}
