
#include "myheaderA3.h"
#include "headerA3.h"
int main()
{
    int menu1=0;
    tweet * tweetList = 0;
    tweet *create=0;

    while(menu1!=8)
    {
    menu1 = menu();

    if(menu1==1)
    {
        create = createTweet(tweetList);
        addNodeToList(&tweetList, create);
    }
    if(menu1==2)
    {
        displayTweets(tweetList);
    }
    if(menu1==3)
    {
        searchTweetsByKeyword(tweetList);
    }
    if(menu1==4)
    {
        countStopWords(tweetList);
    }
    if(menu1==5)
    {
        deleteTweet(&tweetList);
    }
    if(menu1==6)
    {
        saveTweetsToFile(tweetList);
    }
    if(menu1==7)
    {
        loadTweetsFromFile(&tweetList);
    }
    if(menu1==8)
    {
        exit(0);
    }
    }
    return 0;
}

