//��Ķ���
/*#define MaxSize = 100//��
typedef struct{
	ElemType data[MaxSize];
	int length;
};*/

//�ɱ䳤��Ķ���

#define IniSize 100
typedef struct {
	ElemType *data;
	int MaxSzie,length;
}SeqList;
//L.data =new ElemType[InitSize]; 
//��Ļ�������
 //insert
 bool ListInsert (SeqList &L,int i,ElemType e)
 {
 	if(i<1||i>L.length)
 		return false;
 	if (L.length>L.MaxSzie)
 		return false;
 	for(j=L.length;j>=i;i--)
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
 	for (j=i;j<L.length;j++)
 	{
 		L.data[j-1]=L.data[j];
 		
	 }
	 L.length--;
	 return ture;
	 
 }
 //LocateElem
 
 
 
 
 
 
 
 
 
 
 
 
 
