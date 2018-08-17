//数据预处理，将切分出来的单词保存在链表中并统计单词个数和单词出现次数
#include "heads.h"
void parseword(txtfile* file)
{
	//初始化结构体
	char* text=file->text; 
	file->list=NULL;
	file->total=0;
	word* pre=NULL;
	cleantext(text);
	while (true)
	{
		char wd[30]="";
		text=cutword(text,wd);//返回当前指针位置
		if (strlen(wd)>0)
		{
			file->total+=1;
			//查找链表中是否有wd，若存在返回指向这个结点的word*指针，否则返回NULL
			word* exist=findnode(file->list,wd);
			if (NULL==exist)
			{
				word* node=createnode(wd);
				//判断是否有前节点
				if (NULL==pre)
				{
					file->list=node;
				} 
				else
				{
					pre->next=node;
				}
				pre=node;
			} 
			else
			{
				exist->count+=1;
			}
		} 
		else
		{
			break;
		}
	}
}