#include "headerA3.h"
void saveTweetsToFile(tweet * tweetList)
{
    char filename[50];
    printf("Enter the filename where you would like to store your tweets: ");
    scanf("%s", filename);
    FILE *fileptr = fopen(filename, "w+");
    if(fileptr==NULL)
    {
        printf("File did not open\n");
    }
    if (fileptr != NULL)
    {
      //  printf("File opened\n");
        tweet *current = tweetList;
        tweet *next = NULL;

        while(current!=NULL)
        {
            next = current->next;
            current->next = NULL;

            fseek(fileptr, 0 ,SEEK_END);
            fprintf(fileptr, "%d, %s, %s\n", current->id, current->user, current->text);
            current->next = next;
            next = NULL;

            current = current->next;
        }
        current = tweetList;
        next = NULL;


    fclose(fileptr);
    fileptr = NULL;
    printf("Output successful!\n");
    }

}

