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

}

storedata::~storedata()
{
    //dtor
}


