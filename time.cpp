#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;
char ans[1000];
char bla[1000];
char final[1000];
void hour(int h,int m)
{
	if(m>30)
	h=h+1;
	
	if(h==1)
	{
		strcpy(ans,"one");
		//strcpy(bla," clock ");
	}
	if(h==2)
	{
		strcpy(ans,"two");
		//strcpy(bla," clock ");
	}
	if(h==3)
	{
		strcpy(ans,"three");
		//strcpy(bla," clock ");
	}
	if(h==4)
	{
		strcpy(ans,"four");
		//strcpy(bla," clock ");
	}
	if(h==5)
	{
		strcpy(ans,"five");
		//strcpy(bla," clock ");
	}
	if(h==6)
	{
		strcpy(ans,"six");
		//strcpy(bla," clock ");
	}
	if(h==7)
	{
		strcpy(ans,"seven");
		//strcpy(bla," clock ");
	}
	if(h==8)
	{
		strcpy(ans,"eight");
		//strcpy(bla," clock ");
	}
	if(h==9)
	{
		strcpy(ans,"nine");
		//strcpy(bla," clock ");
	}
	if(h==10)
	{
		strcpy(ans,"ten");
		//strcpy(bla," clock ");
	}
	if(h==11)
	{
		strcpy(ans,"eleven");
		//strcpy(bla," clock ");
	}
	if(h==12)
	{
		strcpy(ans,"tweleve");
		//strcpy(bla," clock ");
	}
}
void m1()
{
	strcat(ans," o' clock");
	strcpy(final,ans);
}
void m2(int m)
{
	char *tens_multiple[] = {"", "", "twenty ", "thirty ", "forty ", "fifty ", 
                             "sixty ", "seventy ", "eighty ", "ninety "};
    char *single_digits[] = { "zero", "one", "two", "three", "four", 
                              "five", "six", "seven", "eight", "nine"};
    char *two_digits[] = {"", "ten", "eleven", "twelve", "thirteen", "fourteen", 
                     "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    if(m>30)
    {
    	m=60-m;
	}
    int temp1=m%10;
    int temp2=m/10;
    
    if(temp2!=1)
    {
    strcpy(bla,tens_multiple[temp2]);
    if(temp1!=0)
    strcat(bla,single_digits[temp1]);
    //cout<<bla<<endl;
	}
	else
	{
		strcpy(bla,two_digits[temp1+1]);
		//cout<<bla<<endl;
	}
}
void fucn(int h,int m)
{
	char temp[1000];
	if(m==15)
	strcpy(temp,"quater past ");
	else if(m==30)
	strcpy(temp,"half past ");
	else if(m==45)
	strcpy(temp,"quater to ");
	if(m==15||m==30||m==45)
	{
		strcat(temp,ans);
		//cout<<temp[0]<<endl;
		strcpy(final,temp);
	}
	else if(m<=30)
	{
		if(m==1)
		{
				strcat(bla," minute past ");
		strcat(bla,ans);
		strcpy(final,bla);
		}
		else
		{
		strcat(bla," minutes past ");
		strcat(bla,ans);
		strcpy(final,bla);
		}
	}
	else
	{
		strcat(bla," minutes to ");
		strcat(bla,ans);
		strcpy(final,bla);
	}
	//else if()
}
int main()
{
	
	int h;
	int m;
	cin>>h;
	cin>>m;
	hour(h,m);
	if(m==0)
	m1();
	else
	{
	m2(m);
	fucn(h,m);
}
	cout<<final;	
}

