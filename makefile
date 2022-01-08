assignment3:menuA3.o mainA3.o createTweets.o addnodetothelist.o displayTweets.o searchTweets.o stopwords.o deleteTweet.o saveTofile.o loadFromfile.o
	gcc -Wall -std=c99 menuA3.o mainA3.o createTweets.o addnodetothelist.o displayTweets.o searchTweets.o stopwords.o deleteTweet.o saveTofile.o loadFromfile.o -o assignment3
menuA3.o:menuA3.c headerA3.h myheaderA3.h
	gcc -Wall -std=c99 -c menuA3.c
mainA3.o:mainA3.c headerA3.h myheaderA3.h
	gcc -Wall -std=c99 -c mainA3.c
createTweets.o:createTweets.c headerA3.h myheaderA3.h
	gcc -Wall -std=c99 -c createTweets.c
addnodetothelist.o:addnodetothelist.c headerA3.h myheaderA3.h
	gcc -Wall -std=c99 -c addnodetothelist.c
displayTweets.o:displayTweets.c headerA3.h myheaderA3.h
	gcc -Wall -std=c99 -c displayTweets.c
searchTweets.o:searchTweets.c headerA3.h myheaderA3.h
	gcc -Wall -std=c99 -c searchTweets.c
stopwords.o:stopwords.c headerA3.h myheaderA3.h
	gcc -Wall -std=c99 -c stopwords.c
deleteTweet.o:deleteTweet.c headerA3.h myheaderA3.h
	gcc -Wall -std=c99 -c deleteTweet.c
saveTofile.o:saveTofile.c headerA3.h myheaderA3.h
	gcc -Wall -std=c99 -c saveTofile.c
loadFromfile.o:loadFromfile.c headerA3.h myheaderA3.h
	gcc -Wall -std=c99 -c loadFromfile.c

clean:
	rm*.oassignment3
