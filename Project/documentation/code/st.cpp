#include<iostream>
#include<stdlib.h>
using namespace std;

int regno=0;
class student;
class college
{
	public:
	char *clg_name;
	int clg_code;
	int seats[5];

	college(){}
	college(char *n,int c)
	{
		clg_name=n;
		clg_code=c;
		for(int i=0;i<5;i++)
			seats[i]=0;
	}
	friend class student;
};

class student
{

	int st_rank,option[5];

	public:
	student()
	{}
	void clg_list();
	void options();
	void st_show();
	void st_register();
	void get_clg(){};
};


void student::clg_list()
{
	char ch;
	system("cls");
	cout<<"\n\n\t\t<<<<<<<<<<<<<<<COLLEGE LIST>>>>>>>>>>>>>>>>\n\n\n";
	cout<<"\t\tCOLLEGE NAME\t\tCOLLEGE CODE\n\n";
	for(int i=0;i<5;i++)
	{
		cout<<"\t\t "<<clg_obj[i].clg_name<<"\t\t\t\t"<<clg_obj[i].clg_code<<endl<<endl;
	}
	cout<<"\n\n\t.......Press enter to go to options.......\n";
    cin.get(ch);
    if(ch=='\n')
    {
        system("cls");
        return;
    }
}

void student::st_show()
{
	system("cls");
	cout<<"\n\t\tRANK\t\t:"<<st_rank<<"\n\n\t\tTHE OPTIONS ARE\n\n";
	for(int i=0;i<5;i++)
	{
		cout<<endl<<"\t"<<i+1<<"\t"<<option[i]<<endl;
	}
}

void student::options()
{
	system("cls");
	int opt[5];
	char ch;
	cout<<"\n\n\t^^^^^^^^^^^___| OPTIONS ENTRY |___^^^^^^^^^^\n\n\n";
	for(int i=0;i<5;i++)
	{
		cout<<"Option "<<i+1<<"\t:";
		cin>>opt[i];
        option[i]=opt[i];
	}
	cin.get(ch);
}

void student::st_register()
{
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
	cout<<"\n\n\tYou have registered successfully!.........\n\n\n";
	//cout.setf(ios::right, ios::adjustfield);
	//cout.fill('0');
	//cout.width(4);
	//cout<<regno<<endl<<endl<<endl;
    cout<<"\t.......Press enter to go to options page.......\n";
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
    college clg_obj[5];
	clg_obj[0]=college("OU",1);
	clg_obj[1]=college("JNTU",2);
	clg_obj[2]=college("CBIT",3);
	clg_obj[3]=college("VASAVI",4);
	clg_obj[4]=college("MGIT",5);
    student s,k;
	s.st_register();
	s.clg_list();
	s.options();
	s.st_show();
	//k.st_register();
	return 0;
}


