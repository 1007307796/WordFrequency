#include "heads.h"
//比较规则函数
int cmp(const void* a,const void* b)
{
	const txtfile* file1=(txtfile*)a;
	const txtfile* file2=(txtfile*)b;
	//对结构体指针进行初始化后用"->"访问其成员
	if (fabs(file1->correlation-file2->correlation)<0.001)
	{
		return 0;
	} 
	else if(file1->correlation > file2->correlation)
	{
		return 1;
	} 
	else
	{
		return -1;
	}
}
//文件排序模块的实现
void sortfiles(txtfile* files,int count)
{	
	qsort(files,count,sizeof(txtfile),cmp);
	
}