#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include <stdlib.h>
int main(void)
{
	char a[20],b[20];
	int q[10],w[10];
	printf("Black:");
	gets(a);
	printf("White:");
	gets(b);
	
 }
int f1(int *a)//顺子 
{
    int i,j,level;
    int v;
    for(i = 0; i <4; i ++)
        for(j = i+1; j < 5; j ++)
        {
            if(a[2*i]>a[2*j])
            {
                v=a[2*i];
                a[2*i]=a[2*j];
                a[2*j]=v;
            }
        }
    for(i = 0; i <4; i=i+2)
    {if((a[i]-a[i+2])!=-1)
     {level=4;break;
	 }
	 else level=7;
	}
     return level;
}
int f2(int *a)//三条 对子 双对 散牌 
{
    int i,j,level=0,s=1,k,n=0;
    int v;
    for(i = 0; i < 4; i ++)
        for(j = i+1; j < 5; j ++)
        {
            if(a[2*i]>a[2*j])
            {
                v=a[2*i];
                a[2*i]=a[2*j];
                a[2*j]=v;
            }
        }
    for(i = 0; i < 4; i=i+2)
    {if(a[i]==a[i+2])
     {s++;
	  if(k<=s){k=s;
	  }
	 }
	 else {
	 s=1;
	 if(k==2)n=1;
	 }
	}
	if(k>2)level=4;
	else if((k==2)&&(n==1))
	level=3;
	else if((k==2)&&(n==0))
	level=2;
	else level=1;
    return level;
}
int f3(int *a)//同花 
{	int i,flag[4],level;
	for(i=1;i<6;i++)
	{if(a[2*i]==100)flag[0]++;
	else if(a[2*i]==200)flag[1]++;
	else if(a[2*i]==300)flag[2]++;
	else if(a[2*i]==400)flag[3]++;
	}
	for(i=0;i<4;i++)
	{if(flag[i]==5)
	 {level=7;return level;
	 break;
	 }
	 else if(flag[3]!=5)
	 {level=5;return level;
	 break;
	 }
	}
}
int f(int *a) 
{	int i,j=0,q[20];
		for(i=0;i<20;i++)
		{if(a[i]!=' ')
		{
		  if(a[i]=='1')
		  q[j]=1;
		  else if(a[i]=='2')
		  q[j]=2;
		  else if(a[i]=='3')
		  q[j]=3;
		  else if(a[i]=='4')
		  q[j]=4;
		  else if(a[i]=='5')
		  q[j]=5;
		  else if(a[i]=='6')
		  q[j]=6;
		  else if(a[i]=='7')
		  q[j]=7;
		  else if(a[i]=='8')
		  q[j]=8;
		  else if(a[i]=='9')
		  q[j]=9;
		  else if(a[i]=='T')
		  q[j]=10;
		  else if(a[i]=='J')
		  q[j]=11;
		  else if(a[i]=='Q')
		  q[j]=12;
		  else if(a[i]=='K')
		  q[j]=13;
		  else if(a[i]=='A')
		  q[j]=14;
		  else if(a[i]=='D')
		  q[j]=100;
		  else if(a[i]=='S')
		  q[j]=200;
		  else if(a[i]=='H')
		  q[j]=300;
		  else if(a[i]=='C')
		  q[j]=400;
		  j++;
		}else continue;
		}
	return *q;
}
	

