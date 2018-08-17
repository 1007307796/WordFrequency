//统计词频
#include "heads.h"
void countkeyword(txtfile* files,int count,char* keyword)
{
	for (int i=0;i<count;++i)
	{
		//在当前文件中查找关键词结点
		word* keynode=findnode(files[i].list,keyword);
		if (NULL!=keynode)
		{
			files[i].correlation=keynode->count/(float)files[i].total;
		} 
		else
		{
			files[i].correlation=0.0f;
		}
	}
}