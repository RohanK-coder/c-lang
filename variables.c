#include<stdio.h>
int main(){
      //this just allocates memory
      int variable;
      //this just initialization, allcoates values to the ref variable
      variable = 123;

      int y = 124; //dec and initialization

      //floating variable
      float gpa = 2.05;

      //string or array of characters
      char name[] = "rohan";

      //format specifiers
      printf("Hello %s \n",name);

      printf("You are %d years old \n",y);

      printf("Your average gpa is %.2f\n",gpa);

      return 0;
}