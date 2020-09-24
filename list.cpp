#include "iostream"
#include "math.h"
using namespace std;

typedef struct node {
	int data;
	node *link;
}NODE;

typedef struct list {
	NODE *first;
	NODE *last;
}LIST;

//ham khoi tao list
void Init(LIST &list){
	list.first = NULL;
	list.last = NULL;
};
//ham them node
NODE* GetNode(int data){
	NODE* p;
	p = (NODE*)malloc(sizeof(NODE));
	if ( p == NULL){
		exit;
	}
	p->data = data;
	p->link = NULL;

	return p;
};
//ham them phan tu node vao dau danh sach
void addFirst (LIST &list, NODE* new_node){
	if (list.first == NULL)//danh sach rong~
	{
		list.first = new_node;
		list.last = list.first;
	}else
	{
		new_node->link = list.first;
		list.first = new_node;
	}
}
void InsertList(LIST &list, int data)
{
	NODE*p;
	p = GetNode(data);
	addFirst (list,p);
}
void CreatList(LIST &list, int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << "Nhap Data " << i + 1 << ": ";
		int a;
		cin >> a;
		InsertList(list,a);
	}
}

void main(){
	LIST list;
	Init(list);
	CreatList(list,4);
	system("pause");		
}