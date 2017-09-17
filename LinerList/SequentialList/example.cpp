//1、从顺序表删除最小元素....
bool Del_min(ListName[])
{
	if(ListNmae.length()=0)
		renturn false;
	int j=0;
	ElemType p=ListName[0];
	for(i=1;i<ListName.length();i++)
		if(ListName[i]<p)
			p=ListName[i];
			j=i;
	cout<<ListName[j];
	ListName[j]=ListName[i];
	return true;
 } 
 //2、设计一个算法将顺序表所有元素逆置空间复杂度尉O(1)
 bool Reverse(SeqList L)
 {
 	ElemType e;
 	for(int i=0;i<L.length/2;i++)
 	{
 		e=L.data[i];
 		L.data[i]=L.data[L.length-i-1];
 		L.data[L.length[i]-1-i];
	 }
	 return true;
  } 
  
//3、长度为N的有序表L,编写一个时间复杂为O（N）
bool del_e_x(SeqList L,ElemType x)
{
	int k=0;
	for(i=0;L.data[i]!=k&&i<L.length;i++)
	{
		L.data[k]=L.data[i];
		k++;
	}
	L.length=k;
	return true;
 } //很漂亮 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
