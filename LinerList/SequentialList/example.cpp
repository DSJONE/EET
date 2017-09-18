//1、从顺序表删除最小元素..
bool Del_main(ListName)
{
	if(ListName.length()=0)
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
bool del_e_x(SeqList &L,ElemType x)
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
 
 //4、从有序表删除在给定值之间所有元素
// bool del_s_t(SeqList &L,ElemType s,ElemType t)
// {
// 	if(s>t)
//	 	return false;
//	if(L.length=0)
//		return false;
//	int h=0;int j=0;
//	for(int i=0;i<L.length;i++)
//	{
//		if(L.data[i]==s)
//			h=i;
//		if(L.data[j]==t)
//			j=t;
//	}
//	for(int i=h;i<j;i++)
//	{
//		L.data[i]=L.data[j+1];
//	}
//	
//	return true;
//  } 错误写法，有序表中若有重复元素则丢失。

bool del_s_t(SeqList L,ElemType s,ElemType t)
{
	int i,j;
	if(s>t||L.length==0)
	{
		return false;
	}
	for ( i =0;i<L.length&&L.data[i]<s;i++);
	if(i>L.length)
		return false;//当所有元素均小于t;
	for(j=i;j<L.length&&L.data[j]<=t;j++)
	for(;j<L.length;i++,j++)
	{
		L.data[i]=L.data[j];
	 } 
	 L.length=i;
	 return true;
 } 
 
 //5、顺序表删除
 bool Del_s_t(SeqList l,ElemType s,Type t)
 {
 	int i,k;
 	if(s>t||L.length==0)
		return false;
 	for(i=0;i<L.length;i++)
 	{
 		if(L.data[i]>=s&&L.data[i]<t)
 			k++;
 		else
 			L.data[i-k]=L.data[i];
	 }
	 L.length -=k;
	 return true;
  } 
  
 //6、删除重复元素
  
 bool Del_Same(SeqList &L)
 {
 	if(L.length=0)
 		return false;
 	int i ,j;
 	for(i=0,j=1;j<L.length;j++)
 	{
 		if(L.data[i]!=L.data[[j]])
		 {
			L.data[++i]=L.data[j];
		  } 
	 }
	 L.length=i+1;
	 return true;
  } //很妙
  
  //7、将两个顺序表合并并返回
  bool Merge_A_B(SeqList A,SeqList B,SeqList &S)//A,B不用引用是因为此处需要AB的副本值。 
  {
  	if(A.length+B.length<=S.MaxSzie) 
  		return false;
  	int i,j,k;//在循环外声明三个变量已记录 其值。 
  	while(i<A.length&&j<B.length)
  	{
  		if(A.data[i]<B.data[j])
  			S.data[k++]=A.data[i++];
  		else
  			S.data[k++]=B.data[j++];
	  }
	  while(i<A.length)
	  {
	  	S.data[k++]=A.data[i++];
	  }
	  while(j<B.length)
	  {
	  	S.data[k++]=B.data[j++];
	  }//将剩余的一个元素全都放进表中
	  S.length=k;
	  return true; 
	  
   } 
 //8、已知一个以为数组A[m+n]中一次存放着两个线性表...
  typedef int DataType;
  void Reverse (DataType A[],int left,int right,arraySize)
  {
  	if(left>=right||arraySize)
  		return;
  		
  	int mid =(left+right)/2;
  	for(int i=0;i<mid-left;i++)//for( int lefts=left;lefs<=mid;lefs++)
  {
  	DataType temp=A[left+i];
  	A[left+i]=A[rigth-i];
  	A[right-i]=temp;
  }
  void Exchange(DataType A[],int m,int n,arraySzie)
  {
  	Reverse(A,0,m+n-1,arraySize);
  	Reverse(A,0,n-1,arraySize);
  	Reverse(A,n,m+n-1,arraySize);
  }
  }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
