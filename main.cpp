#include "cdlink.h"
int main() {
	Linklist L;
	SLinklist SL;
	Lelemtype data;
	srand((unsigned int)time(0));
	/*frontcreatlist(&L);
	printf("ͷ�巨����Ԫ�����Ϊ:\n");
	Displaylist(L);
	rearcreatlist(&L);
	printf("β�巨����Ԫ�����Ϊ:\n");
	Displaylist(L);
	Insert(&L);
	Displaylist(L);
	Getelem(L);
	data = Elemdelete(&L);
	printf("ɾ����Ԫ����:%d\n", data);
	Displaylist(L);*/
	InitSingleList(&SL);
	CreatSingleList(&SL);
	Displaysinglelist(SL);
	
	return 0;
} 