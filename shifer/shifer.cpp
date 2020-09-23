#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "readData.h"
#include "encode.h"
#include "decode.h"
#include "ReadData.h"

int main(int argc, char* argv[])//1 encode, 0 decode
{
	char* inp = argv[1];
	char* out = argv[2];
	char* change = argv[3];//encode or decode
	char* t = argv[4];//��������� ���������
	int shag = atoi(t);//��������� � int
	if (*change == '1')
		encode(inp, out, shag);
	if (*change == '0')
		decode(inp, out, shag);
	return 0;
}
