// clang -m32 -o c_question c_question.c

#include <stdio.h>

void foo(void) {
   int i;
   int edx[10];
   
   for(i = 0; i <=10; ++i)
      edx[i] = 0;
}

int main() {
  foo();
}
