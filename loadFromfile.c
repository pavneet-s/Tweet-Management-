#include "headerA3.h"
void loadTweetsFromFile(tweet ** tweetList)
{
    FILE *fileptr = fopen("tweetsStore.csv", "r+");
    if(fileptr==NULL)
    {
        printf("File did not open\n");
    }
    if (fileptr != NULL)
    {
        printf("Opened\n");
        if(*tweetList == NULL)
            {
                return;
            }
    }

}

