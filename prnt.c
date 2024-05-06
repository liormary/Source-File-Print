#include <stdio.h>
#include<stdlib.h>

int main()
{
  
    FILE *f = NULL;  /* pointer to the file */
    int ch = 0;
    
    f = fopen(__FILE__, "r"); /* open the file only for reading */
    if(f == NULL) /* there is no file */
    {
        printf("Error in opening the file\n");
        exit(1);
    }
   
    do /*read and print the file till EOF */
    {
        ch = fgetc(f);
        printf("%c",ch);
    }
    while (ch != EOF); 
   
    fclose (f); /*close the file */
    return 0;
}
