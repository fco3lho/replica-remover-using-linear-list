#include "list.hpp"

int main(){

    Lista l;
	Item name;
	string line;
	ifstream my_file;

	menu();

	FLVazia(&l);
	cout << "Lista criada.\n";

	// readText(&l, name);

	my_file.open("Names2.txt");

	if(my_file.is_open()){
		while(! my_file.eof()){
			getline(my_file, line);
			name.nome = line;
			LInsert(&l, name);
		}
		my_file.close();
		cout << "\n";
	}

	else{
		cout << "Arquivo não abriu.\n";
	} 

	Compare(&l);
	LImprime(&l);

	return 0;
}