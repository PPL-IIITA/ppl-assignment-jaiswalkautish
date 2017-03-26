#ifndef Q3_H
#define Q3_H
#include "initialize.h"
#include "couple.h"
#include "gifts.h"

using namespace std;

class q3 : public initialize, public couple, public gifts/*! \brief class q3
 *        
 *
 *  class that just inherits the data members and methods of all other classes.
 */{

};
#endif