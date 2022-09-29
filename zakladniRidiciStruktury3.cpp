
#include <iostream>
using namespace std;
int main()
{
	char volba;
	cout << "\na-Bude pocitat pres cyklus while\nb-Bude pocitat pres cyklus do while\nc-Bude pocitat pres cyklus for\nk-Konec\nVyberte jednu moznost: ";
	cin >> volba;
	while (volba != 'k')
	{
		switch (volba)
		{
		case 'a':
		{
			cout << "\nZadavejte prvky posloupnosti, 0 je konec: ";
			int soucinPrvku = 1;
			int n = 1;
			int pc = 0;
			int sc = 0;
			while (n!=0)
			{
				cin >> n;
				if (n != 0)
				{
					if (n % 2 == 0)
					{
						pc++;
						sc += n;
					}
					soucinPrvku *= n;
				}
			}
			cout << "\nAritmeticky prumer je: " << (double)sc / pc << "\nSoucin prvku je: " << soucinPrvku << "\n";
		}break;
		case 'b':
		{
			cout << "\nZadavejte prvky posloupnosti, 0 je konec: ";
			int soucinPrvku = 1;
			int n = 1;
			int pc = 0;
			int sc = 0;
			do
			{
				cin >> n;
				if (n != 0)
				{
					if (n % 2 == 0)
					{
						pc++;
						sc += n;
					}
					soucinPrvku *= n;
				}
				} while (n!=0);
			cout << "\nAritmeticky prumer je: " << (double)sc / pc << "\nSoucin prvku je: " << soucinPrvku << "\n";
		}break;
		case 'c':
		{
			cout << "\nPocita se spatne pres for, protoze nevime kolik je prvku posloupnosti";
		}break;
		case 'k':
		{
			cout << "\nZvolili jste Konec";
		}break;
		default:
		{
			cout << "\nSpatna moznost";
		}break;
		}
		cout << "\na-Bude pocitat pres cyklus while\nb-Bude pocitat pres cyklus do while\nc-Bude pocitat pres cyklus for\nk-Konec\nVyberte jednu moznost: ";
		cin >> volba;
	}
}

