#include "headerA3.h"

tweet * createTweet( tweet * tweetList)
{
    char usernm[51];
    char tweet1[141];
    tweet *head, *ptr;
    head = ptr = NULL;

    printf("Enter username: ");
    scanf("%s", usernm);
    printf("Enter the user\'s tweet: ");
    scanf("\n%[^\n]s", tweet1); //take input until newline
    ptr = malloc(sizeof(tweet));
    strcpy(ptr->user, usernm);
    strcpy(ptr->text, tweet1);
    int length = strlen(usernm); 
    int sum=0;
    for(int i=0;i<length;i++)
    {
        sum = (int)usernm[i]+sum;
    }
    sum = sum+(strlen(tweet1)-1);
    printf("\nYour computer-generated userid is %d\n.", sum);
    ptr->id = sum;
    ptr->next = head;
    head = ptr;
    return ptr;
}

