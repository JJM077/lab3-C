//Author: Joshua McIntyre jjm7410@psu.edu
//Collaborator Finn Thompson fet5024@psu.edu
//Collaborator Caleb Frantz cmf6208@psu.edu
//Collaborator Abishek apv5314@psu.edu
//section: 4
//Breakout: 18


#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>



int sum_n(int n){
  if(n == 0)
  {
    return 0;
  }
  else
  {
    return n + sum_n(n-1);
  }
}


 void print_n(const char *s, int n){
   if (n == 0)
   {
     return;
   } 
   else
   {
     printf("%s\n", s);
     print_n(s, n-1);

   }
 }


 int main(void) {

   char *intinput = readline("Enter an int: ");
   int counter = atoi(intinput);
   printf("sum is %d.\n", sum_n(counter));
   char *stringinput = readline("Enter a string: ");
   print_n(stringinput, counter);
   return 0;
   }