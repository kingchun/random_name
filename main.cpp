   #include <stdio.h>
   #include <stdlib.h>
   #include <time.h>
   #pragma GCC diagnostic ignored "-Wwrite-strings"
   int main(void)
   {
       int a;
       time_t t;
       srand((unsigned) time(&t));
       char *name[] = {"张三","李四","王五"};
       a=rand()%2;
       char *curname = name[a];
       printf("就是你了%s\n",curname);
       getchar();

   }
