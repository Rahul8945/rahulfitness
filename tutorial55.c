 #include <stdio.h>
 #include <stdlib.h>
  int main(int argc, char const *argv[])
  {
      int a = 34;
      int *ptr; //this is a wild pointer
      *ptr = 35; //this is not to thing to do
      ptr = &a; //ptr is no longer a wild pointer 
      printf("the value of a is %d\n",*ptr);

      return 0;
  }
     