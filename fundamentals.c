#include "fundamentals.h"

void fundamentals() {
  printf("*** Start of Indexing Strings Demo ***\n");
  char buffer1[80]; //stores input from user
  char num_input[10];
  int position;
  while (TRUE) {
      printf("Type a string (q - to quit):\n");
      gets(buffer1);
      if (strcmp(buffer1, "q") == 0) break; //if q is entered, go to line 25
      while (TRUE) {
         printf("Type the character position within the string:\n");
         gets(num_input);
         position = atoi(num_input);
         if (position >= strlen(buffer1)) { //position of text cannot be greater or equal to the length of the string inputted
            printf("Wrong position... type again, please\n");
            continue; 
         }
         printf("The character found at %d position is \'%c\'\n",
             position, buffer1[position]);
         break;
      }
  }
  printf("*** End of Indexing Strings Demo ***\n\n");
  
  printf("*** Start of Meauring Strings Demo ***\n");
  char buffer2[80];
  while (TRUE) {
    printf("Type a string (q - to quit):\n");
    gets(buffer2); //user input is read and stored as a string in buffer 2
    if (strcmp(buffer2, "q") == 0) break; //if user inputs q, go to line 35
    printf("The length is %lu\n", strlen(buffer2)); //length of buffer2 input ouputted
}
  printf("***End of Measuring Strings Demo ***\n\n");
  
  printf("*** Start of Copying Strings Demo ***\n");
  char destination[80];
  char source[80];
  while (TRUE) {
    destination[0] = '\0'; //initializes the string 
    printf("Destination string is reset to empty\n");
    printf("Type a source string (q - to quit):\n");
    gets(source); //stores input into source as a string
    if (strcmp(source, "q") == 0) break; //input of q, go to line 49
    strcpy(destination, source);
    printf("New destination string is \'%s\':\n", destination);
  }
  printf("*** End of Copying Strings Demo ***\n\n");
}
