#include<stdio.h>
#include<conio.h>
using namespace std;
int main()
{
    static int a[20];
    int i=0;
    a[i]=i++;
    printf("%d %d %d",a[0],a[1],i);
    getch();
    }
