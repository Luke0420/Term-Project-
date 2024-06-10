#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>

// function declare

void flashBuffer (void);
void toArray (int x, int answerArray[]);
bool checkRepeat (int Array[]);
int checkWinA (int guessArray[], int answerArray[]);
int checkWinB (int guessArray[], int answerArray[]);
bool checkEnoughDigit (int guess);

int main (void)
{
                                        // variables
    int answer = 0;
    int answerArray[4];
    int guess = 0;
    int guessArray[4];
    bool win = false;
    int count = 0;
    char enter;
    
restart:
    
    srand(time(NULL));
    answer = (rand() % 9000) + 1000;    // generate random number
   
    toArray(answer, answerArray);       // put answer into a array
    
    if (checkRepeat(answerArray) == true )    // check if the answer has repeat number
        goto restart;
    
    while (win != true)
    {
restart2:
  
        printf("Enter a four digit number:");
        
        flashBuffer();
        scanf("\n%d",&guess);
        
        if (guess == answer)
            break;
        
        toArray(guess,guessArray);    // put guess into a array
        
        if (checkEnoughDigit(guess) == true)
        {
            printf("don't enter number contain less than 4 digit");
            goto restart2;

        }
        
        if (checkRepeat(guessArray) == true)  // check if the number contain same digit
        {
            printf("don't enter number contain same digit\n");
            goto restart2;
        }
        
        printf("%dA %dB\n",checkWinA(guessArray,answerArray),checkWinB(guessArray,answerArray));   // print out tip
        count ++;  // count guess how many times
        
    }
    
    printf("Congratulation You Won; You use %d times\n",count);
    printf("Enter 'a' to play again :");
    
restart3:
    flashBuffer();
    scanf("%c",&enter);
     
    if (enter == 'a')   // check if the input is 'a'
        goto restart;
    else              // if not go to restart 3
    {
        printf("Invalid Enter\nplease enter again:");
        goto restart3;
    }

    return 0 ;
}

// function definition

void toArray (int x, int answerArray[])
{
    
    int pop = 0;
    
    for (int i = 4; i >= 0 ; i --)
    {
        pop = x % 10;
        x /= 10;
        answerArray[i-1] = pop;
        
    }
    
}
 
void flashBuffer (void)
{
    while (getchar() != '\n')
        continue;
}


int checkWinA (int guessArray[], int answerArray[])
{
    int A = 0;
    for (int i = 0; i < 4 ; i ++)
    {
        if(answerArray[i] == guessArray[i])
            A++;
        
    }
    return A;
}


int checkWinB (int guessArray[], int answerArray[])
{
    int B = 0;
    for(int i = 0; i < 4 ; i ++)
    {
        for (int j = 0 ; j < 4 ; j ++)
        {
            if (guessArray[i] == answerArray[j] && i != j)
                B++;
        }
    }
    return B;
}

bool checkRepeat(int Array[])
{
    for (int i = 0 ; i < 4 ; i ++)
    {
        for (int j = 0 ; j < 4 ; j ++)
        {
            if (Array[i] == Array[j] && i != j)
                return true;
            
        }
    }
    
    return false;

}



bool checkEnoughDigit (int guess)
{
    for (int i = 0 ; i < 3 ; i ++)
        guess /= 10;
    
     if (guess == 0)
        return true;
    else
        return false;
    
}
