#include "heads.h"
//����̬������ڴ�
void clean(txtfile* files,int count)
{
	for (int i=0;i<count;++i)
	{
		word* head=files[i].list;
		//�ж������Ƿ�Ϊ��
		while (NULL!=head)
		{
			word* cur=head;
			head=cur->next;
			free(cur);
			cur=NULL;
		}
	}
}