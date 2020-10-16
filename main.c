#include <stdio.h>
#include <string.h>

double average (int* a, int l){
     double sum = 0;
     for(int i = 0; i < l; i++){
         sum += a[i];
     }
     return sum/l;
}

void copy(int *a, int *b,int l) {
    for(int i = 0; i < l; i++) {
        b[i] = a[i];
    }
}

int len(char* str)
{
  int i = 0;
  while(*(str + i))
  {
    i++;
  }
  return i;
}

int main() {
    int a[3] = {1,2,3};
    int b[3] = {4,5,6};
    printf("average of a: %f", average(a, 3));
    printf("\n");

    printf("b: ");
    for(int i = 0; i < 3; i++){
        printf("%d ", b[i]);
    }
    printf("\n");

    copy(a, b, 3);

    printf("b: ");
    for(int i = 0; i < 3; i++){
        printf("%d ", b[i]);
    }
    printf("\n");
    char str[] = "bananas";
    printf("length of %s: %d\n", str, len(str));
    char str2[] = "buffoon";
    printf("str: %s\n", str);
    printf("str2: %s\n", str2);
    strcpy(str2, str);
    printf("str2: %s\n", str2);
    strcat(str, str2);
    printf("str: %s\n", str);
    printf("str - str2 = %d\n", strcmp(str, str2));
    char c = 'n';
    printf("pointer to first %c in str: %p\n", c, strchr(str, c));
    printf("str starting with the first %c in str: %s", c, strchr(str, c));
    return 0;
}

