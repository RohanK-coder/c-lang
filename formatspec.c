#include<stdio.h>
int main(){

      //format specifiers are as follows
      /*
      %c - character
      %s - string (or) array of characters
      %f - float
      %1f - double
      %d - integer

      %.1 - decimal precision
      %1 - minimum field width
      %- - left align
      
      */

      float item1 = 5.75;
      float item2 = 10;
      float item3 = 100.99;

      printf("Item 1 : $ %8.2f\n",item1);
      printf("Item 2 : $ %8.2f\n",item2);
      printf("Item 3 : $ %8.2f\n",item3);




}