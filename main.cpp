#include "heads.h"
int main(void)
{
	const int filecount=5;
	//����������Ҫ������ļ�������
	txtfile files[]={
		{"text1.txt",""},
		{"text2.txt",""},
		{"text3.txt",""},
		{"text4.txt",""},
		{"text5.txt",""}
	};
	//������forѭ���ڵ�i++��++i������ִ����ѭ������������ִ�е�,++i����ʡ�ռ�
	for (int i=0;i<filecount;++i)
	{
		readfile(&files[i]);
	}
	for (int i=0;i<filecount;++i)
	{
		parseword(&files[i]);
	}
	/*printf("%s",files[4].text);*/
	//����ѭ�����ṩ�û���ѯ
	while(true)
	{
		puts("please input the keyword: ");
		char keyword[30]="";
		scanf("%s",keyword);
		if(0==strcmp(keyword,"#"))
			break;
		//extern�����ⲿ�������ο���https://blog.csdn.net/candcplusplus/article/details/7036917
		countkeyword(files,filecount,keyword);
		sortfiles(files,filecount);
		printfiles(files,filecount,keyword);		
	}
	clean(files,filecount);
	return 0;
}