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
// kg-kilogramm, ft -feet, m - meters, pcs - pcs
enum measure    { kg,ft,m,pcs };
// rub - rubles, usd - US dollars, eur - euro
enum currensy   { rub,usd,eur };
// list of command available for user
enum commands   { help, sort, add, clear, save, load, close };

// long story short
typedef unsigned int UINT;


// structrure for storage
struct store
{
    double price;
    string title;
    UINT keycode;
    UINT amount;
    measure    Unit;
    currensy   Currency;
//	futuremark
//	string	 managerName;
    bool   available;
};



// function prototypes
namespace   Murat
{

void  add () ;
void  sort() ;
void  help() ;
void  close();
void  save() ;
void  load() ;
void  clear();
void loop();
}



int main (int argc, char* argv[])

{


//  setting request string
    Murat::loop();

    return 0;
}



void loop ()
{
    //  console app header 3 t on the right
    cout << "\t\t\t Warehouse program" << '\n';
    cout << "\nEnter your command please>";


    while (1)
    {
        string command;
        // to catch CLRF
        string crlf = ("'\n'");

        if (cin >> command)
        {
            // elegant solution for string to enum required

            // conditions to check - very unaccurate need to be refactored



            if ( command == "add" )
            {
                Murat::add();

                Murat::loop();
            }

            if ( command == "clear" )
            {
                Murat::clear();

               Murat::loop();
            }

            if (command == "sort" )
            {
                Murat::sort();

               Murat::loop();
            }
            if (command == "help" )
            {
                Murat::help();

               Murat::loop();
            }
            if (command == "close" )
            {
                Murat::close();

                Murat::loop();
            }
            if ( command == "save" )
            {
                Murat::save();

               Murat::loop();
            }
            if (command == "load" )
            {
                Murat::load();

               Murat::loop();
            }


            /*
              switch (switcher)
            {
            	case  add  :  Murat::add();    Murat::loop();
            	case  sort :  Murat::sort();   Murat::loop();
            	case  clear:  Murat::clear();  Murat::loop();
            	case  help :  Murat::help();   Murat::loop();
            	case  close:  Murat::close();  Murat::loop();
            	case  save :  Murat::save();   Murat::loop();
            	case  load :  Murat::load();   Murat::loop();
            	default: cout << "\nThis causes no effect in program, use >help for assistance"; Murat::loop();
            	// also recursive solution required without stack overflow

            }// switch breaks are for experiments */
        } // command enter condition break

    }// infinite loop break


}





void add()
{
    cout << "addFunction" << '\n';
    system ("pause");
    system ("cls");
}

void sort()
{
    cout << "sortFunc" << '\n';
    system ("pause");
    system ("cls");
}

void clear()
{
    cout << "clearFunc" << '\n';
    system ("pause");
    system ("cls");
}

void help()
{
    cout << "helpFunc" << '\n';
    system ("pause");
    system ("cls");
}

void close()
{
    cout << "closeFunc" << '\n';
    system ("pause");
    system ("cls");
}

void save()
{
    cout << "saveFunc" << '\n';
    system ("pause");
    system ("cls");
}

void load()
{
    cout << "loadFunc" << '\n';
    system ("pause");
    system ("cls");
}

void loop ()
{
    //  console app header 3 t on the right
    cout << "\t\t\t Warehouse program" << '\n';
    cout << "\nEnter your command please>";


    while (1)
    {
        string command;

        if (cin >> command)
        {
            // elegant solution for string to enum required

            // conditions to check - very unaccurate need to be refactored



            if ( command == "add" )
            {
                Murat::add();

              Murat::loop();
            }

            if ( command == "clear" )
            {
                Murat::clear();

                Murat::loop();
            }

            if (command == "sort" )
            {
                Murat::sort();

                Murat::loop();
            }
            if (command == "help" )
            {
                Murat::help();

               Murat::loop();
            }
            if (command == "close" )
            {
                Murat::close();

                Murat::loop();
            }
            if ( command == "save" )
            {
                Murat::save();

               Murat::loop();
            }
            if (command == "load" )
            {
                Murat::load();

               Murat::loop();
            }


            /*
              switch (switcher)
            {
            	case  add  :  addFunc();    loopFunc();
            	case  sort :  sortFunc();   loopFunc();
            	case  clear:  clearFunc();  loopFunc();
            	case  help :  helpFunc();   loopFunc();
            	case  close:  closeFunc();	loopFunc();
            	case  save :  saveFunc();   loopFunc();
            	case  load :  loadFunc();   loopFunc();
            	default: cout << "\nThis causes no effect in program, use >help for assistance"; loopFunc();
            	// also recursive solution required without stack overflow

            }// switch breaks are for experiments */
        } // command enter condition break

    }// infinite loop break


}




