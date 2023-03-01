#include<stdio.h>
#include"turnToBit.h"





int main()
{
	int x = 78;
	printf("Bitwise left shift operator.\n");
	printBits(x);  //                     0000 0000 0000 0000 0000 0000 0100 1110   
	printBits(x << 1);   //               0000 0000 0000 0000 0000 0000 1001 1100    split to the left and add a zero to the lsb.
	printBits(x << 2);  //                0000 0000 0000 0000 0000 0001 0011 1000
	/*
	
	 op1>>op2

	for the bitwise rigth shift operator if
	-Left side operant is an unsigned integer a zero adding to the msb.
	-Left side operant is signed positive integer also a zero adding to the mbs.
	-Left side operant is signed negative integer according to the IDE it can added 0 or 1 to the mbs.

	
	*/
	printf("\n\nBitwise rigth shift operator.\n");
	unsigned int z = 20;
	int w = 15;
	int y = 2;
	printBits(z);
	printBits(z >> y);
	printf("\n\n");
	printBits(w);
	printBits(w >> y);



	/*
	 bitwise or operator -->   op1|op2    there are two operant 

	this operator perform the or process for each bit of the numbers.

	for example 
	  a=    1001 1101
	  b=    0100 1001
	  a|b=  1101 1101
	
	
	
	*/
	printf("\n\nBitwise or operator.\n");

	printBits(x);
	printBits(w);
	printBits(x | w);

	/*
	Setting a bit 
	 Settin a bit means the making the  value of bit 1.

	 a        = 1001 ?100
	 b        = 0000 0001 --> bitmask
	 b<<3     = 0000 1000 --> left shift operator performed as much as the order of the bit which will be setted
	 a|(b<<3) = 1001 1100 --> after or opreration between a and shifted b the 3rd bit setted to 1.

	 
	 
	 
	 
	 
	 */

	printf("\n\nSetting operation.\n");

	int a = 27;
	int b = 1; // bitmask
	printBits(a);
	printBits(b);
	//printBits(a | (b << 2));

	a |= (b << 2);
	printBits(a);



	/*
	  ~op1 --> bitwise not operator. This operator is a prefix uniary operator.
	  When it is performed, it converts the zeros to ones, and ones to zeros.

	  a = 1001 1100
	  ~a= 0110 0011
	
	
	
	*/
	printf("\n\nBitwise not operator.\n");

	int c = 58;
	printBits(c); // 00000000000000000000000000111010
	//printBits(~c); 11111111111111111111111111000101

	printf("\n\nBitwise not operator.\n");

	int val1 = 27, val2 = 45;
	printBits(val1);
	printBits(val2);
	printBits(val1 & val2);

	printf("val1&val2 = %d", val1& val2);


	/*
	getting bit(testing bit)


	a           = 0000 1100
	b           = 0000 0001
	b<<3        = 0000 1000
	a & b<<3    = 0000 1000	  --> in this process we are trying the learning balue of third bit
	
	
	
	*/
	printf("\n\nGetting operation.\n");

	printBits(47 & 1 << 3); // 1000 --> result shows that the third bit of 47 is 1.


	/*
	Clearing operation is used the set the chosen bit to 0.

	a         = 0110 ?001
	b         = 0000 0001
	b<<3      = 0000 1000
	~b<<3     = 1111 0111
	a&(~b<<3) = 0110 0001   we setted the third bit to 0
	
	
	
	
	
	
	 */


	printf("\n\nBitwise exor operator.\n");

	printBits(41);
	printBits(25);
	printBits(41 ^ 25);

	/*
	flip a bit(toggle a bit)

	a          = 0011 0110
	b          = 0000 0001
	b<<3       = 0000 1000
	a^(b<<3)   = 0011 1110        
	
	
	
	
	
	*/





}