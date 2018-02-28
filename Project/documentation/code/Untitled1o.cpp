#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<student.h>
using namespace std;

int mainmenu()
{
	int c;
	cout<<"\n\t:::::::::::::::MAIN MENU::::::::::::::::\n";
	cout<<"\n\t1.Admin mode\t2.Student mode\t3.Exit\n";
	cout<<"\n\t\tEnter your choice:   ";
	cin>>c;
	return c;
}
int st_menu()
{
	int c;
	cout<<"\n\t::::::::::STUDENT::::::::\n";
	cout<<"\n\t1.See list of colleges\n\t2.Enter options\n\t3.Register\n\t\4.Return\n";
	cin>>c;
	return c;
}
void admin()
{
	cout<<"\n\t......ADMIN LOGIN.......\n";
}
void user()
{
	//cout<<"\n\t......STUDENT LOGIN........\n";
	student st_obj;
	fstream stfile;
	stfile.open("STUDENT.DAT",ios::ate|ios::in|ios::out|ios::binary);
	stfile.seekp(0,ios::beg);
	int c=st_menu();
	//do
	//{
		system("cls");
		switch(c)
		{
			case 1:st_obj.see_clg_list();break;
			case 2:st_obj.options();break;
			case 3:st_obj.st_register();break;
			case 4:break;
		}
	//}
	stfile.write((char *) & st_obj,sizeof st_obj);

}

int main()
{
	int i;
	cout<<"\n\t******************************************************\n";
	cout<<"\t.......WELCOME TO UNIVERSITY ALLOCATION SYSTEM..........\n";
	cout<<"\t******************************************************\n";
	i=mainmenu();
	do
	{
		system("cls");
		switch(i)
		{
			case 1:	admin();
					break;
			case 2: user();
					break;
			case 3: //exit(0);
					exit(EXIT_SUCCESS);
		}
		system("cls");
		i=mainmenu();
	}while(i<3);
	return 0;
}
