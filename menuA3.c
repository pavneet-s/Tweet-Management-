#include <stdio.h>
int menu()
{
    int menu=0;
    printf("\n1. Create a new tweet \n2. Display tweets \n3. Search a tweet (by keyword) \n4. Find how many words are \"stop words\" \n5. Delete the nth tweet \n6. Save tweets to a file \n7. Load tweets from a file \n8. Exit\n");
    printf("\nChoose a menu option: ");
    scanf("%d", &menu);
    return menu;
}

