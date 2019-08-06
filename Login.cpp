//Puchcharapoom Mangmool IT-1RA 6206021610111//
#include<iostream>
#include<string>
using namespace std ;
int main ()
{
	char m;
	string u,p,u1,p1;
	do{
	cout <<"///////////////MENU/////////////"<<endl;
	cout <<" 1.Register \n";
	cout <<" 2.login \n";
	cout <<" Q.Exit \n";
		cout << " Enter your choose Menu : ";
	   cin >> m;

	if(m=='1')
	{
		cout<<"*************Register***********\n";
		cout << " Input ueser name : ";
		cin >> u;
		cout << " Input Password : ";
		cin >> p;
	}else if(m=='2')
	{
		cout << "****************Login***********\n";
		cout << " Input ueser name : ";
		cin >> u1;
		cout << " Input Password : ";
		cin >> p1;
		if(u1==u || p1 == p)
		{
			cout <<" uesername or password correct ^__^\n";
		}
		else
		{
		do{
			cout <<" Uesrname or passsword incorrect please try again!!\n";
			cout << " Input ueser name : ";
		    cin >> u1;
		    cout << " Input Password : ";
		    cin >> p1;
		  }while(u1!=u || p1 != p);
		}
	}
	
	}while(m!='Q');
     return 0;
}