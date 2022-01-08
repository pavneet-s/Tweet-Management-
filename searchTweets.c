#include "strings.h"
#include "headerA3.h"
int searchTweetsByKeyword(tweet * tweetList)
{

    char keyword[50];
    int count=0;
    printf("Enter a keyword to search: ");
    scanf("%s", keyword);
    tweet *current = tweetList;

    while(current != NULL)  //splitting the characters in tweets to words
    {
        int i=0,j=0,k=0;
        char split_char[50][50];
        for(i=0;i<=strlen(current->text);i++)
    {
        if(current->text[i]==' '||current->text[i]=='\0')
            {
                split_char[k][j]='\0';
                k++;
                j=0;
            }
        else
        {
            split_char[k][j]=current->text[i];
            j++;
        }
    }
    int p=0;
    for(int i=0;i<50;i++)
    {
        if(strcasecmp(split_char[p], keyword)==0) //comparing using case insenstivity
        {
            printf("Match found for \'%s\':%s wrote:\"%s\"\n", keyword, current->user, current->text);
            count++;
        }
    p++;
    }
    current = current->next;

    }
if(count==0)
{
    return 0;
}
else
{
    return 1;
}

}

