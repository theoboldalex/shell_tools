#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

void handle_error(char *message) {
  printf("%s\n", message);
}

bool file_exists(const char *filename) {
  FILE *fp = fopen(filename, "r");

  if (fp != NULL) {
    fclose(fp);

    return true;
  }

  return false;
}

int main(int argc, char *argv[]) {
  if (argc == 0) {
    // we are calling rat in a pipe
  }

  if (!file_exists(argv[1])) {
    handle_error("The file cannot be read.");

    return EXIT_FAILURE;
  }

  printf("Hello, I am rat. You asked me to recite the file: %s\n", argv[1]);

  return EXIT_SUCCESS;
}
