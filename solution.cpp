// ConsoleApplication2.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include "pch.h"
#include <iostream>
#include <vector>

int FindOutlier(std::vector<int> arr)
{
	int result;
	bool odd;

	if (arr[0] % 2 == 0 && arr[1] % 2 == 0)
		odd = false;
	else if (arr[0] % 2 == 1 && arr[1] % 2 == 1)
		odd = true;
	else if (arr[2] % 2 == 0) {
		odd = false;
	}
	else {
		odd = true;
	}

	for (int i = 0; i < arr.size(); i++) {
		if ((arr[i] % 2 == 0 && odd) || (arr[i] % 2 != 0 && !odd)) {
			result = arr[i];
			break;
		}
	}

	return result;
}


// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
