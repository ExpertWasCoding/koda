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
void stringToBinary(char *input) {
  int len = strlen(input);
  for (int i = 0; i < len; i++) {
    char c = input[i];
    for (int j = 7; j >= 0; j--) {
      printf("%d", (c >> j) & 1);
    }
    printf(" ");
  }
  printf("\n");
}

int main() {
  char buffer[1000];
  char ubuffer[1000];

  printf("Enter buffer: ");
  fgets(buffer, sizeof(buffer), stdin);

  remove_space(buffer, ubuffer);
  stringToBinary(ubuffer);

  printf("String after removing spaces: %s\n", ubuffer);

  return 0;
}
