#include <stdio.h>

int main() {
  char input[100], output[100];
  int i, j = 0;

  // Take user input for the string
  printf("Enter a string: ");
  fgets(input, sizeof(input), stdin);

  // Iterate through the string and remove spaces
  for (i = 0; input[i] != '\0'; ++i) {
    if (input[i] != ' ') {
      output[j++] = input[i];
    }
  }
  output[j] = '\0'; // Null-terminate the output string

  // Display the result
  printf("String after removing spaces: %s\n", output);

  return 0;
}
