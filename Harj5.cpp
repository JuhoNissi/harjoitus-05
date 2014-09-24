/***********************************************
* Ohjelman nimi: Harjoitus 5
* Tekij‰: Juho Nissi
*Lyhyt kuvaus:
*Kirjoita ohjelma, joka pyyt‰‰ k‰ytt‰j‰lt‰ kaksi kokonaislukua.
*Ohjelma tulostaa tekstin BINGO, mik‰li luvut ovat samoja.
*Muussa tapauksessa ohjelma tulostaa tekstin BONGO.
* Versio: 1.0
* PVM: 17.9.2014
************************************************/
#include <iostream>
using namespace std;
void main()
{
	int A;
	int B;
	cout << "Syˆt‰ luvut A ja B";
	cin >> A;
	cin >> B;
	if (A == B)
		cout << "Bingo";
	else cout << "Bongo";
}