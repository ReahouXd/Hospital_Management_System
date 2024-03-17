#ifndef _FILE_PATIENT_H
#define _FILE_PATIENT_H

#include<iostream>
#include<conio.h>
#include<fstream>
#include"antheaderInput.h"
#include"design.h"
#include"antheaderPlusPlus.h"
using namespace std;

class Patient
{
	public:
		int id = 1000, age;
		string name, gender,marital_Status, Nationality, phoneNumber, dob, address;

	public:
		void Input()
		{
			inputpatient();
			foreColor(4);
			gotoxy(66, 9);
			fflush(stdin); cin.clear();
			cout<<"Name		:  "; 
			gotoxy(66, 12);
			cout<<"ID		:  ";
			gotoxy(66, 15);
			cout<<"Gender	:  "; 
			gotoxy(66, 18);
			cout<<"Age		:  "; 
			gotoxy(66, 21);
			cout<<"Date of Birth	:  "; 
			gotoxy(66, 24);
			cout<<"Nationality	:  "; 
			gotoxy(66, 27);
			cout<<"Marital Status:  "; 
			gotoxy(66, 30);
			cout<<"Phone Number	:  "; 
			gotoxy(66, 33);
			cout<<"Address	:  ";
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
			gotoxy(83, 18); 
			age = inputNumber();
			fflush(stdin); cin.clear();
			gotoxy(83, 21); 
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
			gotoxy(83, 24);  
			while(true)
			{
				inputLetter(Nationality);
				if(Nationality == "\0")
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
				inputLetter(marital_Status);
				if(marital_Status == "\0")
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
			phoneNumber = inputString();
			fflush(stdin); cin.clear();
			gotoxy(83, 33); 
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
			char a = 196;
			foreColor(6);
			cout<<"\t\t  ";
			cout<<"   "<<left<<setw(20)<<name<<setw(10)<<id<<setw(10)<<gender<<setw(10)<<age<<setw(18)<<dob<<setw(15)<<Nationality<<setw(20)<<marital_Status<<setw(15)<<phoneNumber<<setw(15)<<address;
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
			cout<<"   "<<left<<setw(20)<<"Name"<<setw(10)<<"ID"<<setw(10)<<"Gender"<<setw(10)<<"Age"<<setw(18)<<"Date of Birth"<<setw(15)<<"Nationality"<<setw(20)<<"Marital Status"<<setw(15)<<"Phone Number"<<setw(15)<<"Address"<<endl;
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
			inputpatient();
			foreColor(4);
			gotoxy(66, 9);
			fflush(stdin); cin.clear();
			cout<<"Name		:  "; 
			gotoxy(66, 12);
			cout<<"ID		:  ";
			gotoxy(66, 15);
			cout<<"Gender	:  "; 
			gotoxy(66, 18);
			cout<<"Age		:  "; 
			gotoxy(66, 21);
			cout<<"Date of Birth	:  "; 
			gotoxy(66, 24);
			cout<<"Nationality	:  "; 
			gotoxy(66, 27);
			cout<<"Marital Status:  "; 
			gotoxy(66, 30);
			cout<<"Phone Number	:  "; 
			gotoxy(66, 33);
			cout<<"Address	:  ";
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
			gotoxy(83, 18); 
			age = inputNumber();
			fflush(stdin); cin.clear();
			gotoxy(83, 21); 
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
			gotoxy(83, 24);  
			while(true)
			{
				inputLetter(Nationality);
				if(Nationality == "\0")
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
				inputLetter(marital_Status);
				if(marital_Status == "\0")
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
			phoneNumber = inputString();
			fflush(stdin); cin.clear();
			gotoxy(83, 33); 
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
	Patient pat;
	fstream filepat;
////////////////////////////////////////////////	

////////////////////// Create function /////////////////////////////
void InsertPat()
{
	filepat.open("Patient.bin", ios::in | ios::binary);
	
	int lastId = 1000;
	
	while(filepat.read((char*)&pat,sizeof(pat)))
	{
		lastId = pat.id;
	}
	pat.id = lastId + 137;
	filepat.close();
	
	// Create New file for write data in binary file
	filepat.open("Patient.bin", ios::out | ios::app | ios::binary);
	// how to write data to file
	pat.Input();
	foreColor(5);
	cout<<"\n\n\n\t\t\t\t\t\t\t\t\t    <<< Successfull >>>";
	delay(2500);
	filepat.write((char*)&pat,sizeof(pat));
	filepat.close();
}
/////////////////////////////////////////////////////////////////
void ShowPat()
{
	// how to read data from file
	// open file
	filepat.open("Patient.bin", ios::in | ios::binary);
	if(filepat.fail()) // = if(!file)
	{
		gotoxy(73, 15);
		cout<<"<<< file not found >>>"<<endl;
	}
	else
	{
		cout<<endl<<endl;
		pat.Header();
		filepat.read((char*)&pat,sizeof(pat));
		while(filepat.eof()!= true) // = while(!file.eof())
		{
			pat.Display();
			filepat.read((char*)&pat,sizeof(pat));
			cout<<endl;
		}
	}
	filepat.close();
}
/////////////////////// Create function search data from file /////////////////////////////////
void SearchPat()
{
	filepat.open("Patient.bin", ios::in | ios::binary);
	bool found = false;
	if(filepat.fail())
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
		filepat.read((char*)&pat,sizeof(pat));
		while(!filepat.eof())
		{
			if(tempId == pat.id)
			{
				cls();
				cover();
				gotoxy(77,5);
				foreColor(3);
				cout<<"... Patient Data ...";
				pat.Header();
				pat.Display();
				foreColor(3);
				cout<<"\n\n\n\n\t\t\t\t\t\t\t\t\t <<< Press to Continue >>>";
				found = true;
				getch();
			}
			filepat.read((char*)&pat,sizeof(pat));
		}
		if(found == false)
		{
			cls();
			cover();
			NotFind();
			delay(1500);
		}
	}
	filepat.close();
}

void UpdatePat()
{
	filepat.open("Patient.bin", ios::out | ios::in | ios::binary);
	bool found = false;
	if(filepat.fail())
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
		filepat.read((char*)&pat,sizeof(pat));
		while(!filepat.eof())
		{
			if(updateid == pat.id)
			{
				cls();
				cover();
				gotoxy(72, 5);
				foreColor(3);
				cout<<"---- Enter Patient Data ----";
				pat.edit();
				int lastread = filepat.tellg(); 
				filepat.seekp(lastread - sizeof(pat));
				filepat.write((char*)&pat,sizeof(pat));
				found = true;
			}
			filepat.read((char*)&pat, sizeof(pat));
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
	filepat.close();
}
///////////////////////////////////////////////////////////////////////////
void DeletePat()
{
	filepat.open("Patient.bin", ios::in | ios::binary);
	fstream backup;
	// create file to backup data that don't want delete
	backup.open("TempPat.bin", ios::out | ios::binary);
	
	bool found = false;
	if(filepat.fail())
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
		filepat.read((char*)&pat,sizeof(pat));
		while(!filepat.eof())
		{
			if(deleteid == pat.id)
			{
				found = true;
			}
			if(deleteid != pat.id)
			{
				backup.write((char*)&pat, sizeof(pat));
			}
			filepat.read((char*)&pat,sizeof(pat));
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
	filepat.close();
	backup.close();
	remove("Patient.bin");
	rename("TempPat.bin", "Patient.bin");
} 

#endif