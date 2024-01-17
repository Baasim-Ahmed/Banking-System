 #include <iostream>
#include <windows.h>
#include <fstream>
using namespace std;




class Bank
{
	protected:
		string name;
		long int number;
		string address;
		int branch_no;
	public:
		Bank(string name,double number,string address,int branch_no):name(name),number(number),address(address),branch_no(branch_no){}
		
		void setName(string);
		
		string getName();
		
		void setNumber(double);
		
		double getNumber();
		
		void setAddress(string);
		
		string getAddress();
		
		void setBranchNo(int);
		
		int getBranchNo();
		
		void Print_Details();
		
};




class Person
{
	private:
		string name;
		string address;
		string email;
	public:
		Person(string name , string address , string email):name(name),address(address),email(email){}
		
		void setName(string);
		
		string getName();
		
		void setAddress(string);
		
		string getAddress();
		
		void setEmail(string);
		
		string getEmail();
};








class CashWithdrawl
{
	private:
		string time,date;
		double amount;
	public:
		void Withdrawl();
};




class CashDeposit
{
	private:
		double amount;
		string time;
		string date;
	public:
		void deposit();
};





class FundsTransfer
{
	private:
		
	public:
		
};







class Account
{
	private:
		double balance;
		int number;
		string creation_time;
		string creation_date;
	public:
		static int temp;
		Account(double balance):balance(balance)
		{
			temp++;
			number = temp;
			creation_time = __TIME__;
			creation_date = __DATE__;
		}
		
		int getnumber()
		{
			return number;
		}
		
		CashWithdrawl cashwithdrawl;
		
		CashDeposit cashdeposit;
		
		string get_creationtime();
		
		string get_creationdate();
		
		void setBalance(double);
		
		double getBalance();
};

int Account::temp = 1223;





class BillPayment
{
	private:
		string time;
		string date;
		double amount;
		string address;     // -> Bill payer's address //
		int number;
	public:		
		void make_payment()
		{
			time = __TIME__;
			date = __DATE__;
			double amount,amount_returned;
			system("cls");
			cout<<"\n\n    Bill Payment:- "<<endl;
	        cout<<"  ---------------------"<<endl<<endl;
			cout<<"    Enter bill number: ";
			cin>>number;
			cout<<"    Enter bill amount: ";
			cin>>this->amount;
			cout<<"    Enter your address: ";
			cin>>address;
			cout<<"    Enter amount paid to cashier: ";
			cin>>amount;
			if(amount >= this->amount)
			{
				amount_returned = amount - (this->amount);
				system("cls");
		        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"<<endl<<endl;
		        cout<<"\t\t\t\t\t\t\t\t\t\tYour bill has been paid! Amount returned: "<<amount_returned;
		        Sleep(3000);
				ofstream out("BillpaymentData.txt",ios::app|ios::binary);
				out.write(reinterpret_cast<char*>(this),sizeof(*this));
				out.close();
			}
			else
			{
				system("cls");
		        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"<<endl<<endl;
		        cout<<"\t\t\t\t\t\t\t\t Sorry: Your bill can not be paid as the given amount doesn't complete the required one!";
		        Sleep(4000);
			}
		}
};






class Customer:public Person
{
	private:
		Account account;
	public:
		Customer(string name , string address , string email , double balance):Person(name,address,email),account(balance)
		{
		}
		
		void Account_Creation();
		
		Account get_account()
		{
			return account;
		}
		
};




















int main()
{
	int choice=0 , choice2=0 , temp , acc_no;
	string name;
	Bank bank("HBL",03030573702,"R-184 Sec15A1 Bufferzone, Karachi",5);
	ofstream out("BankData.txt" , ios::out | ios::binary);
	out.write(reinterpret_cast<char*>(&bank) , sizeof(bank));
	out.close();
	
	Customer customer("Unknown","Unknown","Unknown",0.00);
	ifstream in;
	in.open("CustomerData.txt",ios::in | ios::binary);
	BillPayment billpayment;
	
	
	while(1)
	{
		system("cls");
    	cout<<"\t\t\t\t\t            _________________________________________________________________________________________________________________________________"<<endl<<endl;
		cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t "<<bank.getName()<<" Banking System"<<endl;
		cout<<"\t\t\t\t\t            _________________________________________________________________________________________________________________________________"<<endl<<endl;
		cout<<endl<<endl<<endl;
		cout<<"     ________________________"<<endl;
		cout<<"    |                        |"<<endl;
		cout<<"    |  1.Account Creation.   |"<<endl;
		cout<<"    |                        |"<<endl;
		cout<<"    |  2.Bill Payment.       |"<<endl;
		cout<<"    |                        |"<<endl;
		cout<<"    |  3.Cash Withdrawl.     |"<<endl;
		cout<<"    |                        |"<<endl;
		cout<<"    |  4.Cash Deposit.       |"<<endl;
		cout<<"    |                        |"<<endl;
		cout<<"    |  5.Funds Transfer.     |"<<endl;
		cout<<"    |                        |"<<endl;
		cout<<"    |  6.Bank Details.       |"<<endl;
		cout<<"    |                        |"<<endl;
		cout<<"    |  0.Exit.               |"<<endl;
		cout<<"    |________________________|"<<endl<<endl;
		cout<<"      Enter your choice: ";
		cin>>choice;
		
		switch(choice)
		{
			
			case 0:              // Case-> Exit. //
				system("cls");
				cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"<<endl<<endl;
			    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t     Thank You! \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"<<endl<<endl;
				exit(0);
			break;
			
			
			case 1:              // Case-> Account_Creation. //
				customer.Account_Creation();
			break;
			
			case 2:              // Case-> Bill_Payment. //
				billpayment.make_payment();
			break;
			
			case 3:              // Case-> Cash_Withdrawl. //
			    customer.get_account().cashwithdrawl.Withdrawl();
			break;
			
		    case 4:              // Case-> Cash_Deposit. //
		    	customer.get_account().cashdeposit.deposit();
		    break;
		    
		    case 5:              // Case-> Funds_Transfer. //
		        
		    break;
		    
		    case 6:              // Case-> Bank_Details. //
		    	system("cls");
	            cout<<"\n\n    Bank Details:- "<<endl;
	            cout<<"  ----------------------"<<endl<<endl;
		    	cout<<"    1. Bank Info."<<endl;
		    	cout<<"    2. Update Details."<<endl;
		    	cout<<"    3. No of customers."<<endl;
		    	cout<<"    0. Go Back."<<endl;
		    	cout<<"    Enter your choice: ";
		    	cin>>choice2;
		    	
		    	switch(choice2)
		    	{
		    		
		    		case 0:
		    		break;
		    		
		    		case 1:
		    			bank.Print_Details();
		    		break;
		    		
		    		case 2:
		    			system("cls");
	                    cout<<"\n\n    Update Details:- "<<endl;
	                    cout<<"  ----------------------"<<endl<<endl;
		    	        cout<<"    1. Set Name."<<endl;
		    	        cout<<"    2. Set Number."<<endl;
		    	        cout<<"    3. Set Address."<<endl;
		    	        cout<<"    4. Set Branch No."<<endl;
		    	        cout<<"    0. Go Back."<<endl;
		    	        cout<<"    Enter your choice: ";
		    	        cin>>choice2;
		    	        
		    	        switch(choice2)
		    	        {
		    	        	
		    	        	case 0:
		    	        	break;
		    	        	
		    	        	
		    	        	case 1:
		    	        		system("cls");
		    	        		cout<<endl<<"  Enter new name of bank: ";
		    	        		fflush(stdin);
		    	        		getline(cin,name);
		    	        		bank.setName(name);
		    	        		system("cls");
			                    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"<<endl<<endl;
		                        cout<<"\t\t\t\t\t\t\t\t\t\t\t The bank name has been updated successfully!";
		                        Sleep(2500);
		    	        	break;
		    	        	
		    	        	
		    	        	case 2:
		    	        		
		    	        		cout<<"Enter new number of bank: ";
		    	        		cin>>temp;
		    	        		bank.setNumber(temp);
		    	        		system("cls");
		                        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"<<endl<<endl;
		                        cout<<"\t\t\t\t\t\t\t\t\t\t\t The bank number has been updated successfully!";
		                        Sleep(2500);
		    	        	break;
		    	        	
		    	        	
		    	        	case 3:
		    	        		
		    	        	break;
		    	        	
		    	        	
		    	        	case 4:
		    	        		
		    	        	break;
		    	        	
		    	        	
		    	        	default:
		    	        		system("cls");
			                    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"<<endl<<endl;
			                    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t Error: Invalid Input";
			                    Sleep(2500);
						}
						break;
						
						
						case 3:
							system("cls");
							cout<<endl<<"    Number of Customers:- "<<endl;
							cout<<"  ------------------------"<<endl<<endl;
							
							system("pause");
						break;
				}
				
		    break;
		    
		    default:
		    	system("cls");
			    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"<<endl<<endl;
			    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t Error: Invalid Input";
			    Sleep(2500);
		}
		
		system("cls");
		
	}
	
	return 0;
	
}








// All Bank class functions //

void Bank::setName(string name)
{
	this->name = name;
}

string Bank::getName()
{
	return name;
}

void Bank::setNumber(double number)
{
	this->number = number;
}

double Bank::getNumber()
{
	return number;
}

void Bank::setAddress(string address)
{
	this->address = address;
}

string Bank::getAddress()
{
	return address;
}

void Bank::setBranchNo(int branch_no)
{
	this->branch_no = branch_no;
}

int Bank::getBranchNo()
{
	return branch_no;
}

void Bank::Print_Details()
{
	system("cls");
	cout<<endl<<endl<<"  Bank Name: "<<name<<endl;
	cout<<"  Number:    "<<number<<endl;
	cout<<"  Address:   "<<address<<endl;
	cout<<"  Branch No: "<<branch_no<<endl<<"  ";
	system("pause");
}








// All Person class functions //

void Person::setName(string name)
{
	this->name = name;
}

string Person::getName()
{
	return name;
}

void Person::setAddress(string address)
{
	this->address = address;
}

string Person::getAddress()
{
	return address;
}

void Person::setEmail(string email)
{
	this->email = email;
}

string Person::getEmail()
{
	return email;
}








// All Account class functions //

string Account::get_creationtime()
{
	return creation_time;
}

string Account::get_creationdate()
{
	return creation_date;
}

void Account::setBalance(double balance)
{
	this->balance = balance;
}

double Account::getBalance()
{
	return balance;
}








// All Customer class functions //

void Customer::Account_Creation()
{
	string name,address,email;
	double balance=0;
	system("cls");
	cout<<"\n\n    Account Creation:- "<<endl;
	cout<<"  ----------------------"<<endl<<endl;
	cout<<"    Enter your name: ";
	fflush(stdin);
	getline(cin,name);
	cout<<"    Enter your address: ";
	fflush(stdin);
    getline(cin,address);
	cout<<"    Enter your email: ";
    fflush(stdin);
	getline(cin,email);
	cout<<"    Enter depositing amount: ";
	cin>>balance;
	
	if(balance >= 500)
	{
	    setName(name);
	    setAddress(address);
	    setEmail(email);
	    account.setBalance(balance);
		system("cls");
		cout<<"\n\n   Congrats! Your account has been created!"<<endl<<endl;
		cout<<"    Here's your data:- "<<endl;
		cout<<"    Name: "<<getName()<<endl;
		cout<<"    Address: "<<getAddress()<<endl;
		cout<<"    Email: "<<getEmail()<<endl;
		cout<<"    Account number: "<<get_account().getnumber()<<endl;
		cout<<"    Current balance: "<<get_account().getBalance()<<endl<<"    ";
		system("pause");
		ofstream out("CustomerData.txt" , ios::app | ios::binary);
		out.write(reinterpret_cast<char*>(this) , sizeof(*this));
		out.close();
    }
	else
	{
	    system("cls");
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"<<endl<<endl;
	    cout<<"\t\t\t\t\t\t\t\t\t\t Sorry: Your account is not created! (Minimum balance should be equal to 500)";
		Sleep(2500);
	}
}





// CashWithdrawl class's function //

void CashWithdrawl::Withdrawl()
{
	string name;
	int found=0;
	double temp;
	
	Customer *cust;
	ifstream in("CustomerData.txt",ios::in | ios::binary);
	ofstream out("Tempupdate.txt",ios::out | ios::binary);
	
	time = __TIME__;
	date = __DATE__;
	system("cls");
	cout<<"\n\n    Cash Withdrawl:- "<<endl;
	cout<<"   -------------------"<<endl<<endl;
	cout<<"    Enter your name: ";
	fflush(stdin);
	getline(cin,name);
	while(in.read(reinterpret_cast<char*>(cust),sizeof(Customer)))
	{
	    if(name == cust->getName())
	    {
	        cout<<"    Enter withdrawl amount: ";
	        cin>>amount;
	        if(amount > cust->get_account().getBalance())
	        {
	        	cout<<"    Sorry: Your amount can not be withdrawl as it is exceeding your current balance!"<<endl<<"    ";
			}
			else
			{
				found = 1;
				temp = cust->get_account().getBalance() - amount;
				cust->get_account().setBalance(temp);
				cout<<"    Amount withdrawled successfully!"<<endl<<"    ";
			}
	        system("pause");
		}
		out.write(reinterpret_cast<char*>(cust) , sizeof(Customer));
    }
    in.close();
    out.close(); 
    if(!found)
    {
    	cout<<"    Your account has not found. Re-enter correct name!"<<endl<<"    ";
    	system("pause");
	}
	else
	{
		ofstream out("CustomerData.txt",ios::out | ios::binary);
		ifstream in("Tempupdate.txt",ios::in | ios::binary);
		while(in.read(reinterpret_cast<char*>(cust) , sizeof(Customer)))
		{
			out.write(reinterpret_cast<char*>(cust) , sizeof(Customer));
		}
		out.close();
		in.close();
	}
}





// CashDeposit class's function //

void CashDeposit::deposit()
{
	string name;
	int found=0;
	double temp;
	Customer *cust;
	ifstream in("CustomerData.txt",ios::in | ios::binary);
	ofstream out("Tempupdate.txt",ios::out | ios::binary);
	
	time = __TIME__;
	date = __DATE__;
	system("cls");
	cout<<"\n\n    Cash Deposit:- "<<endl;
	cout<<"   -------------------"<<endl<<endl;
	cout<<"    Enter your name: ";
	fflush(stdin);
	getline(cin,name);
	while(in.read(reinterpret_cast<char*>(cust),sizeof(Customer)))
	{
	    if(name == cust->getName())
	    {
	    	found = 1;
	        cout<<"    Enter deposit amount: ";
	        cin>>amount;
	        temp = amount + cust->get_account().getBalance();
	        cust->get_account().setBalance(temp);
	        cout<<"    Amount deposited successfully!"<<endl<<"    ";
	        system("pause");
		}
		out.write(reinterpret_cast<char*>(cust) , sizeof(Customer));
    }
    in.close();
    out.close();
    if(!found)
    {
    	cout<<"    Your account has not found. Re-enter correct name!"<<endl<<"    ";
    	system("pause");
	}
	else
	{
		ofstream out("CustomerData.txt",ios::out | ios::binary);
		ifstream in("Tempupdate.txt",ios::in | ios::binary);
		while(in.read(reinterpret_cast<char*>(cust) , sizeof(Customer)))
		{
			out.write(reinterpret_cast<char*>(cust) , sizeof(Customer));
		}
		out.close();
		in.close();
	}
}
