TODO:
Dwóch użytkowników jest pytanych o imię (przechowywane w dwóch tablicach) 

Plansza gry 3x3 jest przechowywana w tablicy dwuwymiarowej, przechowującej liczby naturalne (domyślnie powinna być wypełniona zerami)

Gracz (wymieniony z imienia) jest pytany o pozycję w której chce umieścić swój symbol (O – gracz Pierwszy lub X – gracz Drugi)
Po każdym wyborze gracza jest wyświetlany aktualny stan planszy

Gracz nie może wybrać zajętej kratki (wartość w tablicy inna niż 0), w takim wypadku jest proszony o wybranie jeszcze raz nowej pozycji
(zastosowanie odpowiedniego warunku if sprawdzającego wartość w tablicy wybranej przez gracza.
Warto zastosować tymczasową zmienną np. tempValue która przechowa podaną przez gracza wartość

Gra kończy się zwycięstwem gracza (należy zastosować np. pętle while gdzie warunkiem może być zmienna bool isEnd) lub wypełnieniem wszystkich komórek planszy

Po każdy poprawnym wyborze komórki, sprawdzane jest czy nastąpiła wygrana (trzy takie same wartości 1 (gracz pierwszy) lub 2 (gracz drugi)
w tym samym rzędzie lub kolumnie albo wypełnieniem wszystkich kratek planszy – nie ma w tablicy wartości 0.
Zadanie dodatkowe, nieobowiązkowe – sprawdzenie również linii na skos

Należy stworzyć osobne funkcje wykorzystane w programie, odpowiedzialne za:
zmianę przyjętej wartości w tablicy na specjalny znak.
	  Funkcja jest wykorzystywana do wyświetlenia wartości pojedynczej komórki na planszy, zwraca char.
	  Odpowiednio:
  	 - 0 na '_' (czyli brak wybranej kratki)
		 - 1 na 'O' (czyli zaznaczona kratka przez gracza pierwszego)
		 - 2 na 'X' (czyli zaznaczona kratka przez gracza drugiego)
		 - Każdy inna wartość jest zamieniana na '_'
    Funkcja wyświetlająca komunikat że zwyciężył gracz o podanym wcześniej imieniu (tablicę jako argument do funkcji można zapisać następująco: void showWinner(char nameTable[]);).
