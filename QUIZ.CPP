#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
class quiz
{
	char ques[30],ans[10],ans1[10];
	public:
		void setqa(char[],char[],char[]);
		void askques();
};
void quiz::setqa(char str[],char str1[],char str2[])
{
	strcpy(ques,str);
	strcpy(ans,str1);
	strcpy(ans1,str2);
}
void quiz::askques()
{
	cout<<"\n"<<ques;
	cout<<"\n1: "<<ans;
	cout<<"\n2: "<<ans1;
}
int check(int num)
{
	if (num==1)
		return 1;
	return 0;
}
int main()
{
	int num,tscore=0;
	clrscr();
	char ques[30],ans[10],ans1[10],name[10];
	quiz q[5];
	cout<<"\n****************WELCOME*********************";
	cout<<"\n Enter your name\n";
	gets(name);
	cout<<"\n HELLO "<<name<<" let's create a quiz for your friend's";
	cout<<"\n RULES:";
	cout<<"\n 1: YOU HAVE TO INSERT 5 QUESTIONS";
	cout<<"\n 2: THE ANSWER MUST BE ONE WORD";
	cout<<"\n 3: YOU HAVE TO GIVE 1 CORRECT AND 1 INCORRECT ANSWER";
	cout<<"\n 4: THERE WILL BE 1 SCORE FOR EACH CORRECT ANSWER";
	cout<<"\n Let's play";
	for(int i=0;i<5;i++)
	{
		cout<<"\n Enter the question\n";
		gets(ques);
		cout<<"\n Enter the correct answer\n";
		gets(ans);
		cout<<"\n Enter the incorrect answer\n";
		gets(ans1);
		q[i].setqa(ques,ans,ans1);
	}
	cout<<"\n Ask your friend to answer the question's\n";
	for(i=0;i<5;i++)
	{
		int num;
		cout<<"\n Select one option\n";
		q[i].askques();
		cin>>num;
		if(check(num))
			tscore++;
	 }
	 cout<<"\n YOUR SCORE IS:"<<tscore;
	 cout<<"\n ------------------------THANK YOU---------------------";
	getch();
	return 0;
}