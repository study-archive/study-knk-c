// Name : ex1.c
// Purpose : Purpose here.
// Author : Jay J. Lim
// Date : Dec. 08, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>

int main(void) {

	printf("\"%6d,%4d\"\n", 86, 1040);   // "    86,1040"
	printf("\"%12.5e\"\n", 30.253);      // " 3.02530e+01"
	printf("\"%.4f\"\n", 83.162);        // "83.1520"
	printf("\"%-6.2g\"\n", .0000009979); // "1e-06 "

	return 0;
}