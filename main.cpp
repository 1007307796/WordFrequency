#include "heads.h"
int main(void)
{
	const int filecount=5;
	//构造所有需要处理的文件的数组
	txtfile files[]={
		{"text1.txt",""},
		{"text2.txt",""},
		{"text3.txt",""},
		{"text4.txt",""},
		{"text5.txt",""}
	};
	//！！！for循环内的i++和++i都是在执行了循环体内语句后再执行的,++i更节省空间
	for (int i=0;i<filecount;++i)
	{
		readfile(&files[i]);
	}
	for (int i=0;i<filecount;++i)
	{
		parseword(&files[i]);
	}
	/*printf("%s",files[4].text);*/
	//无限循环，提供用户查询
	while(true)
	{
		puts("please input the keyword: ");
		char keyword[30]="";
		scanf("%s",keyword);
		if(0==strcmp(keyword,"#"))
			break;
		//extern连接外部函数，参考：https://blog.csdn.net/candcplusplus/article/details/7036917
		countkeyword(files,filecount,keyword);
		sortfiles(files,filecount);
		printfiles(files,filecount,keyword);		
	}
	clean(files,filecount);
	return 0;
}