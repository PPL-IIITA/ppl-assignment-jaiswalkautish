#ifndef INITIALIZE_H
#define INITIALIZE_H
#include "hboy.h"
#include "hgirl.h"
using namespace std;

class initialize/*! \brief class initilalize.
 *        
 *
 *  class that has a method to initialise the boy and the girl array with the data of the randomly gelerated text files
 */{
public:
	/** the number of boys */
	int nb;
	/** the number of girls */
	int ng;
	/** function to initialize the boy's and girl's data from text files   */
	void initi(boy bb[], girl gg[]);			
	/** function to sort the boy's list by his attractiveness   */
	void sort_boy(boy bb[]);
	/** function to sort the girl's list by her maintainance cost   */
	void sort_girl(girl gg[]);		
};
#endif