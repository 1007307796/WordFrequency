#include "heads.h"
//�����ı��еķ���ĸ�ַ�
void cleantext(char* text)
{
	int i =0;
	while(i<strlen(text))
	{
		if (!isalnum((unsigned char)text[i]))
		{
			//˫���������������ַ���ָ�룬�������������Ĳ����ַ�
			text[i] = ' ';
		}
		++i;
	}
}