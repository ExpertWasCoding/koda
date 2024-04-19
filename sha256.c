#include <stdio.h>
#include <string.h>
void chartobinary(char c, char binaried[]) {
    for (int i = 7; i >= 0; i--) {
        binaried[7 - i] = ((c >> i) & 1) + '0';
    }
}

void stringtobinary(char buffer[], char binaried[]) {
    int len = strlen(buffer);
    int index = 0;
    for (int i = 0; i < len; i++) {
        chartobinary(buffer[i], &binaried[index]);
        index += 8;
    }
    binaried[index] = '\0';
}
void mult512(char binary[]){
    strcat(binary, "1");
    int initial_increment = strlen(binary);
    for(int i=0; strlen(binary) <= 512-64; i++ ){
        strcat(binary, "0");
    }
}
void last64(char binary[]){

}
int main(void) {
    char buffer[100];
    char binaried[10000];
    char lenofbuffer[64];
    char lenofbufferinbin[64];
    printf("Enter the string: ");
    fgets(buffer, sizeof(buffer), stdin);
    stringtobinary(buffer, binaried);

    printf("Binary representation: %s\n", binaried);

    mult512(binaried);
    printf("\n your binary is \n %s", binaried);
    sprintf(lenofbuffer, "%d", (int)strlen(buffer));
    stringtobinary(lenofbuffer, lenofbufferinbin);
    strcat(binaried, lenofbufferinbin);
    printf("\n final binary %s \n", binaried);

    return 0;
}
