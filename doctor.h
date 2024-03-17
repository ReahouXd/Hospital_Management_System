#ifndef _FILE_DOCTOR_H
#define _FILE_DOCTOR_H

#include<iostream>
#include<conio.h>
#include<fstream>
#include"antheaderInput.h"
#include"design.h"
#include"antheaderPlusPlus.h"
using namespace std;

class Doctor
{
	public:
		int id = 10, age;
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
	Doctor doctor;
	fstream fileDoctor;
////////////////////////////////////////////////	

////////////////////// Create function /////////////////////////////
void InsertDoctor()
{
	fileDoctor.open("Doctor.bin", ios::in | ios::binary);
	
	int lastId = 10;
	
	while(fileDoctor.read((char*)&doctor,sizeof(doctor)))
	{
		lastId = doctor.id;
	}
	doctor.id = lastId + 1;
	fileDoctor.close();
	
	// Create New file for write data in binary file
	fileDoctor.open("Doctor.bin", ios::out | ios::app | ios::binary);
	// how to write data to file
	doctor.Input();
	foreColor(2);
	cout<<"\n\n\n\n\t\t\t\t\t\t\t\t\t    <<< Successfull >>>";
	delay(2500);
	fileDoctor.write((char*)&doctor,sizeof(doctor));
	fileDoctor.close();
}
/////////////////////////////////////////////////////////////////
void ShowDoctor()
{
	// how to read data from file
	// open file
	fileDoctor.open("Doctor.bin", ios::in | ios::binary);
	if(fileDoctor.fail()) // = if(!file)
	{
		gotoxy(73, 15);
		cout<<"<<< file not found >>>"<<endl;
	}
	else
	{
		cout<<endl<<endl;
		doctor.Header();
		fileDoctor.read((char*)&doctor,sizeof(doctor));
		while(fileDoctor.eof()!= true) // = while(!file.eof())
		{
			doctor.Display();
			fileDoctor.read((char*)&doctor,sizeof(doctor));
			cout<<endl;
		}
	}
	fileDoctor.close();
}
/////////////////////// Create function search data from file /////////////////////////////////
void SearchDoctor()
{
	fileDoctor.open("Doctor.bin", ios::in | ios::binary);
	bool found = false;
	if(fileDoctor.fail())
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
		fileDoctor.read((char*)&doctor,sizeof(doctor));
		while(!fileDoctor.eof())
		{
			if(tempId == doctor.id)
			{
				cls();
				cover();
				gotoxy(77,5);
				foreColor(3);
				cout<<"... Doctor Data ...";
				doctor.Header();
				doctor.Display();
				foreColor(3);
				cout<<"\n\n\n\n\t\t\t\t\t\t\t\t\t <<< Press to Continue >>>";
				found = true;
				getch();
			}
			fileDoctor.read((char*)&doctor,sizeof(doctor));
		}
		if(found == false)
		{
			cls();
			cover();
			NotFind();
			delay(1500);
		}
	}
	fileDoctor.close();
}

void UpdateDoctor()
{
	fileDoctor.open("Doctor.bin", ios::out | ios::in | ios::binary);
	bool found = false;
	if(fileDoctor.fail())
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
		fileDoctor.read((char*)&doctor,sizeof(doctor));
		while(!fileDoctor.eof())
		{
			if(updateid == doctor.id)
			{
				cls();
				cover();
				gotoxy(72, 5);
				foreColor(3);
				cout<<"---- Enter Doctor Data ----";
				doctor.edit();
				int lastread = fileDoctor.tellg(); 
				fileDoctor.seekp(lastread - sizeof(doctor));
				fileDoctor.write((char*)&doctor,sizeof(doctor));
				found = true;
			}
			fileDoctor.read((char*)&doctor, sizeof(doctor));
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
	fileDoctor.close();
}
///////////////////////////////////////////////////////////////////////////
void DeleteDoctor()
{
	fileDoctor.open("Doctor.bin", ios::in | ios::binary);
	fstream backup;
	// create file to backup data that don't want delete
	backup.open("TempDoctor.bin", ios::out | ios::binary);
	
	bool found = false;
	if(fileDoctor.fail())
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
		fileDoctor.read((char*)&doctor,sizeof(doctor));
		while(!fileDoctor.eof())
		{
			if(deleteid == doctor.id)
			{
				found = true;
			}
			if(deleteid != doctor.id)
			{
				backup.write((char*)&doctor, sizeof(doctor));
			}
			fileDoctor.read((char*)&doctor,sizeof(doctor));
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
	fileDoctor.close();
	backup.close();
	remove("Doctor.bin");
	rename("TempDoctor.bin", "Doctor.bin");
} 

#endif