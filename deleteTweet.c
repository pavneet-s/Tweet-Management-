#include "headerA3.h"
void deleteTweet(tweet ** tweetList)
{
    int value = 0;
    int count=0;
    tweet *temp1 = *tweetList;
    while(temp1!=NULL)  //counting number of tweets
    {
        temp1 = temp1->next;
        count++;
    }
    printf("Currently there are %d tweets\n", count);
    printf("Which tweet do you wish to delete: enter a value between 1 and %d: ", count);
    scanf("%d", &value);

    if(*tweetList == NULL) // if list is NULL
    {
        return;
    }

    tweet * temp = *tweetList;




    if (value == 1) //if first element gets deleted
    {
        *tweetList = temp->next;
        free(temp);
        return;
    }

    for(int i=0; temp!=NULL && i<value-1; i++)
    {
        temp = temp->next;

    }
    if(temp == NULL || temp->next == NULL)
    {

        return;
    }

    tweet *next = temp->next->next;
    printf("Tweet %s deleted. There are now %d tweets left.", temp->text, count-1);
    free(temp->next);
    temp->next = next;
}

