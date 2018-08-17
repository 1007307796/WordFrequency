#include "heads.h"
//切分单词模块
char* cutword(char* text,char* word)
{
	bool continchar=false;//初始化目标字符串为空
	int i=0;//源字符串的引索
	int w=0;//目标字符串的引索
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