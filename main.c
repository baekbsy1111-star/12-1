#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "board.h"

#define MAX_DIE  6

int rolldie(void)
{
    return rand()%MAX_DIE +1;
}


int main(int argc, char *argv[])
{
    int cnt;
    int pos;
    int coinResult;
    
    srand(  (unsigned)(time(NULL))  );
    
    //opening
    printf("==============================================\n");
    printf("***********************************************\n");
    printf("================ shark game start ==============\n");
    printf("***********************************************\n");
    printf("==============================================\n");
    
    //step1
    board_initBoard();
    //step2
    cnt=0;
    pos = 0;
    coinResult = 0;
    do{
          int die_result;
          
          
           board_printBoardStatus();
          
          die_result = rolldie();
          
          pos += die_result;
          
           printf("pos:%i(die:%i)\n", pos, die_result);
          
          coinResult +=  board_getBoardCoin(pos);
          
          
    printf("coin:%i\n",coinResult);
          
      cnt++;         
      } while (cnt<5);
    
    
    
    
    //ending
    printf("\n\n\n\n\n\n\n\n");
    printf("==============================================\n");
    printf("***********************************************\n");
    printf("================ shark game end ===============\n");
    printf("***********************************************\n");
    printf("==============================================\n\n");
  
  system("PAUSE");	
  return 0;
}
