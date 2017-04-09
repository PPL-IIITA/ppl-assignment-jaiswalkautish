#ifndef HASH_IMPL_H
#define HASH_IMPL_H
#include "hboy.h"
#include "hgirl.h"
#include "couple.h"
#include "find_girlfriend.h"

using namespace std;

class hash_impl : public find_girlfriend /*! \brief class hash_impl.
 *        
 *
 *  class that has a method to find the girlfriend of the boys in the given list using hashing
 */{
public:
	/** function to get the boy's girlfriend using hashing */
	void search(couple cp[], int n_cpl, string list[], int n);
};
#endif