#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>
#include "readData.h"
#include "encode.h"
#define length 999


void encode(char* inp, char* out, int shag)
{
    FILE* fl1 = fopen(inp, "r");
    FILE* fl2 = fopen(out, "w");
    int schet = read(fl1);
    char alphabet[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz ";
    long lon = strlen(alphabet);
    int vp = 0;
    char* str = (char*)calloc(schet, sizeof(char));
    char* str1 = (char*)calloc(schet, sizeof(char));
    while (fgets(str, length, fl1))
    {
        int dlina = strlen(str);
        for (int i = 0; i < dlina; i++)
        {
            for (int j = 0; j < lon; j++)
            {
                if (i == dlina - 1)
                {
                    str1[vp] = str[dlina - 1];
                    break;
                }
                if (str[i] == alphabet[j])
                {
                    str1[vp] = alphabet[(j + shag) % 63];
                    vp++;
                    break;
                }

            }
        }
        fputs(str1, fl2);
        vp = 0;
    }
    free(str);
    free(str1);
}