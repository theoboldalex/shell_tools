#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#define RESET_COLOR "\033[0m"
#define GREEN       "\033[32m"

bool file_exists(const char *filename) {
  FILE *fp = fopen(filename, "r");

  if (fp != NULL) {
    fclose(fp);

    return true;
  }

  return false;
}

int main(int argc, char *argv[]) {
  char *filepath = argv[1];
  FILE *file_contents;
  char line[10];

  if (!file_exists(filepath)) {
    printf("The file cannot be read.");

    return EXIT_FAILURE;
  }

  printf("%s%s%s\n\n", GREEN, filepath, RESET_COLOR);
  file_contents = fopen(filepath, "r");
  while (fgets(line, 10, file_contents) != NULL) {
    printf("%s", line);
  }

  fclose(file_contents);
  
  return EXIT_SUCCESS;
}
