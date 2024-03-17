#ifndef _FILE_APPOINTMENT_H
#define _FILE_APPOINTMENT_H

#include<iostream>
#include<conio.h>
#include<fstream>
#include"antheaderInput.h"
#include"design.h"
#include"antheaderPlusPlus.h"
using namespace std;

class Appointment
{
	public:
		int id = 1110, Number;
		string name, gender, type, description, date, doctor_Name;
	public:
		void Input()
		{
			inputappointment();
			foreColor(4);
			gotoxy(66, 9);
			fflush(stdin); cin.clear();
			cout<<"Name		:  "; 
			gotoxy(66, 12);
			cout<<"ID		:  ";
			gotoxy(66, 15);
			cout<<"Gender	:  "; 
			gotoxy(66, 18);
			cout<<"Number	:  "; 
			gotoxy(66, 21);
			cout<<"type		:  "; 
			gotoxy(66, 24);
			cout<<"Description	:  "; 
			gotoxy(66, 27);
			cout<<"Date 		:  "; 
			gotoxy(66, 30);
			cout<<"Doctor Name	:  "; 
			
			gotoxy(83, 9); 
			while(true)
			{
				inputLetter(name);
				if(name == 	"\0")
				{
					continue;
				}
				else
				{
					break;
				}
			}
			fflush(stdin); cin.clear();
			gotoxy(83, 12); cout<<id<<endl; fflush(stdin); cin.clear();
			gotoxy(83, 15); 
			while(true)
			{
				inputLetter(gender);
				if(gender == "\0")
				{
					continue;
				}
				else
				{
					break;
				}
			}
			fflush(stdin); cin.clear();
			gotoxy(83, 18); 
//			cout<<Number<<endl; fflush(stdin); cin.clear();
//			while(true)
//			{
//				inputNumber(Number);
//				if(Number == "\0")
//				{
//					continue;
//				}
//				else
//				{
//					break;
//				}
//			}
			Number = inputNumber();
			fflush(stdin); cin.clear();
			gotoxy(83, 21); 
			while(true)
			{
				inputLetter(type);
				if(type == "\0")
				{
					continue;
				}
				else
				{
					break;
				}
			}
			fflush(stdin); cin.clear();
			gotoxy(83, 24); 
			while(true)
			{
				inputLetter(description);
				if(description == "\0")
				{
					continue;
				}
				else
				{
					break;
				}
			}
			fflush(stdin); cin.clear();
			gotoxy(83, 27);  
			while(true)
			{
				inputNumber(date);
				if(date == "\0")
				{
					continue;
				}
				else
				{
					break;
				}
			}
			fflush(stdin); cin.clear();
			gotoxy(83, 30); 
			while(true)
			{
				inputLetter(doctor_Name);
				if(doctor_Name == 	"\0")
				{
					continue;
				}
				else
				{
					break;
				}
			}
			fflush(stdin); cin.clear();
		}

		void Display()
		{	
			char a = 196;
			foreColor(6);
			cout<<"\t\t  ";
			cout<<"   "<<left<<setw(20)<<name<<setw(13)<<id<<setw(14)<<gender<<setw(15)<<Number<<setw(18)<<type<<setw(20)<<description<<setw(15)<<date<<setw(20)<<doctor_Name;
			foreColor(5);
			cout<<"\n\t\t  ";
			for(int i=0; i<133; i++)
			{
				cout<<a;
			}			
		}
		void Header()
		{
			char a = 196;
			foreColor(4);
			gotoxy(0, 9);
			cout<<"\t\t  ";
			for(int i=0; i<133; i++)
			{
				cout<<a;
			}
			cout<<"\n\t\t  ";
			foreColor(2);
			cout<<"   "<<left<<setw(20)<<"Name"<<setw(13)<<"ID"<<setw(14)<<"Gender"<<setw(15)<<"Number"<<setw(18)<<"Type"<<setw(20)<<"Description"<<setw(15)<<"Date"<<setw(20)<<"Doctor Name"<<endl;
			foreColor(4);
			cout<<"\t\t  ";
			for(int i=0; i<133; i++)
			{
				cout<<a;
			}
			cout<<endl;
//			cout<<"\n\t\t     ";
		}
		void edit()
		{
			inputappointment();
			foreColor(4);
			gotoxy(66, 9);
			fflush(stdin); cin.clear();
			cout<<"Name		:  "; 
			gotoxy(66, 12);
			cout<<"ID		:  ";
			gotoxy(66, 15);
			cout<<"Gender	:  "; 
			gotoxy(66, 18);
			cout<<"Number	:  "; 
			gotoxy(66, 21);
			cout<<"type		:  "; 
			gotoxy(66, 24);
			cout<<"Description	:  "; 
			gotoxy(66, 27);
			cout<<"Date 		:  "; 
			gotoxy(66, 30);
			cout<<"Doctor Name	:  "; 
			
			gotoxy(83, 9); 
			while(true)
			{
				inputLetter(name);
				if(name == 	"\0")
				{
					continue;
				}
				else
				{
					break;
				}
			}
			fflush(stdin); cin.clear();
			gotoxy(83, 12); cout<<id<<endl; fflush(stdin); cin.clear();
			gotoxy(83, 15); 
			while(true)
			{
				inputLetter(gender);
				if(gender == "\0")
				{
					continue;
				}
				else
				{
					break;
				}
			}
			fflush(stdin); cin.clear();
			gotoxy(83, 18); 
			Number = inputNumber(); 
//			cout<<Number<<endl; fflush(stdin); cin.clear();
//			while(true)
//			{
//				inputNumber(Number);
//				if(Number == "\0")
//				{
//					continue;
//				}
//				else
//				{
//					break;
//				}
//			}
			fflush(stdin); cin.clear();
			gotoxy(83, 21); 
			while(true)
			{
				inputLetter(type);
				if(type == "\0")
				{
					continue;
				}
				else
				{
					break;
				}
			}
			fflush(stdin); cin.clear();
			gotoxy(83, 24); 
			while(true)
			{
				inputLetter(description);
				if(description == "\0")
				{
					continue;
				}
				else
				{
					break;
				}
			}
			fflush(stdin); cin.clear();
			gotoxy(83, 27);  
			while(true)
			{
				inputNumber(date);
				if(date == "\0")
				{
					continue;
				}
				else
				{
					break;
				}
			}
			fflush(stdin); cin.clear();
			gotoxy(83, 30); 
			while(true)
			{
				inputLetter(doctor_Name);
				if(doctor_Name == 	"\0")
				{
					continue;
				}
				else
				{
					break;
				}
			}
			fflush(stdin); cin.clear();
		}
		
};
////////////////////////////////////////////////
// Create object for class Product
	Appointment app;
	fstream fileapp;
////////////////////////////////////////////////	

////////////////////// Create function /////////////////////////////
void Insertapp()
{
	fileapp.open("App.bin", ios::in | ios::binary);
	
	int lastId = 1110;
	
	while(fileapp.read((char*)&app,sizeof(app)))
	{
		lastId = app.id;
	}
	app.id = lastId + 1;
	fileapp.close();
	
//	fileapp.open("App.bin", ios::in | ios::binary);
//	
//	int lastNumber = 0;
//	
//	while(fileapp.read((char*)&app,sizeof(app)))
//	{
//		lastNumber = app.Number;
//	}
//	app.Number = lastNumber + 1;
//	fileapp.close();
	
	// Create New file for write data in binary file
	fileapp.open("App.bin", ios::out | ios::app | ios::binary);
	// how to write data to file
	app.Input();
	foreColor(5);
	cout<<"\n\n\n\n\t\t\t\t\t\t\t\t\t    <<< Successfull >>>";
	delay(2500);
	fileapp.write((char*)&app,sizeof(app));
	fileapp.close();
}
/////////////////////////////////////////////////////////////////
void Showapp()
{
	// how to read data from file
	// open file
	fileapp.open("App.bin", ios::in | ios::binary);
	if(fileapp.fail()) // = if(!file)
	{
		gotoxy(73, 15);
		cout<<"<<< file not found >>>"<<endl;
	}
	else
	{
		cout<<endl<<endl;
		app.Header();
		fileapp.read((char*)&app,sizeof(app));
		while(fileapp.eof()!= true) // = while(!file.eof())
		{
			app.Display();
			fileapp.read((char*)&app,sizeof(app));
			cout<<endl;
		}
	}
	fileapp.close();
}
/////////////////////// Create function search data from file /////////////////////////////////
void Searchapp()
{
	fileapp.open("App.bin", ios::in | ios::binary);
	bool found = false;
	if(fileapp.fail())
	{
		gotoxy(75, 15);
		cout<<"<<< File Not Found >>>";
		delay(1500);
	}
	else
	{
		int tempId;
		drawBoxSingleLine(64, 4, 38, 1, 3);
		gotoxy(65, 5); foreColor(14);
		cout<<"Enter ID you want to search : "; 
		gotoxy(95, 5); tempId = inputNumber();
		fileapp.read((char*)&app,sizeof(app));
		while(!fileapp.eof())
		{
			if(tempId == app.id)
			{
				cls();
				cover();
				gotoxy(73,5);
				foreColor(3);
				cout<<"... Appointment Data ...";
				app.Header();
				app.Display();
				foreColor(3);
				cout<<"\n\n\n\n\t\t\t\t\t\t\t\t\t <<< Press to Continue >>>";
				found = true;
				getch();
			}
			fileapp.read((char*)&app,sizeof(app));
		}
		if(found == false)
		{
			cls();
			cover();
			NotFind();
			delay(1500);
		}
	}
	fileapp.close();
}

void Updateapp()
{
	fileapp.open("App.bin", ios::out | ios::in | ios::binary);
	bool found = false;
	if(fileapp.fail())
	{
		gotoxy(75, 15);
		cout<<"<<< File Not Found >>>"<<endl;
		delay(1500);
	}
	else
	{
		int updateid;
		
		drawBoxSingleLine(64, 4, 38, 1, 3);
		gotoxy(65, 5); foreColor(14);
		cout<<"Enter ID You want to Update : "; 
		gotoxy(95, 5); updateid = inputNumber();
		fileapp.read((char*)&app,sizeof(app));
		while(!fileapp.eof())
		{
			if(updateid == app.id)
			{
				cls();
				cover();
				gotoxy(68, 5);
				foreColor(3);
				cout<<"---- Enter Appointment Data ----";
				app.edit();
				int lastread = fileapp.tellg(); 
				fileapp.seekp(lastread - sizeof(app));
				fileapp.write((char*)&app,sizeof(app));
				found = true;
			}
			fileapp.read((char*)&app, sizeof(app));
		}
		if(found == false)
		{
			cls();
			cover();
			NotFind();
			delay(1500);
		}
		if(found == true)
		{
			cls();
			cover();
			UpDateSuccess();
			delay(2500);
		}
	}
	fileapp.close();
}
///////////////////////////////////////////////////////////////////////////
void Deleteapp()
{
	fileapp.open("App.bin", ios::in | ios::binary);
	fstream backup;
	// create file to backup data that don't want delete
	backup.open("TempApp.bin", ios::out | ios::binary);
	
	bool found = false;
	if(fileapp.fail())
	{
		gotoxy(75, 15);
		cout<<"<<< File Not Found >>>";
		delay(1500);
	}
	else
	{
		int deleteid;
		drawBoxSingleLine(64, 4, 38, 1, 3);
		gotoxy(65, 5); foreColor(14);
		cout<<"Enter ID You want to Delete : "; 
		gotoxy(95, 5); deleteid = inputNumber();
		fileapp.read((char*)&app,sizeof(app));
		while(!fileapp.eof())
		{
			if(deleteid == app.id)
			{
				found = true;
			}
			if(deleteid != app.id)
			{
				backup.write((char*)&app, sizeof(app));
			}
			fileapp.read((char*)&app,sizeof(app));
		}
		if(found == false)
		{
			cls();
			cover();
			NotFind();
			delay(2500);
		}
		if(found == true)
		{
			cls();
			cover();
			DeleteSuccess();
			delay(2500);
		}
	}
	fileapp.close();
	backup.close();
	remove("App.bin");
	rename("TempApp.bin", "App.bin");
} 

#endif