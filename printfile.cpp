#include "heads.h"
void printfiles(txtfile* files,int count,char* keyword)
{
	printf("the keyword is \"%s\"\n",keyword);
	puts("the corelations are ");
	for (int i=0;i<count;++i)
	{
		printf("%s %.4f\n",files[i].name,files[i].correlation);
	}
}