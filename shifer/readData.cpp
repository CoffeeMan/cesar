#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "readData.h"
#include "decode.h"
#include "encode.h"
#define length 999


int read(FILE* fl)
{
	fseek(fl, 0, SEEK_END);
	long inf = ftell(fl) + 1;
	fseek(fl, 0, SEEK_SET);
	return (int)inf;
}