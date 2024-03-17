#include"hospital.h"

int main()
{
	SetConsoleTitle("Hospital Management System");
	// Set Full Screen
	system("mode con COLS=700");
    ShowWindow(GetConsoleWindow(),SW_MAXIMIZE);
	cover();
	welcomeFtLoading();  
	while(1)
	{
		char username[25];
		char pwd[30];
		cover();
		loginAcc();
		
		DrawRectangle(40, 17, 90, 13, 6);
		DrawRectangle(62, 21, 44, 1, 2);	
		gotoxy(68,22); foreColor(4);
		cout<<"Username : "; 
		DrawRectangle(62, 25, 44, 1, 2);
		gotoxy(68,26); foreColor(4);
		cout<<"Password : ";
		gotoxy(79,22); foreColor(4);
		while(true)
		{
			inputLetter(username);
			if(!strcmp(username, "\0"))
			{
				continue;
			}
			else
			{
				break;
			}
		}
		gotoxy(79,26); foreColor(4);
		while(true)
		{
			hidePassword(pwd);
			if(!strcmp(pwd, "\0"))
			{
				continue;
			}
			else
			{
				break;
			}
		}	
		if(!strcmp(username, "Chanthou") && !strcmp(pwd, "2003"))
		{
			gotoxy(75,29); foreColor(2);
			cout<<"[ LOGIN SUCCESS ]";
			delay(800);
			system("cls");
			Hospital::MainMenu();
		}
		else
		{
			gotoxy(80,29); foreColor(4);
			cout<<"Error !!!";
			delay(700);
			gotoxy(68,29); foreColor(4);
			cout<<"[ Invalid password or username ]";
			delay(1000);
			system("cls");
		}
	}

	return 0;
}