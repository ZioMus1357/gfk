# Regresja liniowa
Autorzy : Piotr Kumala, Dawid Górka, Dawid Łączek

## Założenia wstępne przyjęta w realizacji projektu
Program powinien mieć możliwość dodania punktów z klawiatury oraz z pliku .txt. Wyświetlenia wyliczonej krzywej regresji na wykresie, zmianę kolorów tła wykresu oraz punktów. Wyświetlenie informacji o regresji tj. jej parametrów oraz błędu w dodatkowym ruchomym oknie.
## Specyfikacja danych wejściowych
Dane wejściowe stanowią punktu o współrzędnych (x,y) podane z klawiatury lub z pliku .txt

## Opis oczekiwanych danych wyjściowych
Dane wyjściowe stanowią:
1. Współczynniki regresji liniowej a,b
2. Błąd regresji liniowej
3. Narysowana krzywa regresji liniowwej

## Zdefiniowane struktury danych
Musieliśmy zdefiniować klase `Container` przechowująca informacje o regresji. Oraz klase `ConfigClass` służącą do configuracji wykresu.
Wykorzystaliśmy napisane przez prowadzącego klasy `Vector` oraz `Matrix` służące do transformacji wykresu.
## Specyfikacja interfejsu Użytkownika
Użytkownik ma możliwośc za pomocą menu:
1. Dodania punktu bezpośrednio z klawiatury
2. Dodania punktów podając plik .txt którego schemat jest przedstawiony w pliku test.txt. 
3. Zapisania wykresu do pliku .jpg

Korzystając z menu po prawej stronie można:
1. Zmienić kolor wykresu, domyślnie jest ustawiony na biały,
2. Zmienieć kolor punktów, domyślnie jest ustawiony kolor oliwkowy
3. Zmienić skale wykresu
4. Zmienić wielkość punktów, domyślnie 1
5. Zmienić styl punktów, do wyboru okrąd oraz prostokąt.
6. Włączenie słupków błędów
7. Zmienienie pozycji ramki z informacjami odnośnie regresji, pierwszy suwak odpowiada za położenie na osi X zaś drugi na osi Y

## Wyodrębnienie i zdefiniowanie zadań
Harmonogram pracy:
1. Szkielet programu
2. Rysowanie osi + skalowanie
3. Implementacja wyboru kolorow
4. Implementacja wyboru wielkości punktów i ich rodzajów
5. Implementacja słupków błędów
6. Implementacja ramki z informacjami oraz jest przesuwanie
7. Implementacja możliwości dodawania danych z klawiatury oraz z pliku tekstowego
8. Implementacja zapisu do pliku oraz kopiowanie do schowka

## Decyzja o wyborze narzędzi programistycznych
Do realizacji projektu wybraliśmy biblioteke wxWidgets, ponieważ jest ona relatywnie łatwa oraz większość funkcji potrzebnych do realizacji projektu została napisana na zajęciach. Do kompilacji zostało użyte Microsoft Visual Studio. Zdecydowaliśmy się głownie na to środowisko ze względu na korzystanie z systemu operacyjnego Windows.
## Podział pracy i analiza czasowa
Większość projektu zrobiliśmy wspólnie, zostawiają testowanie oraz poprawki na późniejszą date.Staraliśmy się postaępować według ustalonego harmonogramu pracy aby nie kompliwować pisania projektu. Ciężko jest określić określić dokładny czas przeznaczony na wykonanie projektu, w przybliżeniu napisanie wszystkiego zajeło nam ponad 24 godziny.
## Opracowanie i opis niezbędnych algorytmów

## Kodowanie
Zamplimentowaliśmy następujące klasy:
* `MyApp` dziędzicząco po `wxApp` potrzbną do uruchomienia programu
* `MyFrame1` dziedziczącą po `wxFrame` wygenerowaną za pomocą programu wxFormBuilder stanowiąca szkielet całego programu
* `GUIMyFrame1` dziedzicąco po `MyFrame1` implementującą zachowania wszystkich przycisków
* `ChartClass` implementującą wykres , punkty oraz ich właściwości
* `ConfigClass` implementująca właściwości możliwe do zmiany przez użytkownika
* `DataWindow` dziedzicące po `wxFrame` implementujące okno dodawania punktów z klawiatury
* `Container` zawierająca parametry regresji

Dokumentacja dotycząca metod oraz zmiennych znajduję się plikach `.h`.
Wykorzystaliśmy również dostarczoną przez prowadzącego na zajęciach klase `Vector` oraz `Matrix`.
## Testowanie
W związku z tych że duża większość funkcji nie zwracała nic a funkcje które zwracały cokolwiek były zbyt proste aby wykonywać na nich testy jednostkowe, Nie zaimplementowaliśmy tego rodzaju testów. Dokomaliśmy testów UI prosząc kolege ze studiów o przetestowanie naszej aplikacji.
## Wdrożenie, raport i wnioski
