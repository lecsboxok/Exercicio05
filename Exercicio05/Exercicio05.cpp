#include <iostream>
#include <locale>

//1 – Escreva um programa que mostre os números de um a dez

/*using namespace std;
int main(){

	locale::global(locale("pt-br.UTF-8"));

	int numero = 1;

	do {
	cout << numero << " ";
	numero += 1;
	} while (numero <= 10);

}*/

//2 – Peça para o usuário informar um número e mostre a tabuada desse valor

/*using namespace std;
int main() {

	locale::global(locale("pt-br.UTF-8"));

	int tabuada;
	cout << "Informe um número: ";
	cin >> tabuada;
	int numero = 1;

	while (numero <= 10) {
		int resultado = tabuada * numero;
		cout << tabuada << " x " << numero << " = " << resultado << "\n";
		numero += 1;
	}
	
}*/

//3 – Faça um programa que mostre os números de 0 a 50, mostrando - os de 5 em 5 (ex: 0, 5, 10, 15...)

/*using namespace std;
int main() {

	locale::global(locale("pt-br.UTF-8"));

	for (int i = 0; i <= 50; i+=5) {
		cout << i << " ";
	}
}*/

//4 – Escreva um programa que lê o número digitado pelo usuário cinco vezes e mostre

//-Se o número for maior que 100, escreva “NÚMERO
//ESPECIAL”
//- Senão, escreva “NÚMERO COMUM”

/*using namespace std;
int main() {

	locale::global(locale("pt-br.UTF-8"));

	int numero = 5;

	do {
		int escolha;
		cout << "Digite um número: ";
		cin >> escolha;
		if (escolha > 100) {
			cout << "NÚMERO ESPECIAL\n";
		}
		else {
			cout << "NÚMERO COMUM\n";
		}
		numero -= 1;
	} while (numero >= 1);

}*/

//5 – Mostre a sequência de números de 1 a 31 pulando de 2 em 2 (ex: 1, 3, 5, 7...)

/*using namespace std;

int main() {

	locale::global(locale("pt-br.UTF-8"));

	int numero = 1;

	while (numero <= 31) {
		cout << numero << " ";
		numero += 2;
	}

}
*/

//6 – Faça um programa que leia cinco números e mostre:
//-Se o número for maior que zero, escreva “NÚMERO POSITIVO”
//- Senão, se o número for menor que zero, escreva “NÚMERO NEGATIVO”
//- Senão, escreva “O NÚMERO É ZERO”

/*using namespace std;
 
int main() {

	locale::global(locale("pt-br.UTF-8"));

	for (int n = 1; n <= 5; n++) {
		int numero;
		cout << "Digite um número: ";
		cin >> numero;
		if (numero > 0) {
			cout << "NÚMERO POSITIVO\n";
		}
		else if (numero < 0) {
			cout << "NÚMERO NEGATIVO\n";
		}
		else {
			cout << "O NÚMERO É ZERO\n";
		}
	}
}*/

