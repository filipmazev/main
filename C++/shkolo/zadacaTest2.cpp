class student{
	private:
		string ime, prezime;
		float prosek;
		int brOcenki;
		int ocenki[100];

	public:
		void set(string i, string p){
			ime = i;
			prezime = p;
		}
		void pecati(){
			cout<<"Student so ime "<< ime << "i prezime " << prezime<<" i so prosek "<< prosek<<endl;
			cour<<"Ocenkite mu se"<<endl;
			for(int i=0;i<brOcenki;i++){
				cout<<ocenki[i];
			}
		}

		float najdiProsek(){
			int o;
			sum = 0;
			cout<<"Kolku predmeti imas?"<<endl;
			cinn>>brOcenki;
			for(int i=0;i<brOcenki;i++){
				cin>>o;
				ocenki[i] = o;
				sum += o;
			}
			prosek = sum/brOcenki;

			return prosek; 
		}
}

int main(){
	Student s;
	int i,p;
	cin>>i>>p;
	s.set(i,p);
	s.najdiProsek();
	s.pecati();
}