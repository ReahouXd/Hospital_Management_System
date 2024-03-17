#ifndef _FILE_PERMISSIONDOCTOR_H
#define _FILE_PERMISSIONDOCTOR_H

#include<iostream>
#include<conio.h>
#include<fstream>
#include"antheaderInput.h"
#include"design.h"
#include"antheaderPlusPlus.h"
using namespace std;

class PermissionDoctor
{
	public:
		int id = 1000;
		string name, gender, phoneNumber, dob, address, reason;
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
			cout<<"Phone Number	:  ";
			gotoxy(66, 22);
			cout<<"Date 		:  "; 
			gotoxy(66, 25);
			cout<<"Address	:  ";
			gotoxy(66, 28);
			cout<<"Reason	:  "; 
//			input
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
//			cout<<id<<endl; 
			id = inputNumber();
			fflush(stdin); cin.clear();
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
			phoneNumber = inputString();
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
			gotoxy(83, 28); 
			while(true)
			{
				inputLetter(reason);
				if(reason == "\0")
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
			cout<<"   "<<left<<setw(25)<<name<<setw(15)<<id<<setw(15)<<gender<<setw(20)<<phoneNumber<<setw(25)<<dob<<setw(20)<<address<<setw(25)<<reason;
			foreColor(5);
			cout<<"\n\t\t  ";
			for(int i=0; i<133; i++)
			{
				cout<<a;
			}		
		}
		void Header()
		{
			char a = 205;
			foreColor(4);
			gotoxy(0, 9);
			cout<<"\t\t  ";
			for(int i=0; i<133; i++)
			{
				cout<<a;
			}
			cout<<"\n\t\t  ";
			foreColor(2);
			cout<<"   "<<left<<setw(25)<<"Name"<<setw(15)<<"ID"<<setw(15)<<"Gender"<<setw(20)<<"Phone Number"<<setw(25)<<"Date Time"<<setw(20)<<"Address"<<setw(25)<<"Reason"<<endl;
			foreColor(4);
			cout<<"\t\t  ";
			for(int i=0; i<133; i++)
			{
				cout<<a;
			}
			cout<<endl;
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
			cout<<"Phone Number	:  ";
			gotoxy(66, 22);
			cout<<"Date 		:  "; 
			gotoxy(66, 25);
			cout<<"Address	:  ";
			gotoxy(66, 28);
			cout<<"Reason	:  "; 
//			input
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
//			cout<<id<<endl; 
			id = inputNumber();
			fflush(stdin); cin.clear();
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
			phoneNumber = inputString();
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
			gotoxy(83, 28); 
			while(true)
			{
				inputLetter(reason);
				if(reason == "\0")
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
PermissionDoctor pdoctor;
fstream filePDoctor;
////////////////////////////////////////////////	

////////////////////// Create function /////////////////////////////
void InsertPDoctor()
{
//	filePDoctor.open("PermissionDoctor.bin", ios::in | ios::binary);
//	
//	int lastId = 1000;
//	
//	while(filePNurse.read((char*)&pnurse,sizeof(pnurse)))
//	{
//		lastId = pnurse.id;
//	}
//	pnurse.id = lastId + 1;
//	filePNurse.close();
	
	// Create New file for write data in binary file
	filePDoctor.open("PermissionDoctor.bin", ios::out | ios::app | ios::binary);
	// how to write data to file
	pdoctor.Input();
	foreColor(2);
	cout<<"\n\n\n\n\t\t\t\t\t\t\t\t\t    <<< Successfull >>>";
	delay(3000);
	filePDoctor.write((char*)&pdoctor,sizeof(pdoctor));
	filePDoctor.close();
}
/////////////////////////////////////////////////////////////////
void ShowPDoctor()
{
	// how to read data from file
	// open file
	filePDoctor.open("PermissionDoctor.bin", ios::in | ios::binary);
	if(filePDoctor.fail()) // = if(!file)
	{
		gotoxy(73, 15);
		cout<<"<<< file not found >>>"<<endl;
	}
	else
	{
		cout<<endl<<endl;
		pdoctor.Header();
		filePDoctor.read((char*)&pdoctor,sizeof(pdoctor));
		while(filePDoctor.eof()!= true) // = while(!file.eof())
		{
			pdoctor.Display();
			filePDoctor.read((char*)&pdoctor,sizeof(pdoctor));
			cout<<endl;
		}
	}
	filePDoctor.close();
}
/////////////////////// Create function search data from file /////////////////////////////////
void SearchPDoctor()
{
	filePDoctor.open("PermissionDoctor.bin", ios::in | ios::binary);
	bool found = false;
	if(filePDoctor.fail())
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
		filePDoctor.read((char*)&pdoctor,sizeof(pdoctor));
		while(!filePDoctor.eof())
		{
			if(tempId == pdoctor.id)
			{
				cls();
				cover();
				gotoxy(77,5);
				foreColor(3);
				cout<<"... Staff Data ...";
				pdoctor.Header();
				pdoctor.Display();
				foreColor(3);
				cout<<"\n\n\n\n\t\t\t\t\t\t\t\t\t <<< Press to Continue >>>";
				getch();
				found = true;
			}
			filePDoctor.read((char*)&pdoctor,sizeof(pdoctor));
		}
		if(found == false)
		{
			cls();
			cover();
			NotFind();
			delay(1500);
		}
	}
	filePDoctor.close();
}

void UpdatePDoctor()
{
	filePDoctor.open("PermissionDoctor.bin", ios::out | ios::in | ios::binary);
	bool found = false;
	if(filePDoctor.fail())
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
		filePDoctor.read((char*)&pdoctor,sizeof(pdoctor));
		while(!filePDoctor.eof())
		{
			if(updateid == pdoctor.id)
			{
				cls();
				cover();
				gotoxy(72, 5);
				foreColor(3);
				cout<<"---- Enter Staff Data ----";
				pdoctor.edit();
				int lastread = filePDoctor.tellg(); 
				filePDoctor.seekp(lastread - sizeof(pdoctor));
				filePDoctor.write((char*)&pdoctor,sizeof(pdoctor));
				found = true;
			}
			filePDoctor.read((char*)&pdoctor, sizeof(pdoctor));
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
	filePDoctor.close();
}
///////////////////////////////////////////////////////////////////////////
void DeletePDoctor()
{
	filePDoctor.open("PermissionDoctor.bin", ios::in | ios::binary);
	fstream backup;
	// create file to backup data that don't want delete
	backup.open("TempDoctor.bin", ios::out | ios::binary);
	
	bool found = false;
	if(filePDoctor.fail())
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
		filePDoctor.read((char*)&pdoctor,sizeof(pdoctor));
		while(!filePDoctor.eof())
		{
			if(deleteid == pdoctor.id)
			{
				found = true;
			}
			if(deleteid != pdoctor.id)
			{
				backup.write((char*)&pdoctor, sizeof(pdoctor));
			}
			filePDoctor.read((char*)&pdoctor,sizeof(pdoctor));
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
	filePDoctor.close();
	backup.close();
	remove("PermissionDoctor.bin");
	rename("TempDoctor.bin", "PermissionDoctor.bin");
} 

#endif