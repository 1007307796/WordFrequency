//��ȡ�ļ���ģ��
#include "heads.h"
void readfile(txtfile* file)
{
	if (NULL==file)
	{
		printf("this file don't exist");
		return;
	}
		
	//��ֻ����ʽ�򿪽ṹ��������ļ�
	FILE* fp=fopen(file->name,"r");
	if (NULL!=fp)
	{
		/*printf("the file has contents");*/
		char line[256];
		while (NULL!=fgets(line,256,fp))
		{
			strcat(file->text,line);
		}
		fclose(fp);
	}

}