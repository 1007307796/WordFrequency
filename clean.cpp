#include "heads.h"
//清理动态申请的内存
void clean(txtfile* files,int count)
{
	for (int i=0;i<count;++i)
	{
		word* head=files[i].list;
		//判断链表是否为空
		while (NULL!=head)
		{
			word* cur=head;
			head=cur->next;
			free(cur);
			cur=NULL;
		}
	}
}