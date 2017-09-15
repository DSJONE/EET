//表的定义
/*#define MaxSize = 100//表长
typedef struct{
	ElemType data[MaxSize];
	int length;
};*/

//可变长表的定义

#define IniSize 100
typedef struct {
	ElemType *data;
	int MaxSzie,length;
}SeqList;
//L.data =new ElemType[InitSize]; 
//表的基本操作
 //insert
 bool ListInsert (SeqList &L,int i,ElemType e)
 {
 	if(i<1||i>L.length)
 		return false;
 	if (L.length>L.MaxSzie)
 		return false;
 	for(int j=L.length;j>=i;i--)
 	{
 		L.data[j]=L.data[j-1];
 		
	 }
	 L.data[i-1]=e;
	 L.length++;
	 return true;
 }
 //delete
 bool ListDelete(SeqList &L,ElemType &e,int i)
 {
 	if(i<1||i>L.length)
 		return false;
 		
 	e=L.data[i-1];
 	for (int j=i;j<L.length;j++)
 	{
 		L.data[j-1]=L.data[j];
 		
	 }
	 L.length--;
	 return ture;
	 
 }
 //LocateElem
 int LocationElem(SeqList L,ElemType e)
 {
 	int i=0;
 	for(int j=0;j<L.length;j++)
 	{
 		if(L.data[j]==e)
 			i=j+1;
	 }
	 return i;
 }
 
 
 
 
 
 
 
 
 
 
 
 
