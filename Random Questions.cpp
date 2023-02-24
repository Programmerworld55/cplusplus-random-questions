#include<bits/stdc++.h>
#include<windows.h>
#include<conio.h>
using namespace std;
class questions
{
	public:
		string name;
		int rolno,u_ch,ch, q_ch,ans,u_ans,s,y,count=0;
//...............................
	void first_window()
	{
		system("color 04");
		string arr="\n\n\n\n\n\t\t\t!................PRORAMMED.....BY....ETHICAL......HACKER....................!";
		int s=arr.length();
		for(int i=0;i<=s;i++)
		{
			Sleep(100);
			cout<<arr[i];
		
		}
		
		input();
	}
//.................................
	
	void input()
	{
		system("cls");
		
		system("color 04");
		
		cout<<"Enter Name\n";
		cin>>name;
		cout<<"Enter Rol No\n";
		cin>>rolno;
		system("CLS");
		choice();
	}
	
//...................................
	void show()
	{
		cout<<"*************************************************QUESTIONS**************************************************************\n";
		cout<<"\tName : "<<name<<"\t\t\t\t\t\t\t\t\t\t\tRol No : "<<rolno<<"\n\n";
	}
//....................................
	
	void choice()
	{
		cout<<"\tWhat Type Of Questions U want.\n\n";
		cout<<"\t1.ADDITIION\n\n";
		cout<<"\t2.Multiplication\n\n";
		cout<<"\t3.Division\n\n";
		cout<<"\t4.MIX.....\n\n\n";
		cout<<"\t";
		cin>>q_ch;	
		if(q_ch==1)
		{
			Addition();
		}
		else if(q_ch==2)
		{
			Multiplication();
		}
		else if(q_ch==3)
		{
			Division();	
		}
		else if(q_ch==4)
		{
 			mix();
		}
		
	}
//.................................
	void no_of_questions()
	{
		cout<<"\tHow Many Questions U want.\n";
		cout<<"\t";
		cin>>u_ch;
		system("cls");
		show();
	}
//...................................

	void Addition()
	{
		system("color 04");
		int i=1;
		no_of_questions();
		while(i<=u_ch)
		{
			int num1 = rand() % 101; 
			int num2 = rand() % 101; 
			ans = num1 + num2; 
			cout<<i;
			cout << "\tWhat is " << num1 << " + " << num2 << "?\n\n";
			cout<<"\t";
			cin>>u_ans;
			i++;
			ans_check();
		}
	result();	
	}
//............................

	void Multiplication()
	{
		int i=1;
		no_of_questions();
		while(i<=u_ch)
		{
			int num1 = rand() % 101; 
			int num2 = rand() % 101; 
			ans = num1 * num2; 
			cout<<i;
			cout << "\tWhat is " << num1 << " * " << num2 << "?\n\n";
			cout<<"\t";
			cin>>u_ans;
			i++;
			ans_check();
		}
	result();
		
		
	}
//	............................

	void Division()
	{
		int i=1;
		no_of_questions();
		while(i<=u_ch)
		{
			int num1 = rand() % 101; 
			int num2 = rand() % 101; 
			ans = num1 / num2; 
			cout<<i;
			cout << "\tWhat is " << num1 << " / " << num2 << "?\n\n";
			cout<<"\t";
			cin>>u_ans;
			i++;
			ans_check();
		}
	result();
	}
//.................................
	void mix()
	{
		int x=1;
		no_of_questions();

			for(y=1;y<=u_ch/2;y++)
			{
				cout<<y;
				int num1 = rand() % 101; 
				int num2 = rand() % 101; 
				ans = num1 + num2; 
				
				cout << "\tWhat is " << num1 << " + " << num2 << "?\n\n";
				cout<<"\t";
				cin>>u_ans;
				ans_check();
			}
			int u_ch2=u_ch/2;
			for(int j=u_ch2;j<u_ch;j++)
			{
				cout<<j;
				int num1 = rand() % 101; 
				int num2 = rand() % 101; 
				ans = num1 * num2; 
				
				cout << "\tWhat is " << num1 << " * " << num2 << "?\n\n";
				cout<<"\t";
				cin>>u_ans;
				ans_check();	
			}
			
		result();
	}
//	............................
	
	void ans_check()
	{
		if(u_ans==ans)
		{
			count++;
		}
		else
		{
			count=count;
		}
	}


//..............................
	void result()
	{
		string arr="......";
		int s=arr.length();
		cout<<"\n\n\tloading Result";
		for(int i=0;i<=s;i++)
		{
			Sleep(1000);
			cout<<arr[i];
		
		}
		cout<<"\n\n\tObtained Marks Are : "<<count;
		exitf();
	}
//.................................
	void exitf()
	{
		int ch;
		cout<<"\n\n\tPress 1 If U want To Exit \n";
		cout<<"\tPress 2 If U Want To Continue\n";
		cout<<"\t\t";
		ch=getch();
		if(ch=='1')
		{
			
			exit1();
		}
		else if(ch=='2')
		{
			system("cls");
			choice();	
		}
	}
//..................................
	void exit1()
	{
		cout<<"\n\n\t\t\t....................EXIT.......................";
		exit;
	}
};

main()
{
	questions std1;
	std1.first_window();
}
