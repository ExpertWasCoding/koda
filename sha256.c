#include <stdio.h>
#include <string.h>

void remove_space(const char *buffer, char *ubuffer) {
  int w = 0;
  int i = 0;
  for (int i = 0; buffer[i] != '\0'; ++i) {
    if (buffer[i] != ' ') {
      ubuffer[w++] = buffer[i];
    }
  }
  ubuffer[w] = '\0';
}
void stringToBinary(char *input, char *output) {
  int len = strlen(input);
  for (int i = 0; i < len; i++) {
    char c = input[i];
    for (int j = 7; j >= 0; j--) {
      *output++ = ((c >> j) & 1) + 0;
    }
  }
  *output = '\0';
}

int main() {
  char buffer[1000];
  char ubuffer[1000];

  printf("Enter buffer: ");
  fgets(buffer, sizeof(buffer), stdin);

  buffer[0] = '\0';
  stringToBinary(buffer, ubuffer);

  printf("String after removing spaces: %s\n", ubuffer);
  printf("String in binary = %s \n", buffer);

  return 0;
}
