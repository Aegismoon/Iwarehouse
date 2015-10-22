//==============Warehouse class header==========//
// cpp not compiled yet
// basic class single house + class
// current topic - to design app enviroment ( infinite loop) with methods //


#pragma once
#include <string>
#include <iostream>

namespace Murat
{


// is it good to left enums within the class?
// kg-kilogramm, ft -feet, m - meters, pcs - pcs
enum measure    { kg,ft,m,pcs };
// rub - rubles, usd - US dollars, eur - euro
enum currensy   { rub,usd,eur };
// list of command available for user
enum commands   { help, sort, add, clear, save, load, close };

//------------- main class for warehouse
class singlehouse

{
    public:
        static singlehouse& instance()

        {
            static singlehouse object;
		    return object;
        }


        unsigned int getID() { return ID; }
        std::string getName() {return Name;}

       private:
       unsigned int ID;
       std::string Name;

       singlehouse();
       ~singlehouse(singlehouse&);
       singlehouse(singlehouse const&);
	   singlehouse& operator= (singlehouse const&);




};

//-----------------------------------------------
class storedata

{
    public:
    storedata();

    void setstore(store&);
    store& getstore();

    ~storedata();

    private:
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

};



class environment
{

    public:
    add();
    safe();
    load();
    del();
    help();
    sort();
    loop();
    static environment& instance()

        {
            static environment object;
		    return object;
        }


     private:

       environment();
       ~environment(environment&);
       environment(environment const&);
	   environment& operator= (environment const&);


}


};