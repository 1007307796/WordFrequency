//读取文件子模块
#include "heads.h"
void readfile(txtfile* file)
{
	if (NULL==file)
	{
		printf("this file don't exist");
		return;
	}
		
	//以只读方式打开结构体关联的文件
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