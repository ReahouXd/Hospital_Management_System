#include<iostream>
#include<conio.h>
#include"design.h"
#include"staff.h"
#include"nurse.h"
#include"doctor.h"
#include"patient.h"
#include"appointment.h"
#include"permissionStaff.h"
#include"permissionNurse.h"
#include"permissionDoctor.h"
#include"medicine.h"
#include"antheaderPlusPlus.h"
#include"antheaderInput.h"
using namespace std;
class Hospital
{
	public:
		static void MainMenu();
		static void Employee();
		static void Staff();
		static void Nurse();
		static void Doctor();
		static void Patient();
		static void patient();
		static void Appointment();
		static void Medicine();
		static void Room();
		static void RoomPatient();
		static void RoomNurse();
		static void RoomDoctor();
		static void Permission();
		static void PermissionStaff();
		static void PermissionNurse();
		static void PermissionDoctor();	
};

//int main()
//{
//	SetConsoleTitle("Hospital Management System");
//	// Set Full Screen
//	system("mode con COLS=700");
//    ShowWindow(GetConsoleWindow(),SW_MAXIMIZE);
//	cover();
//	welcomeFtLoading();  
//	while(1)
//	{
//		char username[25];
//		char pwd[30];
//		cover();
//		loginAcc();
//		
//		DrawRectangle(40, 17, 90, 13, 6);
//		DrawRectangle(62, 21, 44, 1, 2);	
//		gotoxy(68,22); foreColor(4);
//		cout<<"Username : "; 
//		DrawRectangle(62, 25, 44, 1, 2);
//		gotoxy(68,26); foreColor(4);
//		cout<<"Password : ";
//		gotoxy(79,22); foreColor(4);
//		while(true)
//		{
//			inputLetter(username);
//			if(!strcmp(username, "\0"))
//			{
//				continue;
//			}
//			else
//			{
//				break;
//			}
//		}
//		gotoxy(79,26); foreColor(4);
//		while(true)
//		{
//			hidePassword(pwd);
//			if(!strcmp(pwd, "\0"))
//			{
//				continue;
//			}
//			else
//			{
//				break;
//			}
//		}	
//		if(!strcmp(username, "Chanthou") && !strcmp(pwd, "2003"))
//		{
//			gotoxy(75,29); foreColor(2);
//			cout<<"[ LOGIN SUCCESS ]";
//			delay(800);
//			system("cls");
//			Hospital::MainMenu();
//		}
//		else
//		{
//			gotoxy(80,29); foreColor(4);
//			cout<<"Error !!!";
//			delay(700);
//			gotoxy(68,29); foreColor(4);
//			cout<<"[ Invalid password or username ]";
//			delay(1000);
//			system("cls");
//		}
//	}
//
//	return 0;
//}

void Hospital::MainMenu()
{
	int ch;
	do
	{
		cls();
		cover();
		styleHospital();
		ANT();
		foreColor(6);
		gotoxy(45, 18);
		cout<<"[1]. Manage Employee";
		gotoxy(45, 21);
	    cout<<"[2]. Manage Patient";
	    gotoxy(45, 24);
	    cout<<"[3]. Manage Medicine";
	    gotoxy(45, 27);
	    cout<<"[4]. Manage Room";
	    gotoxy(93, 18);
	    cout<<"[5]. Manage Permission";
	    gotoxy(93, 21);
	    cout<<"[6]. About Me";
	    gotoxy(93, 24);
	    cout<<"[7]. Exit Program";
	    gotoxy(93, 27);
	    cout<<"Enter Number(1-7) : "; 
		ch = inputNumber(); fflush(stdin); cin.clear();
	    switch(ch)
	    {
	    	case 1:
	    		{
	    			cls();
					Employee();
				}
				break;
			case 2:
	    		{
					cls();
	    			Patient();
				}
				break;
			case 3:
	    		{
	    			cls();
	    			Medicine();
				}
				break;
		
				break;
			case 4:
	    		{
	    			cls();
	    			Room();
				}
				break;
			case 5:
	    		{
	    			cls();
	    			Permission();
				}
				break;
			case 6:
	    		{
	    			system("cls");
	    			cover();
	    			foreColor(11);
	    			gotoxy(72,6);
	    			cout<<"______             ______";
	    			foreColor(6);
	    			gotoxy(78,6);
	    			cout<<"My Background";
	    			DrawRectangle(33, 9, 102, 20, 2);
	    			foreColor(5);
	    			gotoxy(44,12);
	    			cout<<"-    My name is Roeun Chanthou.";
	    			gotoxy(44,14);
	    			cout<<"-    I'm 20 years old.";
	    			gotoxy(44,16);
	    			cout<<"-    I am a second year student at Norton University.";
	    			gotoxy(44,18);
	    			cout<<"-    I have completed short course C/C++ at ANT Technology Training Center.";
	    			gotoxy(44,20);
	    			cout<<"-    My Telegram number : 097 848 3209";
	    			gotoxy(44,22);
	    			cout<<"-    My Facebook : Ly hu";
	    			gotoxy(44,24);
	    			cout<<"-    My Email : roeunchanthou03@gmail.com";
	    			foreColor(7);
					cout<<"\n\n\n\t\t\t\t\t\t\t\t<<<< Press Any Key back to [MENU] >>>>"<<endl;
					getch();
				}
				break;
			case 7:
	    		{
	    			cls();
	    			cover();
	    			thank();
	    			cls();
	    			cover();
	    			byebye();
	    			delay(1500);
	    			exit(0);
				}
				break;	
		}
	
		
	}while(true);
	
}


void Hospital::Employee()
{
	int ch;
	while(true)
	{
		cls();
		cover();
		styleEmployee();
		foreColor(1);
		ANT();
		foreColor(7);
		gotoxy(50, 19);
	    cout<<"[1]. Staff data";
	    gotoxy(50, 22);
	    cout<<"[2]. Nurse data";
	    gotoxy(50, 25);
	    cout<<"[3]. Doctor data";
	    gotoxy(98, 19);
	    cout<<"[4]. Back to Menu";
	    gotoxy(98, 22);
	    cout<<"[5]. Exit Program";
	    gotoxy(95, 25);
	    cout<<"Enter Number(1-5) : ";
		ch = inputNumber(); fflush(stdin); cin.clear();

	    switch(ch)
	    {
	    	case 1:
	    		{
	    			cls();
					Staff();
				}
				break;
			case 2:
	    		{
					cls();
					Nurse();
				}
				break;
			case 3:
	    		{
	    			cls();
	    			Doctor();
				}
				break;
		
				break;
			case 4:
	    		{
	    			cls();
	    			MainMenu();
				}
				break;
			case 5:
				{			
	    			cls();
	    			cover();
	    			thank();
	    			cls();
	    			cover();
	    			byebye();
	    			delay(1500);
	    			exit(0);
				}
				break;
		}
	}
}

void Hospital::Staff()
{
	int choose;
	
	while(true)
	{
		cls();
		cover();
		staffMenu();
		foreColor(2);
		ANT();
		foreColor(2);
		gotoxy(74, 14);
		cout<<"....Staff Data....";
		foreColor(6);
		gotoxy(73, 17);
		cout<<" [1].  Insert Staff";
		gotoxy(73, 19);
		cout<<" [2].  View Staff";
		gotoxy(73, 21);
		cout<<" [3].  Search Staff";
		gotoxy(73, 23);
		cout<<" [4].  Update Staff";
		gotoxy(73, 25);
		cout<<" [5].  Delete Staff";
		gotoxy(73, 27);
		cout<<" [6].  Back to MENU";
		foreColor(9);
		gotoxy(74, 30);
		cout<<" Enter Number : "; choose = inputNumber();
		switch(choose)
		{
			case 1:	
				do
				{
					cls();
					cover();
					gotoxy(72, 5);
					foreColor(2);
					cout<<".... Enter Staff Data ....";
					InsertStaff();
					cls();
					cover();
					chooseInsert();
				}while(getch() != 27);
				break;
			case 2:
					cls();
					cover();
					gotoxy(72,6);
					foreColor(3);
					cout<<"... Staff Information ...";
					cout<<endl<<endl;
					ShowStaff();
					foreColor(2);
					cout<<"\n\n\t\t\t\t\t\t\t      <<<< Press Any Key back to [MENU STAFF] >>>>"<<endl;
					getch();
				break;
			case 3:
				do
				{
					cls();
					cover();
					ShowStaff();
					SearchStaff();
					cls();
					cover();
					chooseSearch();
				}while(getch() != 27);
				
				break;
			case 4:
				do
				{
					cls();
					cover();
					ShowStaff();
					UpdateStaff();
					cls();
					cover();
					chooseUpdate();
				}while(getch() != 27);
				
				break;
			case 5:
				do
				{
					cls();
					cover();
					foreColor(2);
					ShowStaff();
					DeleteStaff();
					cls();
					cover();
					chooseDelete();
				}while(getch() != 27);
				break;
			case 6:
				Employee();
				break;
			default:
				break;
		}
	}	
}

void Hospital::Nurse()
{
	int choose;
	
	while(true)
	{
		cls();
		cover();
		nurseMenu();
		foreColor(3);
		ANT();
		foreColor(2);
		gotoxy(74, 14);
		cout<<"....Nurse Data....";
		foreColor(6);
		gotoxy(73, 17);
		cout<<" [1].  Insert Nurse";
		gotoxy(73, 19);
		cout<<" [2].  View Nurse";
		gotoxy(73, 21);
		cout<<" [3].  Search Nurse";
		gotoxy(73, 23);
		cout<<" [4].  Update Nurse";
		gotoxy(73, 25);
		cout<<" [5].  Delete Nurse";
		gotoxy(73, 27);
		cout<<" [6].  Back to MENU";
		foreColor(9);
		gotoxy(74, 30);
		cout<<" Enter Number : ";
		choose = inputNumber();
		switch(choose)
		{
			case 1:	
				do
				{
					cls();
					cover();
					gotoxy(72, 5);
					foreColor(2);
					cout<<".... Enter Nurse Data ....";
					InsertNurse();
					cls();
					cover();
					chooseInsert();
				}while(getch() != 27);
				break;
			case 2:
					cls();
					cover();
					gotoxy(72,6);
					foreColor(3);
					cout<<"... Nurse Information ...";
					cout<<endl<<endl;
					ShowNurse();
					foreColor(2);
					cout<<"\n\n\t\t\t\t\t\t\t      <<<< Press Any Key back to [MENU NURSE] >>>>"<<endl;
					getch();
				break;
			case 3:
				do
				{
					cls();
					cover();
					ShowNurse();
					SearchNurse();
					cls();
					cover();
					chooseSearch();
				}while(getch() != 27);
				
				break;
			case 4:
				do
				{
					cls();
					cover();
					ShowNurse();
					UpdateNurse();
					cls();
					cover();
					chooseUpdate();
				}while(getch() != 27);
				
				break;
			case 5:
				do
				{
					cls();
					cover();
					foreColor(2);
					ShowNurse();
					DeleteNurse();
					cls();
					cover();
					chooseDelete();
				}while(getch() != 27);
				break;
			case 6:
				Employee();
				break;
			default:
				break;
		}
	}	
}

void Hospital::Doctor()
{
	int choose;
	
	while(true)
	{
		cls();
		cover();
		doctorMenu();
		foreColor(4);
		ANT();
		foreColor(2);
		gotoxy(74, 14);
		cout<<"....Doctor Data....";
		foreColor(6);
		gotoxy(73, 17);
		cout<<" [1].  Insert Doctor";
		gotoxy(73, 19);
		cout<<" [2].  View Doctor";
		gotoxy(73, 21);
		cout<<" [3].  Search Doctor";
		gotoxy(73, 23);
		cout<<" [4].  Update Doctor";
		gotoxy(73, 25);
		cout<<" [5].  Delete Doctor";
		gotoxy(73, 27);
		cout<<" [6].  Back to MENU";
		foreColor(9);
		gotoxy(74, 30);
		cout<<" Enter Number : ";
		choose = inputNumber();
		switch(choose)
		{
			case 1:	
				do
				{
					cls();
					cover();
					gotoxy(72, 5);
					foreColor(9);
					cout<<".... Enter Doctor Data ....";
					InsertDoctor();
					cls();
					cover();
					chooseInsert();
				}while(getch() != 27);
				break;
			case 2:
					cls();
					cover();
					gotoxy(72,6);
					foreColor(3);
					cout<<"... Doctor Information ...";
					cout<<endl<<endl;
					ShowDoctor();
					foreColor(2);
					cout<<"\n\n\t\t\t\t\t\t\t      <<<< Press Any Key back to [MENU DOCTOR] >>>>"<<endl;
			getch();
				break;
			case 3:
				do	
				{
					cls();
					cover();
					ShowDoctor();
					SearchDoctor();	
					cls();
					cover();
					chooseSearch();
				}while(getch() != 27);			
				break;
			case 4:
				do
				{
					cls();
					cover();
					ShowDoctor();
					UpdateDoctor();
					cls();
					cover();
					chooseUpdate();
				}while(getch() != 27);
				
				break;
			case 5:
				do
				{
					cls();
					cover();
					foreColor(2);
					ShowDoctor();
					DeleteDoctor();
					cls();
					cover();
					chooseDelete();
				}while(getch() != 27);
				break;
			case 6:
				Employee();
				break;
			default:
				break;
		}
	}	
}

void Hospital::Patient()
{
	int ch;
	while(true)
	{
		cls();
		cover();
		patientMenu();
		foreColor(5);
		ANT();
		foreColor(2);
		gotoxy(75, 15);
		cout<<"[1]. Patient";
		gotoxy(75, 18);
	    cout<<"[2]. Appointment";
	    gotoxy(75, 21);
		cout<<"[3]. Back to MENU";
		gotoxy(75, 24);
	    cout<<"[4]. Exit Program";
	    gotoxy(73, 27);
	    cout<<"Enter Number(1-4) : ";
		ch = inputNumber(); fflush(stdin); cin.clear();

	    switch(ch)
	    {
	    	case 1:
	    		{
	    			cls();
					patient();
				}
				break;
			case 2:
	    		{
					cls();
					Appointment();
				}
				break;
			case 3:
	    		{
	    			cls();
	    			MainMenu();
				}
				break;
			case 4:
	    		{	    			
	    			cls();
	    			cover();
	    			thank();
	    			cls();
	    			cover();
	    			byebye();
	    			delay(1500);
	    			exit(0);
				}
				break;
		}
	}
}

void Hospital::patient()
{
	int choose;
	
	while(true)
	{
		cls();
		cover();
		MenuPatient();
		foreColor(6);
		ANT();
		foreColor(2);
		gotoxy(74, 14);
		cout<<"....Patient Data....";
		foreColor(6);
		gotoxy(73, 17);
		cout<<" [1].  Insert Patient";
		gotoxy(73, 19);
		cout<<" [2].  View Patient";
		gotoxy(73, 21);
		cout<<" [3].  Search Patient";
		gotoxy(73, 23);
		cout<<" [4].  Update Patient";
		gotoxy(73, 25);
		cout<<" [5].  Delete Patient";
		gotoxy(73, 27);
		cout<<" [6].  Back to MENU";
		foreColor(9);
		gotoxy(74, 30);
		cout<<" Enter Number : ";
		choose = inputNumber();
		switch(choose)
		{
			case 1:	
				do
				{
					cls();
					cover();
					gotoxy(72, 5);
					foreColor(6);
					cout<<".... Enter Patient Data ....";
					InsertPat();
					cls();
					cover();
					chooseInsert();
				}while(getch() != 27);
				break;
			case 2:
					cls();
					cover();
					gotoxy(72,6);
					foreColor(3);
					cout<<"... Patient Information ...";
					cout<<endl<<endl;
					ShowPat();
					foreColor(2);
					cout<<"\n\n\t\t\t\t\t\t\t      <<<< Press Any Key back to [MENU PATIENT] >>>>"<<endl;
			getch();
				break;
			case 3:
				do	
				{
					cls();
					cover();
					ShowPat();
					SearchPat();	
					cls();
					cover();
					chooseSearch();
				}while(getch() != 27);			
				break;
			case 4:
				do
				{
					cls();
					cover();
					ShowPat();
					UpdatePat();
					cls();
					cover();
					chooseUpdate();
				}while(getch() != 27);
				
				break;
			case 5:
				do
				{
					cls();
					cover();
					foreColor(2);
					ShowPat();
					DeletePat();
					cls();
					cover();
					chooseDelete();
				}while(getch() != 27);
				break;
			case 6:
				Patient();
				break;
		}
	}
}

void Hospital::Appointment()
{
	int choose;
	
	while(true)
	{
		cls();
		cover();
		MenuAppointment();
		foreColor(6);
		ANT();
		foreColor(2);
		gotoxy(72, 14);
		cout<<"....Appointment Data....";
		foreColor(6);
		gotoxy(70, 17);
		cout<<" [1].  Insert Appointment";
		gotoxy(70, 19);
		cout<<" [2].  View Appointment";
		gotoxy(70, 21);
		cout<<" [3].  Search Appointment";
		gotoxy(70, 23);
		cout<<" [4].  Update Appointment";
		gotoxy(70, 25);
		cout<<" [5].  Delete Appointment";
		gotoxy(70, 27);
		cout<<" [6].  Back to MENU";
		foreColor(9);
		gotoxy(73, 30);
		cout<<" Enter Number : ";
		choose = inputNumber();
		switch(choose)
		{
			case 1:	
				do
				{
					cls();
					cover();
					gotoxy(68, 5);
					foreColor(2);
					cout<<".... Enter Appointment Data ....";
					Insertapp();
					cls();
					cover();
					chooseInsert();
				}while(getch() != 27);
				break;
			case 2:
					cls();
					cover();
					gotoxy(68,6);
					foreColor(3);
					cout<<"... Appointment Information ...";
					cout<<endl<<endl;
					Showapp();
					foreColor(2);
					cout<<"\n\n\t\t\t\t\t\t\t   <<<< Press Any Key back to [MENU APPOINTMENT] >>>>"<<endl;
			getch();
				break;
			case 3:
				do	
				{
					cls();
					cover();
					Showapp();
					Searchapp();	
					cls();
					cover();
					chooseSearch();
				}while(getch() != 27);			
				break;
			case 4:
				do
				{
					cls();
					cover();
					Showapp();
					Updateapp();
					cls();
					cover();
					chooseUpdate();
				}while(getch() != 27);
				
				break;
			case 5:
				do
				{
					cls();
					cover();
					foreColor(2);
					Showapp();
					Deleteapp();
					cls();
					cover();
					chooseDelete();
				}while(getch() != 27);
				break;
			case 6:
				Patient();
				break;
		}
	}
}
void Hospital::Medicine()
{
	int choose;
	
	while(true)
	{
		cls();
		cover();
		medicineMenu();
		foreColor(6);
		ANT();
		foreColor(2);
		gotoxy(74, 14);
		cout<<"....Medicine Data....";
		foreColor(6);
		gotoxy(73, 17);
		cout<<" [1].  Insert Medicine";
		gotoxy(73, 19);
		cout<<" [2].  View Medicine";
		gotoxy(73, 21);
		cout<<" [3].  Search Medicine";
		gotoxy(73, 23);
		cout<<" [4].  Update Medicine";
		gotoxy(73, 25);
		cout<<" [5].  Delete Medicine";
		gotoxy(73, 27);
		cout<<" [6].  Back to MENU";
		foreColor(9);
		gotoxy(74, 30);
		cout<<" Enter Number : ";
		choose = inputNumber();
		switch(choose)
		{
			case 1:	
				do
				{
					cls();
					cover();
					gotoxy(72, 5);
					foreColor(9);
					cout<<".... Enter Medicine Data ....";
					InsertMed();
					cls();
					cover();
					chooseInsert();
				}while(getch() != 27);
				break;
			case 2:
					cls();
					cover();
					gotoxy(72,6);
					foreColor(3);
					cout<<"... Medicine Information ...";
					cout<<endl<<endl;
					ShowMed();
					foreColor(2);
					cout<<"\n\n\t\t\t\t\t\t\t      <<<< Press Any Key back to [MENU MEDICINE] >>>>"<<endl;
					getch();
				break;
			case 3:
				do	
				{
					cls();
					cover();
					ShowMed();
					SearchMed();	
					cls();
					cover();
					chooseSearch();
				}while(getch() != 27);			
				break;
			case 4:
				do
				{
					cls();
					cover();
					ShowMed();
					UpdateMed();
					cls();
					cover();
					chooseUpdate();
				}while(getch() != 27);
				
				break;
			case 5:
				do
				{
					cls();
					cover();
					foreColor(2);
					ShowMed();
					DeleteMed();
					cls();
					cover();
					chooseDelete();
				}while(getch() != 27);
				break;
			case 6:
				MainMenu();
				break;
		}
	}
}

void Hospital::Room()
{
	int ch;
	while(true)
	{
		cls();
		cover();
		RoomMenu();
		foreColor(8);
		ANT();
		foreColor(7);
		gotoxy(75, 15);
		cout<<"[1]. Room Patient Stay";
		gotoxy(75, 18);
		cout<<"[2]. Room Nurse";
	    gotoxy(75, 21);
	    cout<<"[3]. Room Doctor";
	    gotoxy(75, 24);
		cout<<"[4]. Back to MENU";
		gotoxy(75, 27);
	    cout<<"[5]. Exit Program";
	    gotoxy(73, 30);
	    cout<<"Enter Number(1-4) : ";
		ch = inputNumber(); fflush(stdin); cin.clear();

	    switch(ch)
	    {
	    	case 1:
	    		{
	    			cls();
					RoomPatient();
				}
				break;
			case 2:
	    		{
					cls();
					RoomNurse();
				}
				break;
			case 3:
	    		{
	    			cls();
	    			RoomDoctor();
				}
				break;
			case 4:
	    		{
	    			cls();
	    			MainMenu();
				}
				break;
			case 5:
	    		{	    			
	    			cls();
	    			cover();
	    			thank();
	    			cls();
	    			cover();
	    			byebye();
	    			delay(1500);
	    			exit(0);
				}
				break;
		}
	}
}

void Hospital::RoomPatient()
{
	int choose;
	
	while(true)
	{
		cls();
		cover();
		RoomPatientMenu();
		foreColor(9);
		ANT();
		foreColor(2);
		gotoxy(72, 14);
		cout<<"....Patient Room Data....";
		foreColor(6);
		gotoxy(73, 17);
		cout<<" [1].  Insert Room";
		gotoxy(73, 19);
		cout<<" [2].  View Room";
		gotoxy(73, 21);
		cout<<" [3].  Search Room";
		gotoxy(73, 23);
		cout<<" [4].  Update Room";
		gotoxy(73, 25);
		cout<<" [5].  Delete Room";
		gotoxy(73, 27);
		cout<<" [6].  Back to MENU";
		foreColor(9);
		gotoxy(74, 30);
		cout<<" Enter Number : ";
		choose = inputNumber();
		switch(choose)
		{
			case 1:	
				do
				{
					cls();
					cover();
					gotoxy(72, 5);
					foreColor(2);
					cout<<".... Enter Medicine Data ....";
					InsertDoctor();
					cls();
					cover();
					chooseInsert();
				}while(getch() != 27);
				break;
			case 2:
//					cls();
//					cover();
//					gotoxy(72,6);
//					foreColor(3);
//					cout<<"... Medicine Information ...";
//					cout<<endl<<endl;
//					ShowDoctor();
//					foreColor(2);
//					cout<<"\n\n\t\t\t\t\t\t\t      <<<< Press Any Key back to [MENU MEDICINE] >>>>"<<endl;
			getch();
				break;
			case 3:
				do	
				{
//					cls();
//					cover();
//					ShowDoctor();
//					SearchDoctor();	
//					cls();
//					cover();
//					chooseSearch();
				}while(getch() != 27);			
				break;
			case 4:
				do
				{
//					cls();
//					cover();
//					ShowDoctor();
//					UpdateDoctor();
//					cls();
//					cover();
//					chooseUpdate();
				}while(getch() != 27);
				
				break;
			case 5:
				do
				{
//					cls();
//					cover();
//					foreColor(2);
//					ShowDoctor();
//					DeleteDoctor();
//					cls();
//					cover();
//					chooseDelete();
				}while(getch() != 27);
				break;
			case 6:
				cls();
				Room();
				break;
		}
	}
}

void Hospital::RoomNurse()
{
	int choose;
	
	while(true)
	{
		cls();
		cover();
		RoomNurseMenu();
		foreColor(10);
		ANT();
		foreColor(2);
		gotoxy(73, 14);
		cout<<"....Nurse Room Data....";
		foreColor(6);
		gotoxy(73, 17);
		cout<<" [1].  Insert Room";
		gotoxy(73, 19);
		cout<<" [2].  View Room";
		gotoxy(73, 21);
		cout<<" [3].  Search Room";
		gotoxy(73, 23);
		cout<<" [4].  Update Room";
		gotoxy(73, 25);
		cout<<" [5].  Delete Room";
		gotoxy(73, 27);
		cout<<" [6].  Back to MENU";
		foreColor(9);
		gotoxy(74, 30);
		cout<<" Enter Number : ";
		choose = inputNumber();
		switch(choose)
		{
			case 1:	
				do
				{
					cls();
					cover();
					gotoxy(72, 5);
					foreColor(2);
					cout<<".... Enter Medicine Data ....";
					InsertDoctor();
					cls();
					cover();
					chooseInsert();
				}while(getch() != 27);
				break;
			case 2:
//					cls();
//					cover();
//					gotoxy(72,6);
//					foreColor(3);
//					cout<<"... Medicine Information ...";
//					cout<<endl<<endl;
//					ShowDoctor();
//					foreColor(2);
//					cout<<"\n\n\t\t\t\t\t\t\t      <<<< Press Any Key back to [MENU MEDICINE] >>>>"<<endl;
			getch();
				break;
			case 3:
				do	
				{
//					cls();
//					cover();
//					ShowDoctor();
//					SearchDoctor();	
//					cls();
//					cover();
//					chooseSearch();
				}while(getch() != 27);			
				break;
			case 4:
				do
				{
//					cls();
//					cover();
//					ShowDoctor();
//					UpdateDoctor();
//					cls();
//					cover();
//					chooseUpdate();
				}while(getch() != 27);
				
				break;
			case 5:
				do
				{
//					cls();
//					cover();
//					foreColor(2);
//					ShowDoctor();
//					DeleteDoctor();
//					cls();
//					cover();
//					chooseDelete();
				}while(getch() != 27);
				break;
			case 6:
				cls();
				Room();
				break;
		}
	}
}

void Hospital::RoomDoctor()
{
	int choose;
	
	while(true)
	{
		cls();
		cover();
		RoomDoctorMenu();
		foreColor(12);
		ANT();
		foreColor(2);
		gotoxy(72, 14);
		cout<<"....Doctor Room Data....";
		foreColor(6);
		gotoxy(73, 17);
		cout<<" [1].  Insert Room";
		gotoxy(73, 19);
		cout<<" [2].  View Room";
		gotoxy(73, 21);
		cout<<" [3].  Search Room";
		gotoxy(73, 23);
		cout<<" [4].  Update Room";
		gotoxy(73, 25);
		cout<<" [5].  Delete Room";
		gotoxy(73, 27);
		cout<<" [6].  Back to MENU";
		foreColor(9);
		gotoxy(74, 30);
		cout<<" Enter Number : ";
		choose = inputNumber();
		switch(choose)
		{
			case 1:	
				do
				{
					cls();
					cover();
					gotoxy(72, 5);
					foreColor(2);
					cout<<".... Enter Medicine Data ....";
					InsertDoctor();
					cls();
					cover();
					chooseInsert();
				}while(getch() != 27);
				break;
			case 2:
//					cls();
//					cover();
//					gotoxy(72,6);
//					foreColor(3);
//					cout<<"... Medicine Information ...";
//					cout<<endl<<endl;
//					ShowDoctor();
//					foreColor(2);
//					cout<<"\n\n\t\t\t\t\t\t\t      <<<< Press Any Key back to [MENU MEDICINE] >>>>"<<endl;
			getch();
				break;
			case 3:
				do	
				{
//					cls();
//					cover();
//					ShowDoctor();
//					SearchDoctor();	
//					cls();
//					cover();
//					chooseSearch();
				}while(getch() != 27);			
				break;
			case 4:
				do
				{
//					cls();
//					cover();
//					ShowDoctor();
//					UpdateDoctor();
//					cls();
//					cover();
//					chooseUpdate();
				}while(getch() != 27);
				
				break;
			case 5:
				do
				{
//					cls();
//					cover();
//					foreColor(2);
//					ShowDoctor();
//					DeleteDoctor();
//					cls();
//					cover();
//					chooseDelete();
				}while(getch() != 27);
				break;
			case 6:
				cls();
				Room();
				break;
		}
	}
}

void Hospital::Permission()
{
	int ch;
	while(true)
	{
		cls();
		cover();
		foreColor(8);
		MenuPermission();
		ANT();
		foreColor(7);
		gotoxy(73, 15);
		cout<<"[1]. Staff Permission";
		gotoxy(73, 18);
		cout<<"[2]. Nurse Permission";
	    gotoxy(73, 21);
	    cout<<"[3]. Doctor Permission";
	    gotoxy(73, 24);
		cout<<"[4]. Back to MENU";
		gotoxy(73, 27);
	    cout<<"[5]. Exit Program";
	    gotoxy(73, 30);
	    cout<<"Enter Number(1-4) : ";
		ch = inputNumber(); fflush(stdin); cin.clear();

	    switch(ch)
	    {
	    	case 1:
	    		{
	    			cls();
					PermissionStaff();
				}
				break;
			case 2:
	    		{
					cls();
					PermissionNurse();
				}
				break;
			case 3:
	    		{
	    			cls();
					PermissionDoctor();
				}
				break;
			case 4:
	    		{
	    			cls();
	    			MainMenu();
				}
				break;
			case 5:
	    		{	    			
	    			cls();
	    			cover();
	    			thank();
	    			cls();
	    			cover();
	    			byebye();
	    			delay(1500);
	    			exit(0);
				}
				break;
		}
	}
}

void Hospital::PermissionStaff()
{
	int choose;
	
	while(true)
	{
		cls();
		cover();
		StaffPermission();
		foreColor(9);
		ANT();
		foreColor(2);
		gotoxy(69, 14);
		cout<<"....Staff Permission Data....";
		foreColor(6);
		gotoxy(71, 17);
		cout<<" [1].  Insert Permission";
		gotoxy(71, 19);
		cout<<" [2].  View Permission";
		gotoxy(71, 21);
		cout<<" [3].  Search Permission";
		gotoxy(71, 23);
		cout<<" [4].  Update Permission";
		gotoxy(71, 25);
		cout<<" [5].  Delete Permission";
		gotoxy(71, 27);
		cout<<" [6].  Back to MENU";
		foreColor(9);
		gotoxy(74, 30);
		cout<<" Enter Number : ";
		choose = inputNumber();
		switch(choose)
		{
			case 1:	
				do
				{
					cls();
					cover();
					gotoxy(68, 5);
					foreColor(2);
					cout<<".... Enter Staff Permission ....";
					InsertPStaff();
					cls();
					cover();
					chooseInsert();
				}while(getch() != 27);
				break;
			case 2:
					cls();
					cover();
					gotoxy(67,6);
					foreColor(3);
					cout<<"... Staff Permission Information ...";
					cout<<endl<<endl;
					ShowPStaff();
					foreColor(2);
					cout<<"\n\n\t\t\t\t\t\t\t      <<<< Press Any Key back to [MENU MEDICINE] >>>>"<<endl;
			getch();
				break;
			case 3:
				do	
				{
					cls();
					cover();
					ShowPStaff();
					SearchPStaff();	
					cls();
					cover();
					chooseSearch();
				}while(getch() != 27);			
				break;
			case 4:
				do
				{
					cls();
					cover();
					ShowPStaff();
					UpdatePStaff();
					cls();
					cover();
					chooseUpdate();
				}while(getch() != 27);
				
				break;
			case 5:
				do
				{
					cls();
					cover();
					foreColor(2);
					ShowPStaff();
					DeletePStaff();
					cls();
					cover();
					chooseDelete();
				}while(getch() != 27);
				break;
			case 6:
				cls();
				Permission();
				break;
		}
	}
}

void Hospital::PermissionNurse()
{
	int choose;
	
	while(true)
	{
		cls();
		cover();
		NursePermission();
		foreColor(10);
		ANT();
		gotoxy(73, 14);
		foreColor(2);
		gotoxy(69, 14);
		cout<<"....Nurse Permission Data....";
		foreColor(6);
		gotoxy(71, 17);
		cout<<" [1].  Insert Permission";
		gotoxy(71, 19);
		cout<<" [2].  View Permission";
		gotoxy(71, 21);
		cout<<" [3].  Search Permission";
		gotoxy(71, 23);
		cout<<" [4].  Update Permission";
		gotoxy(71, 25);
		cout<<" [5].  Delete Permission";
		gotoxy(71, 27);
		cout<<" [6].  Back to MENU";
		foreColor(9);
		gotoxy(74, 30);
		cout<<" Enter Number : ";
		choose = inputNumber();
		switch(choose)
		{
			case 1:	
				do
				{
					cls();
					cover();
					gotoxy(68, 5);
					foreColor(2);
					cout<<".... Enter Nurse Permission ....";
					InsertPNurse();
					cls();
					cover();
					chooseInsert();
				}while(getch() != 27);
				break;
			case 2:
					cls();
					cover();
					gotoxy(67,6);
					foreColor(3);
					cout<<"... Nurse Permission Information ...";
					cout<<endl<<endl;
					ShowPNurse();
					foreColor(2);
					cout<<"\n\n\t\t\t\t\t\t\t      <<<< Press Any Key back to [MENU MEDICINE] >>>>"<<endl;
			getch();
				break;
			case 3:
				do	
				{
					cls();
					cover();
					ShowPNurse();
					SearchPNurse();	
					cls();
					cover();
					chooseSearch();
				}while(getch() != 27);			
				break;
			case 4:
				do
				{
					cls();
					cover();
					ShowPNurse();
					UpdatePNurse();
					cls();
					cover();
					chooseUpdate();
				}while(getch() != 27);
				
				break;
			case 5:
				do
				{
					cls();
					cover();
					foreColor(2);
					ShowPNurse();
					DeletePNurse();
					cls();
					cover();
					chooseDelete();
				}while(getch() != 27);
				break;
			case 6:
				cls();
				Permission();
				break;
		}
	}
}

void Hospital::PermissionDoctor()
{
	int choose;
	
	while(true)
	{
		cls();
		cover();
		DoctorPermission();
		foreColor(12);
		ANT();
		foreColor(2);
		gotoxy(69, 14);
		cout<<"....Doctor Permission Data....";
		foreColor(6);
		gotoxy(71, 17);
		cout<<" [1].  Insert Permission";
		gotoxy(71, 19);
		cout<<" [2].  View Permission";
		gotoxy(71, 21);
		cout<<" [3].  Search Permission";
		gotoxy(71, 23);
		cout<<" [4].  Update Permission";
		gotoxy(71, 25);
		cout<<" [5].  Delete Permission";
		gotoxy(71, 27);
		cout<<" [6].  Back to MENU";
		foreColor(9);
		gotoxy(74, 30);
		cout<<" Enter Number : ";
		choose = inputNumber();
		switch(choose)
		{
			case 1:	
				do
				{
					cls();
					cover();
					gotoxy(67, 5);
					foreColor(2);
					cout<<".... Enter Doctor Permission ....";
					InsertPDoctor();
					cls();
					cover();
					chooseInsert();
				}while(getch() != 27);
				break;
			case 2:
					cls();
					cover();
					gotoxy(67,6);
					foreColor(3);
					cout<<"... Doctor Permission Information ...";
					cout<<endl<<endl;
					ShowPDoctor();
					foreColor(2);
					cout<<"\n\n\t\t\t\t\t\t\t      <<<< Press Any Key back to [MENU MEDICINE] >>>>"<<endl;
			getch();
				break;
			case 3:
				do	
				{
					cls();
					cover();
					ShowPDoctor();
					SearchPDoctor();	
					cls();
					cover();
					chooseSearch();
				}while(getch() != 27);			
				break;
			case 4:
				do
				{
					cls();
					cover();
					ShowPDoctor();
					UpdatePDoctor();
					cls();
					cover();
					chooseUpdate();
				}while(getch() != 27);
				
				break;
			case 5:
				do
				{
					cls();
					cover();
					foreColor(2);
					ShowPDoctor();
					DeletePDoctor();
					cls();
					cover();
					chooseDelete();
				}while(getch() != 27);
				break;
			case 6:
				cls();
				Permission();
				break;
		}
	}
}



					