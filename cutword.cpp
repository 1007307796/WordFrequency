#include "heads.h"
//�зֵ���ģ��
char* cutword(char* text,char* word)
{
	bool continchar=false;//��ʼ��Ŀ���ַ���Ϊ��
	int i=0;//Դ�ַ���������
	int w=0;//Ŀ���ַ���������
	while (i<strlen(text))
	{
		if (' '==text[i]||('\n'==text[i]))
		{
			if (continchar)
			{
				break;
			} 
			else
			{
				++i;
				continue;
			}
		}
		else
		{
			continchar=true;
			word[w]=text[i];
			++w;
			++i;
		}
	}
	word[w]='\0';
	return text+i;
}