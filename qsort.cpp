#include "heads.h"
//�ȽϹ�����
int cmp(const void* a,const void* b)
{
	const txtfile* file1=(txtfile*)a;
	const txtfile* file2=(txtfile*)b;
	//�Խṹ��ָ����г�ʼ������"->"�������Ա
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
//�ļ�����ģ���ʵ��
void sortfiles(txtfile* files,int count)
{	
	qsort(files,count,sizeof(txtfile),cmp);
	
}