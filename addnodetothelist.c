#include "headerA3.h"
void addNodeToList(tweet**tweetList,tweet * node)
{
    tweet* new_node = (tweet*)malloc(sizeof(tweet));
    tweet *last = *tweetList;
     // storing the data
    new_node->id = node->id;
    strcpy(new_node->text, node->text);
    strcpy(new_node->user, node->user);

    new_node->next = NULL;

    if(*tweetList==NULL) //if NULL
    {
        *tweetList = new_node;
        return;
    }

    while(last->next != NULL)
    {
        last = last->next;
    }

    last->next = new_node;
    return;
}

