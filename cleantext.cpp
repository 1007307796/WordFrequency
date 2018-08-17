#include "heads.h"
//清理文本中的非字母字符
void cleantext(char* text)
{
	int i =0;
	while(i<strlen(text))
	{
		if (!isalnum((unsigned char)text[i]))
		{
			//双引号括起来的是字符串指针，单引号括起来的才是字符
			text[i] = ' ';
		}
		++i;
	}
}