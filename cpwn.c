#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char * 
create_buffer(double buffer_size) 
{
  char *buffer = (char*) malloc(buffer_size * sizeof(char));

  for(int i = 0; i < buffer_size; i++) {
    strcat(buffer, "A");
  }

  return buffer;
}


/*
int 
main(int argc, char **argv) 
{
  char *buffer = create_buffer(40);
  printf("%s", buffer);
  free(buffer);

  return 0;
}
*/
