#ifndef _FILE_NURSE_H
#define _FILE_NURSE_H

#include<iostream>
#include<conio.h>
#include<fstream>
#include"antheaderInput.h"
#include"design.h"
#include"antheaderPlusPlus.h"
using namespace std;

class Nurse
{
	public:
		int id = 100, age;
		string name, gender, phoneNumber, address, email, dob;
		float salary;
	public:
		void Input()
		{
			boxInputStaff();
			foreColor(6);
			gotoxy(66, 10);
			fflush(stdin); cin.clear();
			cout<<"Name		:  "; 
			gotoxy(66, 13);
			cout<<"ID		:  ";
			gotoxy(66, 16);
			cout<<"Gender	:  "; 
			gotoxy(66, 19);
			cout<<"Age		:  "; 
			gotoxy(66, 22);
			cout<<"Date of Birth	:  "; 
			gotoxy(66, 25);
			cout<<"Salary	:  "; 
			gotoxy(66, 28);
			cout<<"Phone Number	:  "; 
			gotoxy(66, 31);
			cout<<"Address	:  ";
			gotoxy(83, 10); 
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
			gotoxy(83, 13); 
			cout<<id<<endl; fflush(stdin); cin.clear();
			gotoxy(83, 16); 
			while(true)
			{
				inputLetter(gender);
				if(gender == 	"\0")
				{
					continue;
				}
				else
				{
					break;
				}
			}
			fflush(stdin); cin.clear();
			gotoxy(83, 19); 
			age = inputNumber();
			fflush(stdin); cin.clear();
			gotoxy(83, 22); 
			while(true)
			{
				inputNumber(dob);
				if(dob == "\0")
				{
					continue;
				}
				else
				{
					break;
				}
			}
			fflush(stdin); cin.clear();
			gotoxy(83, 25);  
			salary = inputFloat();
			fflush(stdin); cin.clear();
			gotoxy(83, 28); 
			phoneNumber = inputString();
			fflush(stdin); cin.clear();
			gotoxy(83, 31); 
			while(true)
			{
				inputLetter(address);
				if(address == "\0")
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
			foreColor(7);
			char a = 196;
			char b = 218;
			char c = 191;
			char d = 179;
			char e = 217;
			char f = 192;
			
			foreColor(5);
			cout<<"\t\t\t  ";
			for(int i=0; i<1; i++)
			{
				cout<<b;
			}
			for(int i=0; i<116; i++)
			{
				cout<<a;
			}
			for(int i=0; i<1; i++)
			{
				cout<<c;
			}			
			cout<<"\n\t\t\t  ";
			for(int i=0; i<1; i++)
			{
				cout<<d;
			}
			foreColor(6);
			cout<<"   "<<left<<setw(20)<<name<<setw(10)<<id<<setw(10)<<gender<<setw(10)<<age<<setw(15)<<dob<<setw(15)<<salary<<setw(20)<<phoneNumber<<setw(13)<<address;
			foreColor(5);

			for(int i=0; i<1; i++)
			{
				cout<<d;
			}	
			cout<<"\n\t\t\t  ";
			for(int i=0; i<1; i++)
			{
				cout<<f;
			}
			for(int i=0; i<116; i++)
			{
				cout<<a;
			}
			for(int i=0; i<1; i++)
			{
				cout<<e;
			}			
		}
		void Header()
		{
			foreColor(7);
			drawBoxSingleLine(27, 8, 116, 1, 2);
			foreColor(4);
			gotoxy(29,9);
			cout<<" "<<left<<setw(20)<<"Name"<<setw(10)<<"ID"<<setw(10)<<"Gender"<<setw(10)<<"Age"<<setw(15)<<"Date of Birth"<<setw(15)<<"Salary($)"<<setw(20)<<"Phone Number"<<setw(10)<<"Address"<<endl<<endl;
			foreColor(7);
		}
		void edit()
		{
			boxInputStaff();
			foreColor(6);
			gotoxy(66, 10);
			fflush(stdin); cin.clear();
			cout<<"Name		:  "; 
			gotoxy(66, 13);
			cout<<"ID		:  ";
			gotoxy(66, 16);
			cout<<"Gender	:  "; 
			gotoxy(66, 19);
			cout<<"Age		:  "; 
			gotoxy(66, 22);
			cout<<"Date of Birth	:  "; 
			gotoxy(66, 25);
			cout<<"Salary	:  "; 
			gotoxy(66, 28);
			cout<<"Phone Number	:  "; 
			gotoxy(66, 31);
			cout<<"Address	:  ";
			gotoxy(83, 10); 
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
			gotoxy(83, 13); 
			cout<<id<<endl; fflush(stdin); cin.clear();
			gotoxy(83, 16); 
			while(true)
			{
				inputLetter(gender);
				if(gender == 	"\0")
				{
					continue;
				}
				else
				{
					break;
				}
			}
			fflush(stdin); cin.clear();
			gotoxy(83, 19); 
			age = inputNumber();
			fflush(stdin); cin.clear();
			gotoxy(83, 22); 
			while(true)
			{
				inputNumber(dob);
				if(dob == "\0")
				{
					continue;
				}
				else
				{
					break;
				}
			}
			fflush(stdin); cin.clear();
			gotoxy(83, 25);  
			salary = inputFloat();
			fflush(stdin); cin.clear();
			gotoxy(83, 28); 
			phoneNumber = inputString();
			fflush(stdin); cin.clear();
			gotoxy(83, 31); 
			while(true)
			{
				inputLetter(address);
				if(address == "\0")
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
	Nurse nurse;
	fstream fileNurse;
////////////////////////////////////////////////	

////////////////////// Create function /////////////////////////////
void InsertNurse()
{
	fileNurse.open("Nurse.bin", ios::in | ios::binary);
	
	int lastId = 100;
	
	while(fileNurse.read((char*)&nurse,sizeof(nurse)))
	{
		lastId = nurse.id;
	}
	nurse.id = lastId + 1;
	fileNurse.close();
	
	// Create New file for write data in binary file
	fileNurse.open("Nurse.bin", ios::out | ios::app | ios::binary);
	// how to write data to file
	nurse.Input();
	foreColor(2);
	cout<<"\n\n\n\n\t\t\t\t\t\t\t\t\t    <<< Successfull >>>";
	delay(2500);
	fileNurse.write((char*)&nurse,sizeof(nurse));
	fileNurse.close();
}
/////////////////////////////////////////////////////////////////
void ShowNurse()
{
	// how to read data from file
	// open file
	fileNurse.open("Nurse.bin", ios::in | ios::binary);
	if(fileNurse.fail()) // = if(!file)
	{
		gotoxy(75, 15);
		cout<<"<<< file not found >>>"<<endl;
	}
	else
	{
		cout<<endl<<endl;
		nurse.Header();
		fileNurse.read((char*)&nurse,sizeof(nurse));
		while(fileNurse.eof()!= true) // = while(!file.eof())
		{
			nurse.Display();
			fileNurse.read((char*)&nurse,sizeof(nurse));
			cout<<endl;
		}
	}
	fileNurse.close();
}
/////////////////////// Create function search data from file /////////////////////////////////
void SearchNurse()
{
	fileNurse.open("Nurse.bin", ios::in | ios::binary);
	bool found = false;
	if(fileNurse.fail())
	{
		gotoxy(73, 15);
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
		fileNurse.read((char*)&nurse,sizeof(nurse));
		while(!fileNurse.eof())
		{
			if(tempId == nurse.id)
			{
				cls();
				cover();
				gotoxy(77,5);
				foreColor(3);
				cout<<"... Nurse Data ...";
				nurse.Header();
				nurse.Display();
				foreColor(3);
				cout<<"\n\n\n\n\t\t\t\t\t\t\t\t\t <<< Press to Continue >>>";
				getch();
				found = true;
			}
			fileNurse.read((char*)&nurse,sizeof(nurse));
		}
		if(found == false)
		{
			cls();
			cover();
			NotFind();
			delay(1500);
		}
	}
	fileNurse.close();
}

void UpdateNurse()
{
	fileNurse.open("Nurse.bin", ios::out | ios::in | ios::binary);
	bool found = false;
	if(fileNurse.fail())
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
		fileNurse.read((char*)&nurse,sizeof(nurse));
		while(!fileNurse.eof())
		{
			if(updateid == nurse.id)
			{
				cls();
				cover();
				gotoxy(72, 5);
				foreColor(3);
				cout<<"---- Enter Nurse Data ----";
				nurse.edit();
				int lastread = fileNurse.tellg(); 
				fileNurse.seekp(lastread - sizeof(nurse));
				fileNurse.write((char*)&nurse,sizeof(nurse));
				found = true;
			}
			fileNurse.read((char*)&nurse, sizeof(nurse));
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
	fileNurse.close();
}
///////////////////////////////////////////////////////////////////////////
void DeleteNurse()
{
	fileNurse.open("Nurse.bin", ios::in | ios::binary);
	fstream backup;
	// create file to backup data that don't want delete
	backup.open("TempNurse.bin", ios::out | ios::binary);
	
	bool found = false;
	if(fileNurse.fail())
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
		fileNurse.read((char*)&nurse,sizeof(nurse));
		while(!fileNurse.eof())
		{
			if(deleteid == nurse.id)
			{
				found = true;
			}
			if(deleteid != nurse.id)
			{
				backup.write((char*)&nurse, sizeof(nurse));
			}
			fileNurse.read((char*)&nurse,sizeof(nurse));
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
	fileNurse.close();
	backup.close();
	remove("Nurse.bin");
	rename("TempNurse.bin", "Nurse.bin");
} 

#endif