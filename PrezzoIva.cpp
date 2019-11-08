#include <iostream>

using namespace std;

void acquisizioneProdotto(string &x){
	cout<<"Inserire il nome del prodotto"<<endl;
	getline(cin,x);
	while(x=="0" || x.size()>7){
		cout<<"***Inserire un nome(non maggiore di 7 caratteri) non un numero:"<<endl;
		getline(cin,x);
	}
	return;
}

void acquisizionePrezzo(float &x){
	cout<<"Inserire il prezzo del prodotto"<<endl;
	cin >> x;
	while(x <= 0){
		cout<<"***Inserire un valore maggiore di 0:"<<endl;
		cin >> x;
	}
	return;
}

float calcoloPrezzoIva(float x){
	float prezzoConIva;
	prezzoConIva=x + x * 22 / 100;
	return prezzoConIva;
}

void stampaDati(string n, float prezzo){
	cout<<"|-------------------------|\n";
	cout<<"|                         |\n";
	cout<<"|   Dati del prodotto     |\n";
	cout<<"|                         |\n";
	cout<<"|  "<<n<<":    "<<prezzo<<endl;
	cout<<"|                         |\n";
	cout<<"|-------------------------|\n";
}

int main()  
{
	string nome;
	float prezzo, prezzoIva;

	acquisizioneProdotto(nome);
	acquisizionePrezzo(prezzo);
	prezzoIva= calcoloPrezzoIva(prezzo);
	stampaDati(nome,prezzoIva);
	return 0;
}