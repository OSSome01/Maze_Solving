#include <stdlib.h>
#include<stdio.h>
//using namespace std;



/*
LUL - S
RUR - S
LUR - U
RUL - U
LUS - R
RUS - L
SUL - R
SUR - L
SUS - U
LRRRL - R
SRRRS - L
RLLLR - L
SLLLS - R
*/



int main()
{
  int count=0;
  char a[] = {'L','R','R','L','L','U','L','R','U','R','L','L','U','S','L','L','L','R'};
  int len = sizeof(a);
    for(int i=0; i<len; i++)
    {

      printf("i: %i\n", i);
      if(a[i]=='X')
      {
        break;
      }
      else if(a[i+1]=='U')
      {
        count += 2;
        if(a[i]=='L')
        {
          if(a[i+2]=='L')
          {
            a[i]= 'S';
          }
          else if(a[i+2]=='R')
          {
            a[i]= 'U';
          }
          else if(a[i+2]=='S')
          {
            a[i]= 'R';
          }
        }
        else if(a[i]=='R')
        {
          if(a[i+2]=='R')
          {
            a[i] ='S';
          }
          else if(a[i+2]=='L')
          {
            a[i] = 'U';
          }
          else if(a[i+2]=='S')
          {
            a[i] = 'L';
          }
        }
        else if(a[i]=='S')
        {
          if(a[i+2]=='L')
          {
            a[i] = 'R';
          }
          else if(a[i+2]=='R')
          {
            a[i] = 'L';
          }
          else if(a[i+2] == 'S')
          {
            a[i] = 'U';
          }
        }

        for(int k=i; k<len-3;k++)
        {
          a[k+1] = a[k+3];
        }
        for(int l=len-1; l>((len-1)-count); l--)
        {
          a[l] = 'X';
        }
        printf("%d\n", count );
        //printf("%d\ni is : ",i);
        printf("\n");
        i--;
      }
      else if((a[i+1]==a[i+2])&&(a[i+2]==a[i+3])&&(a[i]==a[i+4])&&(a[i]!='X'))
      {
        printf("%d\n", 111);
        count += 4;
        if((a[i]=='L')&&(a[i+1]=='R'))
        {
          a[i] = 'R';
        }
        else if((a[i]=='S')&&(a[i+1]=='R'))
        {
          a[i] = 'L';
        }
        else if((a[i]=='R')&&(a[i+1]=='L'))
        {
          a[i] = 'L';
          printf("%d\n",90  );
        }
        else if((a[i]=='S')&&(a[i+1]=='L'))
        {
          a[i] = 'R';
        }
        for(int k=i; k<len-5;k++)
        {
          a[k+1] = a[k+5];
        }
        for(int l=len-1; l<(len-1)-count; l--)
        {
          a[l] = 'X';
        }
        printf("%d\n", count);
        i--;
      }
      printf("%s\n", a);

    }
    printf("%d\n", count );
    int j = len - count;
    char final[j];
    int x=0;
    for(int i=0;i<j;i++)
    {
      final[i] = a[i];
      x++;
    }
    printf("%d\n", x );
    printf("%s\n",final);

}
