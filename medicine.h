#ifndef _FILE_MEDICINE_H
#define _FILE_MEDICINE_H

#include<iostream>
#include<conio.h>
#include<fstream>
#include"antheaderInput.h"
#include"design.h"
#include"antheaderPlusPlus.h"
using namespace std;

class Medicine
{
	public:
		int id = 1020;
		string name, company, type, description;
		float cost;
	public:
		void Input()
		{
			inputMedicine();
			foreColor(4);
			gotoxy(66, 10);
			fflush(stdin); cin.clear();
			cout<<"Name		:  "; 
			gotoxy(66, 13);
			cout<<"ID		:  ";
			gotoxy(66, 16);
			cout<<"Company	:  "; 
			gotoxy(66, 19);
			cout<<"Cost		:  "; 
			gotoxy(66, 22);
			cout<<"Type		:  "; 
			gotoxy(66, 25);
			cout<<"Description	:  "; 
			
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
				inputLetter(company);
				if(company == 	"\0")
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
			cost = inputFloat();
			fflush(stdin); cin.clear();
			gotoxy(83, 22); 
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
			gotoxy(83, 25);  
			description = inputString();
			fflush(stdin); cin.clear();
		}

		void Display()
		{	
			char a = 196;
			foreColor(6);
			cout<<"\t\t\t  ";
			cout<<"   "<<left<<setw(25)<<name<<setw(10)<<id<<setw(25)<<company<<setw(15)<<cost<<setw(25)<<type<<setw(25)<<description<<endl;
			foreColor(5);
			cout<<"\t\t\t  ";
			for(int i=0; i<118; i++)
			{
				cout<<a;
			}			
		}
		void Header()
		{
			char a = 196;
			foreColor(4);
			gotoxy(0, 9);
			cout<<"\t\t\t  ";
			for(int i=0; i<118; i++)
			{
				cout<<a;
			}
			cout<<"\n\t\t\t  ";
			foreColor(2);
			cout<<"   "<<left<<setw(25)<<"Name"<<setw(10)<<"ID"<<setw(25)<<"Company"<<setw(15)<<"Cost($)"<<setw(25)<<"Type"<<setw(25)<<"Description"<<endl;
			foreColor(4);
			cout<<"\t\t\t  ";
			for(int i=0; i<118; i++)
			{
				cout<<a;
			}
			cout<<"\t\t\t     ";
		}
		void edit()
		{
			inputMedicine();
			foreColor(4);
			gotoxy(66, 10);
			fflush(stdin); cin.clear();
			cout<<"Name		:  "; 
			gotoxy(66, 13);
			cout<<"ID		:  ";
			gotoxy(66, 16);
			cout<<"Company	:  "; 
			gotoxy(66, 19);
			cout<<"Cost		:  "; 
			gotoxy(66, 22);
			cout<<"Type		:  "; 
			gotoxy(66, 25);
			cout<<"Description	:  "; 
			
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
				inputLetter(company);
				if(company == 	"\0")
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
			cost = inputFloat();
			fflush(stdin); cin.clear();
			gotoxy(83, 22); 
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
			gotoxy(83, 25);  
			description = inputString();
			fflush(stdin); cin.clear();
		}
		
};
////////////////////////////////////////////////
// Create object for class Product
	Medicine med;
	fstream filemed;
////////////////////////////////////////////////	

////////////////////// Create function /////////////////////////////
void InsertMed()
{
	filemed.open("Medicine.bin", ios::in | ios::binary);
	
	int lastId = 1020;
	
	while(filemed.read((char*)&med,sizeof(med)))
	{
		lastId = med.id;
	}
	med.id = lastId + 137;
	filemed.close();
	
	// Create New file for write data in binary file
	filemed.open("Medicine.bin", ios::out | ios::app | ios::binary);
	// how to write data to file
	med.Input();
	foreColor(5);
	cout<<"\n\n\n\n\t\t\t\t\t\t\t\t\t    <<< Successfull >>>";
	delay(2500);
	filemed.write((char*)&med,sizeof(med));
	filemed.close();
}
/////////////////////////////////////////////////////////////////
void ShowMed()
{
	// how to read data from file
	// open file
	filemed.open("Medicine.bin", ios::in | ios::binary);
	if(filemed.fail()) // = if(!file)
	{
		gotoxy(73, 15);
		cout<<"<<< file not found >>>"<<endl;
	}
	else
	{
		cout<<endl<<endl;
		med.Header();
		filemed.read((char*)&med,sizeof(med));
		while(filemed.eof()!= true) // = while(!file.eof())
		{
			med.Display();
			filemed.read((char*)&med,sizeof(med));
			cout<<endl;
		}
	}
	filemed.close();
}
/////////////////////// Create function search data from file /////////////////////////////////
void SearchMed()
{
	filemed.open("Medicine.bin", ios::in | ios::binary);
	bool found = false;
	if(filemed.fail())
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
		filemed.read((char*)&med,sizeof(med));
		while(!filemed.eof())
		{
			if(tempId == med.id)
			{
				cls();
				cover();
				gotoxy(77,5);
				foreColor(3);
				cout<<"... Medicine Data ...";
				med.Header();
				med.Display();
				foreColor(3);
				cout<<"\n\n\n\n\t\t\t\t\t\t\t\t\t <<< Press to Continue >>>";
				found = true;
				getch();
			}
			filemed.read((char*)&med,sizeof(med));
		}
		if(found == false)
		{
			cls();
			cover();
			NotFind();
			delay(1500);
		}
	}
	filemed.close();
}

void UpdateMed()
{
	filemed.open("Medicine.bin", ios::out | ios::in | ios::binary);
	bool found = false;
	if(filemed.fail())
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
		filemed.read((char*)&med,sizeof(med));
		while(!filemed.eof())
		{
			if(updateid == med.id)
			{
				cls();
				cover();
				gotoxy(72, 5);
				foreColor(3);
				cout<<"---- Enter Medicine Data ----";
				med.edit();
				int lastread = filemed.tellg(); 
				filemed.seekp(lastread - sizeof(med));
				filemed.write((char*)&med,sizeof(med));
				found = true;
			}
			filemed.read((char*)&med, sizeof(med));
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
	filemed.close();
}
///////////////////////////////////////////////////////////////////////////
void DeleteMed()
{
	filemed.open("Medicine.bin", ios::in | ios::binary);
	fstream backup;
	// create file to backup data that don't want delete
	backup.open("TempMed.bin", ios::out | ios::binary);
	
	bool found = false;
	if(filemed.fail())
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
		filemed.read((char*)&med,sizeof(med));
		while(!filemed.eof())
		{
			if(deleteid == med.id)
			{
				found = true;
			}
			if(deleteid != med.id)
			{
				backup.write((char*)&med, sizeof(med));
			}
			filemed.read((char*)&med,sizeof(med));
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
	filemed.close();
	backup.close();
	remove("Medicine.bin");
	rename("TempMed.bin", "Medicine.bin");
} 

#endif