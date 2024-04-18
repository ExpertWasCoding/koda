#include <stdio.h>
#include <string.h>

void chartobinary(char c, char binaried[]){
    for(int i=0)
}
void stringtobinary(char buffer[], char binaried[]){
    for(int i=0; i>=strlen(buffer); i++ ){
        chartobinary(buffer[i], binaried);
    }
}
int main(void){
    char buffer[100];
    char binaried[10000];
    printf("enter the string please: ");
    fgets(buffer, sizeof(buffer), stdin);
    stringtobinary(buffer, binaried);
}
