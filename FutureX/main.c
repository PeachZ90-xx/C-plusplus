#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <sys/time.h>

typedef int int32;
typedef unsigned char int8;

static void integrate_arrays(int8  *output, int8  *input_1, const int8  *input_2, int32 length)
{
	int32 i = 0;

	for (i = 0; i<length; i++)
	{
		output[i] = (int8)(input_1[i] ^ input_2[i]);
	}

	return;
}

//itoa cannot be a static program name with my compiler due to a function that converts int to string (itoa)
//so, I renamed the program to "my_itoa" to correct the conflicting types error.
//I also replaced any calls to this program.
static void my_itoa(int32 num, int8  *alpha, int32 radix)
{
	if (radix == 10)
	{
		sprintf(alpha, "%i", num);
	}
	else if (radix == 16)
	{
		sprintf(alpha, "%X", num);
	}
}


/* 
The error was itoa program. Because it is already a function, I had to change it to "my_itoa".
*/ 
int8 *gen_modified_key(int8 modifier, const int8  *input_1, int32 length) //
{
	
	int8 leading[3];
	int32 i_leading;
	int8 * temp_string = NULL; 
	int8 * ret; 
	int32 i = 0;
	
	my_itoa(modifier / 2, leading, 10);
	i_leading = atoi(leading); 
	temp_string = (int8 *)malloc(8);
	ret = (int8 *)malloc(length);
	memset(temp_string, 0, 8);
	temp_string[0] = 0;
	
	
	
	if ((modifier + 1) % 2 == 0) {
		temp_string[0] = (int8)((i_leading << 4) + 8);
	}
	else {
		temp_string[0] = (int8)(i_leading << 4);
	}
	
	for (i = 0; i<(length >> 3); i++)
	{
		integrate_arrays(ret + i * 8, temp_string, input_1 + i * 8, 8);
	}
	free(temp_string);
	return ret;
}

// Do not change anything in main
// main only contains example input
// Change anything else
int main(int argc, char **argv) {

	// Example input data
	int8 data[32] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16,
		17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32 };
	int8 *resp = gen_modified_key(0x10, data, sizeof(data));
	free(resp);

	return 0;
}


