//����Ԥ�������зֳ����ĵ��ʱ����������в�ͳ�Ƶ��ʸ����͵��ʳ��ִ���
#include "heads.h"
void parseword(txtfile* file)
{
	//��ʼ���ṹ��
	char* text=file->text; 
	file->list=NULL;
	file->total=0;
	word* pre=NULL;
	cleantext(text);
	while (true)
	{
		char wd[30]="";
		text=cutword(text,wd);//���ص�ǰָ��λ��
		if (strlen(wd)>0)
		{
			file->total+=1;
			//�����������Ƿ���wd�������ڷ���ָ���������word*ָ�룬���򷵻�NULL
			word* exist=findnode(file->list,wd);
			if (NULL==exist)
			{
				word* node=createnode(wd);
				//�ж��Ƿ���ǰ�ڵ�
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