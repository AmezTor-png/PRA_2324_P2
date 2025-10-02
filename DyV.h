#include <vector>

using namespace std;

void BusquedaBinaria(vector<int> a, int x, int ini, int fin)
{
	if(ini > fin)
	{
		return -1;
	}

	int medio = (ini + fin)/2;

	if(a[medio] == x)
	{
		return medio;
	}
	else if(a[medio] > x)
	{
		return BusquedaBinaria(a, x, ini, medio - 1); /*x es menor que medio y esta por debajo*/
	}
	else
	{
		return BusquedaBinaria(a, x, medio + 1, fin); /*x es mayor que medio y esta por delante*/
	}
}

void funcion2(vector<int>& a)
{



}

int main()
{
	vector<int> a(20);

	BusquedaBinaria(a, x, ini, fin);

	funcion2(a);

	return 0;
}
