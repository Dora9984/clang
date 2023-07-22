/*
파일명: ex08-99-homework.c

1번 분석하기 (수업에서 함)
*
**
***
****
*****
******
*******

2번
   *
  **
 ***
****

3번
   *
  ***
 *****
*******

4번
   *
  ***
 *****
*******
 *****
  ***
   *


          i     j
   *      0   j > 3  -> j > 3+i
  ***     1   j > 4  -> j > 3+i
 *****    2   j > 5  -> j > 3+i
*******   3   
 ******   4   j > 5  -> i+j > 9
  *****   5   j > 4  -> i+j > 9
   ****   6   j > 3  -> i+j > 9

           i     j 
*******    0   j < 3
*******    1   j < 2
*******    2   j < 1
*******    3
*******    4
*******    5
*******    6

*/

#include <stdio.h>

int main(void)
{ // 4번 마름모(수업에서)
    for(int i = 0; i < 7; i++)
    {
        for(int j = 0; j < 7; j++)
        {
            if(i < 7/2+1) {
                if(j < 3-i) {
                    printf(" ");
                } else if(j > 3+i) {
                    printf(" ");
                } else {
                    printf("*");
                }
            } else {
                if(j < i-3) {
                    printf(" ");
                } else if(i+j > 9) {
                    printf(" ");
                } else {
                    printf("*");
                }
            }
        }
        printf("\n");        
    }
printf("\n");

//2번(혼자함ㅎ)
    for (int k = 0; k < 4; k++)
    {
        for (int l = 0; l < 4; l++)
        {
            if (l < 3-k) {
                printf(" ");}
            else {
                printf("*");}
        }
        printf("\n");
    }
            
        
    return 0;
}