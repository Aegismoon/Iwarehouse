#include "singlestore.h"

singlehouse::singlehouse()
{
   ID = 1, Name = "Muratwarehouse" //ctor
}

singlehouse::~singlehouse(singlehouse const& object)
{
    delete object;
    //dtor
}

storedata::storedata()
{
    item myitem = {1,"Myitem",1,1,1,1,1,0};
}

storedata::~storedata(item& myitem)
{
   delete myitem; //dtor
}

void storedata::getItem()
{
    return myitem;
}

item& storedata:: setItem(item& my item)
{



}
