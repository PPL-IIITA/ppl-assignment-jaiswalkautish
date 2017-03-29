#ifndef GIFTS_H
#define GIFTS_H
#include <stdio.h>
#include <stdlib.h>
using namespace std;

class gifts/*! \brief class gifts.
 *        
 *
 *  class that has various data members and functions that deals with the gifts of the couples
 */{
	public:
		/** to store the pice of the gift  */	
		int price;
		/** the value of the gift  */	
		int value;
		/** the type of the gift: 1-essential 2-luxury 3-utility  */	
		int type;
		/** function to initialize the gifts array from the text file  */
		void init(gifts *gfts[], int *n);		
		/** function that performs sorting of the gifts as per the price  */
		void sorting(gifts *gfts[], int n_gfts); 		
		/** function that prints the gifts along with its all attributes  */
		void print_gfts(gifts *gfts[], int n);

};
#endif