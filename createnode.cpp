#include "heads.h"
//单词结点结构体
/*typedef struct _word
{
	char text[30];
	struct _word* next;
	int count;//每篇文章各个单词出现的次数
}word;*/
word* createnode(char* text)
{
	word* node=(word*)malloc(sizeof(word));
	node->next=NULL;
	strcpy(node->text,text);
	node->count=1;
	return node;//返回新创建的结点
}
//在链表中查找key
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