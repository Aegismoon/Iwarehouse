////////////////////////////////////////////
//	Concole application C++		         //
//					                     //
//	    <Warehouse>                      //
//					                     //
//	 Author Dmitry Murat		         //
///////////////////////////////////////////

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <fstream>
#include <cstring>

using namespace std;

// numeral for purposes
enum measureUnits  { kg,ft,m,pcs };
enum currensyUnits { rub,usd,eur };
enum commandList   { help, sort, add, clear, save, load, close };

// long story short
typedef measureUnits meU;
typedef unsigned int UINT;
typedef currensyUnits cuU;
typedef commandList comLi;

// structrure for storage
struct storeItem
	{
		double price;
		string name;
		UINT number;
		UINT amount;
		meU	   itemUnit;
		cuU	   itemCurrency;
//		expansion case - futuremark
//		char   *managerName;
		char   *itemName;
		bool   avail;
	};

typedef storeItem stI;

// function prototypespes
void  addFunc () ;
void  sortFunc() ;
void  helpFunc() ;
void  closeFunc();
void  saveFunc() ;
void  loadFunc() ;
void  clearFunc();


int main (int argc, char* argv[])

{
//  console app header 3 t on the right
    cout << "\t\t\t Warehouse program" << '\n';

//  setting request string

 
   loopFunc();

   return 0;
}



void loopFunc (string command)
{

	cout << "\nEnter your command please>";

	// infinite loop
	while (1)
	{	
		string command;
		
		if (cin >> command)
		{
		//	check wich command is written
		// elegant solution for string to enum required	
			
		    switch (switcher)
			{
				case  add  :  addFunc();   loopFunc();
				case  sort :  sortFunc();   loopFunc();
				case  clear:  clearFunc();   loopFunc();
				case  help :  helpFunc();   loopFunc();
				case  close:  closeFunc();	loopFunc();
				case  save :  saveFunc();    loopFunc();
				case  load :  loadFunc();   loopFunc();;
				default: cout << "\nThis causes no effect in program, use >help for assistance"; loopFunc();
				// also recursive solution required without stack overflow
				
			}// switch breaks
		} // command enter condition break

	}// infinite loop break


}

void addFunc()
{
  cout << "addFunction" << '\n';
  system ("pause");
  system ("cls");
};

void sortFunc()
{
  cout << "sortFunc" << '\n';
  system ("pause");
  system ("cls");
};

void clearFunc()
{
  cout << "clearFunc" << '\n';
  system ("pause");
  system ("cls");
};

void helpFunc()
{
  cout << "helpFunc" << '\n';
  system ("pause");
  system ("cls");
};

void closeFunc()
{
  cout << "closeFunc" << '\n';
  system ("pause");
  system ("cls");
};

void saveFunc()
{
  cout << "saveFunc" << '\n';
  system ("pause");
  system ("cls");
};

void loadFunc()
{
  cout << "loadFunc" << '\n';
  system ("pause");
  system ("cls");
};


