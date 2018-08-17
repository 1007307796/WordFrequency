#include <lmcons.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
typedef struct _word
{
	char text[30];
	struct _word* next;
	int count;//ÿƪ���¸������ʳ��ֵĴ���
}word;
typedef struct _txtfile
{
	char name[128];
	char text[1024*128];
	word* list;//���浥�ʵ�����
	int total;//�����ܴ���
	float correlation;//�ؼ��������еĴ�Ƶ
}txtfile;

void readfile(txtfile*);
void parseword(txtfile*);
void cleantext(char*);
char* cutword(char* ,char* );
word* findnode(word*,char* );
word* createnode(char* );
void countkeyword(txtfile*,int,char*);
void sortfiles(txtfile*,int);
void printfiles(txtfile*,int,char*);
void clean(txtfile*,int);


