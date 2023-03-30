#include "cdlink.h"
int main() {
	Linklist L;
	SLinklist SL;
	Lelemtype data;
	srand((unsigned int)time(0));
	/*frontcreatlist(&L);
	printf("头插法链表元素输出为:\n");
	Displaylist(L);
	rearcreatlist(&L);
	printf("尾插法链表元素输出为:\n");
	Displaylist(L);
	Insert(&L);
	Displaylist(L);
	Getelem(L);
	data = Elemdelete(&L);
	printf("删除的元素是:%d\n", data);
	Displaylist(L);*/
	InitSingleList(&SL);
	CreatSingleList(&SL);
	Displaysinglelist(SL);
	
	return 0;
} 