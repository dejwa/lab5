#include <iostream>
#include <array>
#include <vector>

using namespace std;

void zadanie_1() {

	int nIloscElem, nMax, nIndxOfMax;

	cout << "Podaj wielkosc wektora: ";
		cin >> nIloscElem;
	cout << endl;
	vector<int> vecElements;

	for(int i = 1; i<=nIloscElem; i++){
		int nPodana;
		cout << "Podaj liczbe do dodania: ";
			cin >> nPodana;
		cout << endl;
		vecElements.push_back(nPodana);
	}
	
	nMax = vecElements[0];
	for(int i = 1; i<vecElements.size();i++){
		if(vecElements[i]>nMax){
			nMax = vecElements[i];
			nIndxOfMax = i;
		}
	}

	cout << "Maksymalna wartosc to " << nMax << ", w indeksie " << nIndxOfMax << '.' <<endl;
}

void zadanie_2(){
	int nIloscElem; 
	cout << "Podaj wielkosc tablicy: ";
		cin >> nIloscElem;
	cout << endl;
	vector<int> vecElements;
	for (int i = 1; i <= nIloscElem; i++) {
		int nPodana;
		cout << "Podaj liczbe do dodania: ";
			cin >> nPodana;
		cout << endl;
		vecElements.push_back(nPodana);
	}
	int nPivotIndx;
	if(vecElements.size()%2==0){
		nPivotIndx = vecElements.size() / 2;
		vecElements.insert(vecElements.begin()+nPivotIndx,0);
	}else{
		nPivotIndx = vecElements.size() / 2;
		vecElements.at(nPivotIndx) = 0;
	}

	for(int i = 0; i<nPivotIndx; i++){
		cout << vecElements[vecElements.size() - 1 - i] << '\t' << vecElements[i];
		cout << endl;
	}
}

int main()
{
	zadanie_1();
	zadanie_2();
}
