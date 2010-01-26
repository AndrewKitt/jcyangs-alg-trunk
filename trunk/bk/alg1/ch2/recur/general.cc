template<class T>
void swap(T &a, T &b)
{
	T t;

	t = a; 
	a = b;
	b = t;
}

void swap(int &a, int &b)
{
	int t;

	t = a;
	a = b;
	b = t;
}
