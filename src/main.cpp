#include "list.hpp"

int main(){

    Lista l;
	Item aux;
	string line;
	ifstream my_file;

	menu();

	FLVazia(&l);
	cout << "Lista criada.\n\n";

	my_file.open("Names.txt");

	if(my_file.is_open()){
		while(! my_file.eof()){
			getline(my_file, line);
			aux.nome = line;
			LInsert(&l, aux);
		}
		my_file.close();
		cout << "\n\n";
	}

	else{
		cout << "Arquivo não abriu.\n";
	} 

	Compara(&l);
	LImprime(&l);

	return 0;
}