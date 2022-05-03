


bool ListDelete(SqList &L, int i, int &e)
{
	if (i<1 || i>L.length)
	{
		return false;
	}
	e = L.data[i - 1];
	for (int j = i; j < L.length; j++)
	{
		L.data[j - 1] = L.data[j];
	}
	L.length--;
	return true;
}
int main()
{
	SqList L;
	InitList(L);
	int e = -1;
	if (ListDelete(L, 3, e))
	{
		printf("已删除第三个元素，删除的元素值为%d\n", e);
	}
	else
	{
		printf("位序i不合法，删除失效\n");
	}
	return 0;
}
