#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

struct user
{
    char name[30]; 
    int score; 
    struct user *next; 
}*first = NULL, *new = NULL, *ptr = NULL;


//function-for-clearing-buffer
void clear()
{
    while ((getchar()) != '\n');
    printf("\nPress Enter to continue...");
    getchar();
}

int menu()
{
    int job; 
    printf("\n  Welcome to the game  "); 
    printf("\n-----------------------"); 
    printf("\n1. Start\n2. Highest Score\n3. Show Score list\n4. Reset Scores\n5. Exit"); 
    printf("\n-----------------------"); 
    printf("\nChoice: "); 
    scanf("%d", &job); 
    return job; 
}

void start()
{
    int score = 0, ans, validate; 
    new = malloc(sizeof(struct user)); 

    while ((getchar()) != '\n');
    printf("\nRegister your name: "); 
    scanf("%[^\n]s", &new->name); 

    printf("\n ------------------  Welcome == %s == to C Program Quiz Game --------------------------", new->name);
    printf("\n            Here are some tips you might wanna know before playing:       ");
    printf("\n -------------------------------------------------------------------------");
    printf("\n >> There are 2 rounds in this Quiz Game,WARMUP ROUND & CHALLANGE ROUND");
    printf("\n >> In warmup round you will be asked a total of 3 questions to test your");
    printf("\n    general knowledge. You are eligible to play the game if you give atleast 2");
    printf("\n    right answers, otherwise you can't proceed further to the Challenge Round.");
    printf("\n >> Your game starts with CHALLANGE ROUND. In this round you will be asked a");
    printf("\n    total of 10 questions. Each right answer will be awarded $100,000!");
    printf("\n    By this way you can win upto ONE MILLION cash prize!!!!!..........");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option.");
    printf("\n >> You will be asked questions continuously, till right answers are given");
    printf("\n >> No negative marking for wrong answers!");
    printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!\n\n");
    clear(); 
    system("cls");

    first:
    printf("\nWhich of the following is a Palindrome number?");
    printf("\n1).42042\n2).101010\n3).23232\n4).01234\nAnswer: ");
    scanf("%d", &ans); 
    if(ans > 4)
    {    printf("\nInvalid option selected, Please select a valid one.."); 
        clear(); 
        system("cls"); 
        goto first; }
    else 
    {
        fvalidate: 
        printf("\n1)Lock Answer\n2)Change Answer\nChoice: "); 
        scanf("%d", &validate);
        switch(validate)
        {
            case 1: 
                if(ans == 3)
                {
                    printf("\nCorrect Answer..");
                    score++;
                }
                else 
                {
                    printf("\nIncorrect Answer..Sorry!!, Correct option is 3.");
                }
                break;
            case 2: 
                clear(); 
                system("cls"); 
                goto first; 
                break; 
            default: 
                printf("\nEnter a valid input please:"); 
                goto fvalidate;
                break;
        }  
        clear();
        system("cls");
    }

    second:
    printf("\n\n\nThe country with the highest environmental performance index is...");
    printf("\n1)France\n2)Denmark\n3)Switzerland\n4)Finland\nAnswer: ");
    scanf("%d",&ans);
    if(ans > 4)
    {    printf("\nInvalid option selected, Please select a valid one.."); 
        clear(); 
        system("cls"); 
        goto second;}
    
    else
    {
        secvalidate: 
        printf("\n1)Lock Answer\n2)Change Answer\nChoice: "); 
        scanf("%d", &validate);
        switch(validate)
        {
            case 1: 
                if(ans == 3)
                {
                    printf("\nCorrect Answer..");
                    score++;
                }
                else 
                {
                    printf("\nIncorrect Answer..Sorry!!, Correct option is 3.");
                }
                break;
            case 2: 
                clear();
                system("cls");
                goto second; 
                break; 
            default: 
                printf("\nEnter a valid input please:"); 
                goto secvalidate;
                break;
        }  
        clear();
        system("cls");
    }

    third:
    printf("\n\n\nWhich animal laughs like human being?");
    printf("\n1)Polar Bear\n2)Hyena\n3)Donkey\n4)Chimpanzee\nAnswer: ");
    scanf("%d",&ans);
    if(ans > 4)
    {    printf("\nInvalid option selected, Please select a valid one.."); 
        clear(); 
        system("cls"); 
        goto third;}
    else
    {
        thirdvalidate: 
        printf("\n1)Lock Answer\n2)Change Answer\nChoice: "); 
        scanf("%d", &validate);
        switch(validate)
        {
            case 1: 
                if(ans == 2)
                {
                    printf("\nCorrect Answer..");
                    score++;
                }
                else 
                {
                    printf("\nIncorrect Answer..Sorry!!, Correct option is 2.");
                }
                break;
            case 2: 
                clear();
                system("cls");
                goto third; 
                break; 
            default: 
                printf("\nEnter a valid input please:"); 
                goto thirdvalidate;
                break;
        }   
        clear();
        system("cls");
    }

    fourth: 
    printf("\n\n\nWho was awarded the youngest player award in Fifa World Cup 2006?");
    printf("\n1)Wayne Rooney\n2)Lucas Podolski\n3)Lionel Messi\n4)Christiano Ronaldo\nAnswer: ");
    scanf("%d",&ans);
    if(ans > 4)
    {    printf("\nInvalid option selected, Please select a valid one.."); 
        clear(); 
        system("cls"); 
        goto fourth;}
    else
   { 
        forvalidate:
        printf("\n1)Lock Answer\n2)Change Answer\nChoice: "); 
        scanf("%d", &validate);
        switch(validate)
        {
            case 1: 
                if(ans == 2)
                {
                    printf("\nCorrect Answer..");
                    score++;
                }
                else 
                {
                    printf("\nIncorrect Answer..Sorry!!, Correct option is 2.");
                }
                break;
            case 2: 
                clear();
                system("cls");
                goto fourth; 
                break; 
            default: 
                printf("\nEnter a valid input please:"); 
                goto forvalidate;
                break;
        }   
        clear();
        system("cls");
    }

    fifth:
    printf("\n\n\nWhich is the third highest mountain in the world?");
    printf("\n1)Mt. K2\n2)Mt. Kanchanjungha\n3)C.Mt. Makalu\n4)Mt. Kilimanjaro\nAnswer: ");
    scanf("%d",&ans);
    if(ans > 4)
    {    printf("\nInvalid option selected, Please select a valid one.."); 
        clear(); 
        system("cls"); 
        goto fifth;}
    else
    {
        fifthvalidate:
        printf("\n1)Lock Answer\n2)Change Answer\nChoice: "); 
        scanf("%d", &validate);
        switch(validate)
        {
            case 1: 
                if(ans == 2)
                {
                    printf("\nCorrect Answer..");
                    score++;
                }
                else 
                {
                    printf("\nIncorrect Answer..Sorry!!, Correct option is 2.");
                }
                break;
            case 2: 
                clear(); 
                system("cls");
                goto fifth; 
                break; 
            default: 
                printf("\nEnter a valid input please:"); 
                goto fifthvalidate;
                break;
        }   
        clear();
        system("cls");
    }

    sixth:
    printf("\n\n\nWhat is the group of frogs known as?");
    printf("\n1)A traffic\n2)A toddler\n3)A police\n4)An Army\nAnswer: ");
    scanf("%d",&ans);
    if(ans > 4)
    {    printf("\nInvalid option selected, Please select a valid one.."); 
        clear(); 
        system("cls"); 
        goto sixth;}
    else
    {
        sixthvalidate:
        printf("\n1)Lock Answer\n2)Change Answer\nChoice: "); 
        scanf("%d", &validate);
        switch(validate)
        {
            case 1: 
                if(ans == 2)
                {
                    printf("\nCorrect Answer..");
                    score++;
                }
                else 
                {
                    printf("\nIncorrect Answer..Sorry!!, Correct option is 2.");
                }
                break;
            case 2: 
                clear(); 
                system("cls");
                goto sixth; 
                break; 
            default: 
                printf("\nEnter a valid input please:"); 
                goto sixthvalidate;
                break;
        }
        printf("\n\nGame Completed...\n");    
    }

    score = score*1000000; 
    if(score > 0)
    {    printf("\n------Congraulation------"); 
        printf("\nYou won $%d *_*", score); 
    }
    else
    {    printf("\n\n\t** SORRY YOU DIDN'T WIN ANY CASH **");
        printf("\n\t\t Thanks for your participation");
        printf("\n\t\t TRY AGAIN");
    }
    new->score = score;
    new->next = NULL;
}

void makelist()
{
    start(); 
    if(first == NULL)
    {
        first = new ; 
    }
    else
    {
        for(ptr = first; ptr->next != NULL; ptr = ptr->next); 
        ptr->next = new; 
    }
    printf("\n\nScore and Rewards has been recorded.."); 
}

void showlist()
{
    if(first == NULL)
    {
        printf("\n\nNo Records found to show..."); 
    }
    else 
    {
        printf("\nScore   \tName\n");
        for(ptr = first; ptr != NULL; ptr = ptr->next)
        {
            printf("%d  \t%s", ptr->score, ptr->name);
            printf("\n"); 
        }
        printf("\n");
    }
}

void deleteList()
{
 
    for(ptr = first; ptr->next != NULL; ptr = ptr->next)
    {
        ptr = (ptr)->next;
        free(ptr);
    }
    first = NULL;  
}

struct user *highest()
{
    struct user *dummy = NULL; 
    int highest = first->score; 
    char temp[30];
    for(ptr = first; ptr != NULL; ptr = ptr->next)
    {
        if(ptr->score > highest)
        {
            highest = ptr->score; 
            dummy = ptr; 
        }
        else 
        {
            dummy = first; 
        }
    }
    return dummy; 
}

int main()
{
    struct user *s; 
    menu:
    printf("\n"); 
    int temp = menu(); 
    system("cls"); 
    switch (temp)
    {
    case 1:
        makelist(); 
        break;
    case 2:
        s = highest(); 
        printf("\nName of player: %s\nHighest Score: %d", s->name, s->score); 
        break; 
    case 3:
        showlist(); 
        break; 
    case 4:
        deleteList(); 
        printf("\nScore Record Cleared!");  
        break; 
    case 5:
        exit(0); 
    
    default:
        printf("\nPlease input a valid input..."); 
        break;
    }
    clear(); 
    system("cls"); 
    goto menu;
    return 0;
}