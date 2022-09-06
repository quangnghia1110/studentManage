#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <conio.h> 
#include <fstream>
#include <Windows.h>
#include <cstdlib>
using namespace std;
struct LIST
{
	
};
static int index  = 0; 
static int indexCurrent = 0;
static LIST tab[100];
bool CheckTab()
{		      
	if(index==-1&&indexCurrent==-1)
		return true;
	return false;
}
int ConvertString(string str)
{
	int sum =0; 
	int len = str.length();
	for(int i=0;i<len;i++)
	{
		sum=sum*10+ (str[i]-'0');	
	} 
	return sum;	
} 
void Visit(LIST &list, string url)
{
	if(CheckTab()==true)
	{
		
		cout<<"Tab null, Create Tab first!!\n";
				return;
	}
	cout<<"You are in "<<url<<endl<<endl;
	
}
void PrintArt()
{
	ifstream file;
	file.open("AsciiArt.txt");  
	 
	while(!file.eof())	
	{
		string str; 
		getline(file,str);
		cout<<str<<endl;
	}
	// white 
	file.close(); 
} 
void PrintList(const char *filename)
{
	ifstream file;
	file.open(filename); 
	 
	while(!file.eof())	
	{
		string str; 
		getline(file,str);
		cout<<str<<endl;
	}
	
	file.close(); 
} 


void createTab(LIST list)
{
	
}
void switchTab(LIST list)
{
	
}
void clearTab(LIST list)
{
	
}
void tabMenu(LIST list)
{
	string optionMenu;
	int option;
	do{
		cout<<"|--------------------------------------------------------------------------------------------------------|"<<endl;
		PrintArt();  
		PrintList("TabOption.txt");
		cout<<"|--------------------------------------------------------------------------------------------------------|"<<endl; 
		do{
			cout<<"Enter your option: ";
			cin>>optionMenu;
			option=ConvertString(optionMenu);
			if(option<0||option>5)
				cout<<"Invalid option, Enter again!\n";
		}while(option<0||option>5);
		switch(option)
		{
			case 1:
				{
					createTab(list);
					system("pause");
					system("cls");
					break;
				}
			case 2:
				{
					switchTab(list);
					system("pause");
					system("cls");
					break;
				}
			case 3:
				{
					clearTab(list);
					system("pause");
					system("cls");
					break;
				}
			case 0:
				{
					return;
				}
		};
	}while(option!=0);
}





void bookMark(LIST list)
{
	
}
void unMark(LIST list)
{
	
}
void unAllMark(LIST list)
{
	
}
void visitMark(LIST list)
{
	
}
void bookMarkMenu(LIST list)
{
	string optionMenu;
	int option;
	do{
		cout<<"|--------------------------------------------------------------------------------------------------------|"<<endl;
		PrintArt();  
		PrintList("BookMarkOption.txt");
		cout<<"|--------------------------------------------------------------------------------------------------------|"<<endl; 
		do{
			cout<<"Enter your option: ";
			cin>>optionMenu;
			option=ConvertString(optionMenu);
			if(option<0||option>6)
				cout<<"Invalid option, Enter again!\n";
		}while(option<0||option>6);
		switch (option)
		{	
			case 1:
			{
				bookMark(list); 
				system("pause");
				system("cls");
				break; 
			}
			case 2:
			{
				unMark(list);
				system("pause");
				system("cls");
				break;	
			} 
			case 3:
			{
				unAllMark(list);
				system("pause");
				system("cls");
				break;
			}
			case 4:
			{ 
				visitMark(list);
				system("pause");
				system("cls");
				break;	
			} 
			case 0:
				return; 
		}
	}while(option!=0);
}


void visitWeb(LIST list)
{
	string url;
	if(CheckTab())
	{
		cout<<"Tab null";
	}
	cout<<"Enter the url: ";
	cin>>url;
	Visit(list,url);
}
void clearWeb(LIST list)
{
	
}
void webMenu(LIST list)
{
	string optionMenu;
	int option;
	do{
		cout<<"|--------------------------------------------------------------------------------------------------------|"<<endl;
		PrintArt();  
		PrintList("WebOption.txt");
		cout<<"|--------------------------------------------------------------------------------------------------------|"<<endl; 
		do{
			cout<<"Enter your option: ";
			cin>>optionMenu;
			option=ConvertString(optionMenu);
			if(option<0||option>6)
				cout<<"Invalid option, Enter again!\n";
		}while(option<0||option>6);
		switch(option)
		{
			case 1:
				{
					visitWeb(list);
					system("pause");
					system("cls");
					break;
				}
			case 2:
				{
					clearWeb(list);
					system("pause");
					system("cls");
					break;
				}
			case 3:
				{
					system("cls");
					tabMenu(list);
					system("cls");
					break;
				}
			case 4:
				{
					system("cls");
					bookMarkMenu(list);
					system("cls");
					break;
				}
			case 0:
				{
					return;
				}
		};
	}while(option!=0);
}



void showHistory(LIST list)
{
	
}
void removeHistory(LIST list)
{
	
}
void clearHistory(LIST list)
{
	
}
void visitHistory(LIST list)
{
	
}
void historyMenu(LIST list)
{
	string optionMenu;
	int option;
	do{
		cout<<"|--------------------------------------------------------------------------------------------------------|"<<endl;
		PrintArt();  
		PrintList("HistoryOption.txt");
		cout<<"|--------------------------------------------------------------------------------------------------------|"<<endl; 
		do{
			cout<<"Enter your option: ";
			cin>>optionMenu;
			option=ConvertString(optionMenu);
			if(option<0||option>6)
				cout<<"Invalid option, Enter again!\n";
		}while(option<0||option>6);
		switch(option)
		{
			case 1:
				{
					system("cls");
					showHistory(list);
					system("pause");
					system("cls");
					break;
				}
			case 2:
				{
					system("cls");
					removeHistory(list);
					system("pause");
					system("cls");
					break;
				}
			case 3:
				{
					system("cls");
					clearHistory(list);
					system("cls");
					break;
				}
			case 4:
				{
					system("cls");
					visitHistory(list);
					system("cls");
					break;
				}
			case 0:
				{
					return;
				}
		};
	}while(option!=0);
}
void mainMenu(LIST list)
{
	string optionMenu;
	int option;
	do{
		cout<<"|--------------------------------------------------------------------------------------------------------|"<<endl;
		PrintArt();  
		PrintList("MainOption.txt");
		cout<<"|--------------------------------------------------------------------------------------------------------|"<<endl; 
		do{
			cout<<"Enter your option: ";
			cin>>optionMenu;
			option=ConvertString(optionMenu);
			if(option<0||option>3)
				cout<<"Invalid option, Enter again!\n";
		}while(option<0||option>3);
		switch(option)
		{
			case 1:
				{
					system("cls");
					webMenu(list);
					system("cls");
					break;
				}
			case 2:
				{
					system("cls");
					historyMenu(list);
					system("cls");
					break;
				}
			case 0:
				{
					exit(0);
				}
		};
	}while(option!=0);
}
int main()
{
	SetConsoleOutputCP(65001); 
	mainMenu(tab[0]); 
	return 0;
}