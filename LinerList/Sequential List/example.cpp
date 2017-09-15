//从顺序表删除最小元素....
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
