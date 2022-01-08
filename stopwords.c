#include "headerA3.h"
#include <strings.h>
#include <string.h>
void countStopWords(tweet * tweetList)
{
     tweet *counting = tweetList;
     int count_stopwords=0;
     int num_tweets=0;
     char stopword[26][10];
     strcpy(stopword[1],"a");strcpy(stopword[2],"an");strcpy(stopword[3],"and");strcpy(stopword[4],"are");strcpy(stopword[5],"as");strcpy(stopword[6],"at");strcpy(stopword[7],"be");strcpy(stopword[8],"by");strcpy(stopword[9],"for");strcpy(stopword[10],"from");strcpy(stopword[11],"has");
     strcpy(stopword[12],"he");strcpy(stopword[13],"in");strcpy(stopword[14],"is");strcpy(stopword[15],"it");strcpy(stopword[16],"its");strcpy(stopword[17],"of");strcpy(stopword[18],"on");strcpy(stopword[19],"that");strcpy(stopword[20],"the");strcpy(stopword[21],"to");
     strcpy(stopword[22],"was");strcpy(stopword[23],"were");strcpy(stopword[24],"will");strcpy(stopword[25],"with");
     while(counting != NULL) //splitting characters of tweets into words
    {
        num_tweets++;
        int i=0,j=0,k=0;
        char split_char[50][50];
        for(i=0;i<=strlen(counting->text);i++)
    {
        if(counting->text[i]==' '||counting->text[i]=='\0')
            {
                split_char[k][j]='\0';
                k++;
                j=0;
            }
        else
        {
            split_char[k][j]=counting->text[i];
            j++;
        }
    }
    int p=0;
    while(p!=26)
    {
    for(int i=0;i<26;i++)
    {
        if(strcasecmp(split_char[p], stopword[i])==0) //comparing each stopword to each tweet using case insenstivity
        {
            printf("Word: %s Stopword: %s\n", split_char[p], stopword[i]);
            count_stopwords++; //counting stopwords
        }
    }
    p++;
    }
    counting = counting->next;
    }
    printf("Across %d tweets, %d stop words were found.\n", num_tweets, count_stopwords);
}

