void f_create_file(ofstream &plik);
void f_close_file(ofstream &plik);
void f_close_file(ifstream &plik);
void f_open_file(ifstream &plik);
void f_read_from_file(ifstream &plik,int *t,int n);

void f_create_file(ofstream &plik)
{
	char nazwa[40];
	
	do{
		cout << "\n\n Podaj nazwe pliku, ktory chcesz utworzyc: ";
		cin.getline(nazwa,40);

		plik.open(nazwa);

		if(!plik.is_open())
			cout<<"\n\n Nie udalo sie utworzyc pliku: ";

	}while(!plik.is_open());

}
void f_close_file(ofstream &plik)
{
	plik.close();
}
void f_open_file(ifstream &plik)
{
	char nazwa[40];

	cout<<"\n\n Podaj nazwe pliku, ktory chcesz otworzyc: ";
	cin.getline(nazwa,40);

	plik.open(nazwa);

	if(!plik.is_open())
	{
		cout<<"\n\n Nie moge otworzyc pliku";
		_getch();
		exit(0);
	}
}
void f_close_file(ifstream &plik)
{
	plik.close();
}
void f_read_from_file(ifstream &plik,int *t,int n)
{
	int temp,i=0;
	while(!plik.eof())
	{
		plik>>temp;
		if(plik)
		{
		*(t+i)=temp;
		i++;
		}
	}

}
