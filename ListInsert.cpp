#define MaxSize 10;
typedef struct
{
	int data[MaxSize];
	int length;
}SqList;

void InitList(SqList &L)
{
	for (int i = 0; i < MaxSize; i++)
	{
		L.data[i] = 0;
		L.length = 0;
	}
}
bool ListInsert(SqList &L, int i, int e)
{
	if (i < 1 || i>L.length + 1)
	{
		return false;
	}
	if (L.length >= MaxSize)
	{
		return false;
	}
	for (int j = L.length; j >= i; j--)
	{
		L.data[j] = L.data[j - 1];
	}
	L.data[i - 1] = e;
	L.length++;
	return true;
}
//void ListInsert(SqList &L, int i, int e)
//{
//	for (int j = L.length; j >= i; j--)
//	{
//		L.data[j] = L.data[j - 1];
//	}
//	L.data[i-1] = e;
//	L.length++;
//}
int main()
{
	SqList L;
	InitList(L);
	ListInsert(L, 3, 3);
	return 0;
}