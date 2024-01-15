#include <stdio.h>

int main() {
for(int i = 1 ; i<= 15 ; i++)
{


 for(int j = 5; j >= 1 ; j-- )
 {
 if(i == j){printf("*");}
 else {printf("     ");}
 }
  printf ("   "); // this is giving a space to another matrix 
 for(int j = 2; j <= 5 ; j++)
 {
 if(i == j){printf("*");}
 else {printf("     ");}
 }
 
 printf("\n");
  for (int j= 5 ; j<= 9 ; j++)
 {
 if(i == j){printf("*");}
 else {printf("     ");}
 }
 
 printf("   ");
 for(int j = 8; j >= 5; j-- )
 {
 if(i == j){printf("*");}
 else {printf("     ");}
 }
 
 printf("\n");
 
 
 for(int j = 11 ; j<= 15 ; j++)
 {printf ("  ");}
 printf ("       ");
 
 for (int j = 9 ; j<= 15 ; j++)
 {
     if (i==j){printf ("\\");}
     else {printf (" ");}
 }
 printf ("\n");
}
    return 0;
} 
