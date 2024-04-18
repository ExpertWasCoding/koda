#include <stdio.h>
#include <string.h>

void chartobinary(char c, char binaried[]){
    for(int i=7; i >= 0; i--){
        binaried[7-i] = ((c>>i)&1) + '0';
    }
}
void stringtobinary(char buffer[], char binaried[]){
    int index = 0;
    for(int i=0; i>=strlen(buffer); i++ ){
        chartobinary(buffer[i], &binaried[index]);
        index += 8;
    }
    binaried[index] = '\0';
}
int main(void){
    char buffer[100];
    char binaried[10000];
    printf("enter the string please: \n");
    fgets(buffer, sizeof(buffer), stdin);
    stringtobinary(buffer, binaried);
    printf("binaried string is %s", binaried);
}
