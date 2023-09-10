#include <iostream>
#include <windows.h>
using namespace std;



class Tokens
{
	public:
		static int token_no;
		static string Bankname;
		static string wait_time;
		
		
		void set_waittime(string t)
		{
			wait_time = t;
		}
		
		string get_waittime()
		{
			return wait_time;
		}
		
		void set_bankname(string n)
		{
			Bankname = n;
		}
		
		string get_bankname()
		{
			return Bankname;
		}
		
		void fun_0();
		
		void fun_1();
		
		void fun_2();
		
		void fun_3();
		
		void fun_4();
		
		void fun_5();
		
		void fun_6();
		
		void fun_7();
		
		void fun_8();
};


int Tokens::token_no = 10;
string Tokens::Bankname = "RBM";
string Tokens::wait_time = "12:00 min";

void Tokens::fun_0()
{
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t  ";
	cout<<"Thanks For Using Me :) \n\n\n\n\n\n\n\n\n\n\n\n\n";
	exit(0);
}



void Tokens::fun_1()
{
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t ---------------------------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<"\n\t\t\t\t\t\t\t\t      ___________"<<endl;
	cout<<"\t\t\t\t\t\t\t\t     |           |"<<endl;
	cout<<"\t\t\t\t\t\t\t\t     |  "<<Bankname<<" Bank |"<<endl;
	cout<<"\t\t\t\t\t\t\t\t     |___________|"<<endl<<endl;
	cout<<"\t\t\t\t\t\t\t\t   -Account Creation- "<<endl;
	cout<<endl<<"\t\t\t\t\t\t\t\t      Token No: "<<token_no<<endl<<endl;
	cout<<"\t\t\t\t\t\t\t      Average Wait Time: "<<get_waittime()<<endl<<endl;
	cout<<"\t\t\t\t\t\t\t\t       "<<__DATE__<<endl<<endl;
	cout<<"\t\t\t\t\t\t\t\t        "<<__TIME__<<endl;
	cout<<endl<<"\t\t\t\t\t\t\t     Thank You For Visiting HBL Bank"<<endl<<endl<<"\t\t\t\t\t\t\t\t    Powered By WaveTech";
	cout<<"\n\n\t\t ---------------------------------------------------------------------------------------------------------------------------------";
	token_no++;
}



void Tokens::fun_2()
{
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t ---------------------------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<"\n\t\t\t\t\t\t\t\t      ___________"<<endl;
	cout<<"\t\t\t\t\t\t\t\t     |           |"<<endl;
	cout<<"\t\t\t\t\t\t\t\t     |  "<<Bankname<<" Bank |"<<endl;
	cout<<"\t\t\t\t\t\t\t\t     |___________|"<<endl<<endl;
	cout<<"\t\t\t\t\t\t\t\t     -Bill Payment- "<<endl;
	cout<<endl<<"\t\t\t\t\t\t\t\t      Token No: "<<token_no<<endl<<endl;
	cout<<"\t\t\t\t\t\t\t      Average Wait Time: "<<get_waittime()<<endl<<endl;
	cout<<"\t\t\t\t\t\t\t\t       "<<__DATE__<<endl<<endl;
	cout<<"\t\t\t\t\t\t\t\t        "<<__TIME__<<endl;
	cout<<endl<<"\t\t\t\t\t\t\t     Thank You For Visiting HBL Bank"<<endl<<endl<<"\t\t\t\t\t\t\t\t    Powered By WaveTech";
	cout<<"\n\n\t\t ---------------------------------------------------------------------------------------------------------------------------------";
	token_no++;
}



void Tokens::fun_3()
{
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t ---------------------------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<"\n\t\t\t\t\t\t\t\t      ___________"<<endl;
	cout<<"\t\t\t\t\t\t\t\t     |           |"<<endl;
	cout<<"\t\t\t\t\t\t\t\t     |  "<<Bankname<<" Bank |"<<endl;
	cout<<"\t\t\t\t\t\t\t\t     |___________|"<<endl<<endl;
	cout<<"\t\t\t\t\t\t\t\t    -Cash Withdrawl- "<<endl;
	cout<<endl<<"\t\t\t\t\t\t\t\t      Token No: "<<token_no<<endl<<endl;
	cout<<"\t\t\t\t\t\t\t      Average Wait Time: "<<get_waittime()<<endl<<endl;
	cout<<"\t\t\t\t\t\t\t\t       "<<__DATE__<<endl<<endl;
	cout<<"\t\t\t\t\t\t\t\t        "<<__TIME__<<endl;
	cout<<endl<<"\t\t\t\t\t\t\t     Thank You For Visiting HBL Bank"<<endl<<endl<<"\t\t\t\t\t\t\t\t    Powered By WaveTech";
	cout<<"\n\n\t\t ---------------------------------------------------------------------------------------------------------------------------------";
	token_no++;
}



void Tokens::fun_4()
{
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t ---------------------------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<"\n\t\t\t\t\t\t\t\t      ___________"<<endl;
	cout<<"\t\t\t\t\t\t\t\t     |           |"<<endl;
	cout<<"\t\t\t\t\t\t\t\t     |  "<<Bankname<<" Bank |"<<endl;
	cout<<"\t\t\t\t\t\t\t\t     |___________|"<<endl<<endl;
	cout<<"\t\t\t\t\t\t\t\t     -Cash Deposit- "<<endl;
	cout<<endl<<"\t\t\t\t\t\t\t\t      Token No: "<<token_no<<endl<<endl;
	cout<<"\t\t\t\t\t\t\t      Average Wait Time: "<<get_waittime()<<endl<<endl;
	cout<<"\t\t\t\t\t\t\t\t       "<<__DATE__<<endl<<endl;
	cout<<"\t\t\t\t\t\t\t\t        "<<__TIME__<<endl;
	cout<<endl<<"\t\t\t\t\t\t\t     Thank You For Visiting HBL Bank"<<endl<<endl<<"\t\t\t\t\t\t\t\t    Powered By WaveTech";
	cout<<"\n\n\t\t ---------------------------------------------------------------------------------------------------------------------------------";
	token_no++;
}



void Tokens::fun_5()
{
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t ---------------------------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<"\n\t\t\t\t\t\t\t\t      ___________"<<endl;
	cout<<"\t\t\t\t\t\t\t\t     |           |"<<endl;
	cout<<"\t\t\t\t\t\t\t\t     |  "<<Bankname<<" Bank |"<<endl;
	cout<<"\t\t\t\t\t\t\t\t     |___________|"<<endl<<endl;
	cout<<"\t\t\t\t\t\t\t\t    -Funds Transfer- "<<endl;
	cout<<endl<<"\t\t\t\t\t\t\t\t      Token No: "<<token_no<<endl<<endl;
	cout<<"\t\t\t\t\t\t\t      Average Wait Time: "<<get_waittime()<<endl<<endl;
	cout<<"\t\t\t\t\t\t\t\t       "<<__DATE__<<endl<<endl;
	cout<<"\t\t\t\t\t\t\t\t        "<<__TIME__<<endl;
	cout<<endl<<"\t\t\t\t\t\t\t     Thank You For Visiting HBL Bank"<<endl<<endl<<"\t\t\t\t\t\t\t\t    Powered By WaveTech";
	cout<<"\n\n\t\t ---------------------------------------------------------------------------------------------------------------------------------";
	token_no++;
}



void Tokens::fun_6()
{
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t ---------------------------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<"\n\t\t\t\t\t\t\t\t      ___________"<<endl;
	cout<<"\t\t\t\t\t\t\t\t     |           |"<<endl;
	cout<<"\t\t\t\t\t\t\t\t     |  "<<Bankname<<" Bank |"<<endl;
	cout<<"\t\t\t\t\t\t\t\t     |___________|"<<endl<<endl;
	cout<<"\t\t\t\t\t\t\t\t      -Pay Order- "<<endl;
	cout<<endl<<"\t\t\t\t\t\t\t\t      Token No: "<<token_no<<endl<<endl;
	cout<<"\t\t\t\t\t\t\t      Average Wait Time: "<<get_waittime()<<endl<<endl;
	cout<<"\t\t\t\t\t\t\t\t       "<<__DATE__<<endl<<endl;
	cout<<"\t\t\t\t\t\t\t\t        "<<__TIME__<<endl;
	cout<<endl<<"\t\t\t\t\t\t\t     Thank You For Visiting HBL Bank"<<endl<<endl<<"\t\t\t\t\t\t\t\t    Powered By WaveTech";
	cout<<"\n\n\t\t ---------------------------------------------------------------------------------------------------------------------------------";
	token_no++;
}

int main()
{
	int choice=0,i=0;
	
	while(1)
	{
		
	system("cls");
	
	Tokens T[i];
	cout<<endl<<"\t\t\t\t __________________________________________________________________________________________________________"<<endl<<endl;
	cout<<"\t\t\t\t\t\t\t\t         "<<T[i].Bankname<<" Bank Token System"<<endl;
	cout<<endl<<"\t\t\t\t __________________________________________________________________________________________________________"<<endl<<endl<<endl<<endl<<endl;
	
	
    cout<<"\t\t\t\t\t\t   Account Creation (1)    \t\t\tBill Payment (2)    "<<endl<<endl<<endl;
    cout<<"\t\t\t\t\t\t    Cash Withdrawl (3)     \t\t\tCash Deposit (4)    "<<endl<<endl<<endl;
    cout<<"\t\t\t\t\t\t    Funds Transfer (5)     \t\t\t  Pay Order (6)     "<<endl<<endl<<endl;
    cout<<"\t\t\t\t\t\t\t\t                Exit (0)       "<<endl;
    cout<<"\n\n\t\t\t\t\t\t\t\t         Enter Your Choice: ";
    
	cin>>choice;
	switch(choice)
	{
		case 0 :
			exit(0);
		case 1:
			T[i].fun_1();
			break;
		case 2:
			T[i].fun_2();
		break;
		case 3:
			T[i].fun_3();
			break;
		case 4:
			T[i].fun_4();
			break;
		case 5:
			T[i].fun_5();
			break;
		case 6:
			T[i].fun_6();
			break;
		default:
			system("cls");
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t     ";
			cout<<"Error: Invalid Input!";
	}
	i++;
	Sleep(3000);
    }
    
	return 0;
}
