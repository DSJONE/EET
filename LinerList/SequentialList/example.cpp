//1����˳���ɾ����СԪ��....
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
 //2�����һ���㷨��˳�������Ԫ�����ÿռ临�Ӷ�ξO(1)
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
  
//3������ΪN�������L,��дһ��ʱ�临��ΪO��N��
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
 } //��Ư�� 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
