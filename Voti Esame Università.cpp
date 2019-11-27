#include <iostream>
using namespace std;
const int VOTOMIN = 20;
const int N = 10000;
int max=N;
int schermoMenu();
void acquisizioneVoti(int votiUni[N]);
void stampaVoti(int voti[N]);
int studentiAmmessi(int voti[N]);
int votoMassimo(int voti [N]);
int contaVotiMax(int voti[N],int maximus);
float mediaValori(int voti[N],int numStudenti);
int main(){
	int studenti=0;
	int massimo=0;
	int votiMassimi;
	int sceltaUtente=-1;
	float media;
	bool scegli=false;
	bool scelta2=false;
	cout<<"Inserire numero studenti"<<endl;
	cin >> max;
	int voti[N];
	while(sceltaUtente!=0){
		sceltaUtente=schermoMenu();
		if(sceltaUtente==1){
			acquisizioneVoti(voti);
			scegli=true;
		}
		if(sceltaUtente==2 && scegli==true){
			stampaVoti(voti);
		}
		else if(scegli==false){
			cout<<"Non posso eseguire la stampa dei voti se non si inseriscono prima i voti d'esame"<<endl;
		}
		if(sceltaUtente==3){
			studenti=studentiAmmessi(voti);
			cout<<"Gli studenti ammessi sono:"<<studenti<<endl;
			scelta2=true;
		}
		if(sceltaUtente==4){
			massimo = votoMassimo(voti);
			cout<<"Il massimo voto e' "<<massimo<<endl;
		}
		if(sceltaUtente==5){
			votiMassimi=contaVotiMax(voti,massimo);
			cout<<"Le persone che hanno preso il voto massimo sono "<<votiMassimi<<endl;
		}
		if(sceltaUtente==6 && scegli==true && scelta2==true){
			media=mediaValori(voti,studenti);
			cout<<"La media dei voti degli studenti ammessi all'esame e':"<<media<<endl;
		}
	}
	return 0;
}

void acquisizioneVoti(int voti[N]){
	for (int i = 0; i < N; i++){
		cout<<"Inserire i voti dello studente "<< i+1 <<endl;
		cin >> voti[i];
		while(voti[i] < 0 || voti[i] > 30){
			cout<<"Inserire un valore compreso tra 18 e 30 non decimale ma intero"<<endl;
			cin >> voti[i];
		}
	}
	return;
}
void stampaVoti(int voti[N]){
	for (int i = 0; i < N; i++){	
			cout<<"Voto n."<<i+1<<endl;
			cout<<voti[i];
			cout<<""<<endl;
	}
	return;
}
int studentiAmmessi(int voti[N]){
	int ammessi=0;
	for (int i = 0; i < N; ++i){
		if (voti[i] > VOTOMIN)
		{
			ammessi++;
		}
	}
	return ammessi;
}
int votoMassimo(int voti [N]){
	int max=voti[0];
	for (int i = 1; i < N; ++i){
		if (max < voti[i]){
			max=voti[i];
		}
	}
	return max;
}
int contaVotiMax(int voti[N],int maximus){
	int conta=0;
	for (int i = 0; i < N; ++i){
		if (voti[i] == maximus){
			conta++;
		}
	}
	return conta;
}
float mediaValori(int voti[N],int numStudenti){
	int somma;
	float media;
	for (int i = 0; i < N; ++i){
		if(voti[i]<=VOTOMIN){
		somma+=voti[i];
		}
	}
	media=somma/numStudenti; 
	return media;
}
int schermoMenu(){
	int scelta;
	cout<<"|--------------------------|"<<endl;
	cout<<"|0.Esci                    |"<<endl;
	cout<<"|1.Acquisizioni Voti Esame |"<<endl;
	cout<<"|2.Stampa dei Voti         |"<<endl;
	cout<<"|3.Numero Studenti Ammessi |"<<endl;
	cout<<"|4.Voto Massimo            |"<<endl;
	cout<<"|5.Persone con Voto Massimo|"<<endl;
	cout<<"|6.Media Voti              |"<<endl;
	cout<<"|--------------------------|"<<endl;
	cout<<"Fai la tua scelta\n";
	cin >> scelta;
	cout<<"\n";
	return scelta;
}