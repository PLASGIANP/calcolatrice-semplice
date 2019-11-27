#include<iostream>

using namespace std;

const int MAXDIM=100;
const int VOTOMIN=20;

struct studenti{
	int indicatore;
	int votoStudente[MAXDIM];
};

int schermoMenu();
void acquisizioneNumeroStudenti(studenti &s);
void acquisizioneVotiStudenti(studenti &s);
void stampaVoti(studenti s);
int studentiAmmessi(studenti s);
int votoMassimo(studenti s);
bool listaVuota(studenti s);
float mediaVoti(studenti s);


int main(){
	studenti s;
	s.indicatore = 0;
	int scelta;
	int votoMax;
	int studentiPromossi;
	float media;
	//scelta = schermoMenu();
	acquisizioneNumeroStudenti(s);
	acquisizioneVotiStudenti(s);
	stampaVoti(s);

	studentiPromossi = studentiAmmessi(s);
	cout<<"Gli studenti ammessi sono : "<<studentiPromossi<<endl;

	votoMax = votoMassimo(s);
	cout<<"Il voto massimo di questo anno e': "<< votoMax <<endl;

	media = mediaVoti(s);
	cout<<"Il valore della media e':"<<media<<endl;


	return 0;
}

void acquisizioneNumeroStudenti(studenti &s){
	cout<<"Inserire numero studenti:"<<endl;
	cin >> s.indicatore;
	while(s.indicatore <= 0 || s.indicatore > MAXDIM){
		cout<<"ERRORE!Inserire valori compresi tra 0 e 100"<<endl;
		cin >> s.indicatore;
	}
	return;
}

void acquisizioneVotiStudenti(studenti &s){
	cout<<"Inserire i voti degli studenti:"<<endl;
	for (int i = 0; i < s.indicatore; i++){
		cin >> s.votoStudente[i];
		while(s.votoStudente[i] < 0 || s.votoStudente[i] > 30){
			cout<<"ERRORE!Inserire valori tra 0 e 30 "<<endl;
			cin >> s.votoStudente[i];
		}
	}
	return;
}

void stampaVoti(studenti s){
	if (listaVuota(s)){
		cout<<"LISTA VUOTA"<<endl;
	}
	for (int i = 0; i < s.indicatore; i++){
		cout<<"Il voto numero"<<i+1<<"e':"<<s.votoStudente[i]<<endl;
	}
	return;
}

int studentiAmmessi(studenti s){
	int studAmmessi=0;
	for (int i = 0; i < s.indicatore; i++){
		if(s.votoStudente[i] > VOTOMIN){
			studAmmessi++;
		}
	}
	cout<< studAmmessi <<endl;
	return studAmmessi;
}

int votoMassimo(studenti s){
	int votoMax= s.votoStudente[0];
	if (listaVuota(s)){
		cout<<"LISTA VUOTA"<<endl;
	}
	for (int i = 1; i < s.indicatore; i++){
			if(votoMax < s.votoStudente[i]){
				votoMax = s.votoStudente[i];
			}
	}
	return votoMax;
}

bool listaVuota(studenti s){
	return (s.indicatore == 0);
}

float mediaValori(studenti s){
	int somma;
	for (int i = 0; i < s.indicatore; i++){
		if(s.votoStudente[i]<=VOTOMIN){
		somma+=voti[i];
		}
	} 
	return somma/numStudenti;
}