#include<iostream>
#include<stdlib.h>
using namespace std;

class student
{

	int st_rank,regno;

	public:
	student()
	{	regno=0;}
	void see_clg_list(){};
	void options(){};
	void st_register();
	void get_clg(){};
};

void student::st_register()
{
	regno++;
	int htno,rnk;
	char name[20],dob[9],st_pass[7],ch;
	cout.setf(ios::left, ios::adjustfield);
	cout.width(30);
	cout<<"\nName: ";
	cin.getline(name,20);
	cout.width(30);
	cout<<"\nDate of Birth[dd mm yyyy]:  ";
 	cin.getline(dob,9);
	cout.width(30);
	cout<<"\nHall Ticket number:   ";
	cin>>htno;
	cout.width(30);
	cout<<"\nEAMCET RANK:  ";
	cin>>rnk;
	st_rank=rnk;
	cout.width(30);
	cout<<"\nPASSWORD:";
	cin.get(ch);
	cin.getline(st_pass,7);
	system("cls");
	cout<<"\n\n\tYou have registered successfully!.........\n\n\n\t\t  ID\t:";
	cout.setf(ios::right, ios::adjustfield);
	cout.fill('0');
	cout.width(4);
	cout<<regno<<endl<<endl<<endl;
    cout<<"\t.......Press enter to go to login page.......\n";
    cout.fill(' ');
    cin.get(ch);
    if(ch=='\n')
    {
        system("cls");
        return;
    }
}

int main()
{
	student s,k;
	s.st_register();
	k.st_register();
	return 0;
}


