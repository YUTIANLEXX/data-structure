


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
		printf("��ɾ��������Ԫ�أ�ɾ����Ԫ��ֵΪ%d\n", e);
	}
	else
	{
		printf("λ��i���Ϸ���ɾ��ʧЧ\n");
	}
	return 0;
}
