#include "heads.h"
//���ʽ��ṹ��
/*typedef struct _word
{
	char text[30];
	struct _word* next;
	int count;//ÿƪ���¸������ʳ��ֵĴ���
}word;*/
word* createnode(char* text)
{
	word* node=(word*)malloc(sizeof(word));
	node->next=NULL;
	strcpy(node->text,text);
	node->count=1;
	return node;//�����´����Ľ��
}
//�������в���key
word* findnode(word* head,char* key)
{
	word* node=head;
	while (NULL!=node)
	{
		if (0==strcmp(node->text,key))
		{
			return node;
		}
		node=node->next;
	}
	return NULL;
}