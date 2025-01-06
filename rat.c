#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

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

  printf("Hello, I am rat. You asked me to recite the file: %s\n\n", filepath);
  
  if (!file_exists(filepath)) {
    printf("The file cannot be read.");

    return EXIT_FAILURE;
  }



  return EXIT_SUCCESS;
}
