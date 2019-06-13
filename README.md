# Regresja liniowa
Autorzy : Piotr Kumala, Dawid Górka, Dawid Łączek

# Założenia wstępne przyjęta w realizacji projektu
Program powinien mieć możliwość dodania punktów z klawiatury oraz z pliku .txt
# Specyfikacja danych wejściowych
Dane wyjściowe stanowią:
1. Współczynniki regresji liniowej a,b
2. Błąd regresji liniowej
3. Narysowana regresja liniowa 

# Opis oczekiwanych danych wyjściowych

# Zdefiniowanie struktur danych

# Specyfikacja interfejsu Użytkownika
Użytkownik ma możliwośc za pomocą menu 
1. Dodania punktu bezpośrednio z klawiatury
2. Dodania punktów podając plik .txt którego schemat jest przedstawiony w pliku test.txt. 
3. Zapisania wykresu do pliku .jpg

Korzystając z menu po prawej stronie można:
1. Zmienić kolor wykresu, domyślnie jest ustawiony na czerwony,
2. Zmienieć kolor punktów, domyślnie jest ustawiony kolor oliwkowy
3. Zmienić skale wykresu
4. Zmienić wielkość punktów, domyślnie 1
5. Zmienić styl punktów, do wyboru okrąd oraz prostokąt.
6. Włączenie słupków błędów
7. Zmienienie pozycji ramki z informacjami odnośnie regresji, pierwszy suwak odpowiada za położenie na osi X zaś drugi na osi Y
# Wyodrębnienie i zdefiniowanie zadań
Harmonogram pracy:
1. Szkielet programu
2. Rysowanie osi + skalowanie
3. Implementacja wyboru kolorow
4. Implementacja wyboru wielkości punktów i ich rodzajów
5. Implementacja słupków błędów
6. Implementacja ramki z informacjami oraz jest przesuwanie
7. Implementacja możliwości dodawania danych z klawiatury oraz z pliku tekstowego
8. Implementacja zapisu do pliku oraz kopiowanie do schowka

# Decyzja o wyborze narzędzi programistycznych
Do realizacji projektu wybraliśmy biblioteke wxWidgets, ponieważ jest ona relatywnie łatwa oraz większość funkcji potrzebnych do realizacji projektu została napisana na zajęciach. Do kompilacji zostało użyte Microsoft Visual Studio. Zdecydowaliśmy się głownie na to środowisko ze względu na korzystanie z systemu operacyjnego Windows.
# Podział pracy i analiza czasowa
Większość projektu zrobiliśmy wspólnie, zostawiają testowanie oraz poprawki na późniejszą date.Staraliśmy się postaępować według ustalonego harmonogramu pracy aby nie kompliwować pisania projektu.
# Opracowanie i opis niezbędnych algorytmów
![equation](http://www.sciweavers.org/tex2img.php?eq=%24%24a%3D%5Cfrac%7B%5Csum_%7Bi%3D1%7D%5E%7Bn%7D%28X_i-%5Coverline%7BX%7D%29%28Y_i-%5Coverline%7BY%7D%29%7D%7B%5Csum_%7Bi%3D1%7D%5E%7Bn%7D%28X_i-%5Coverline%7BX%7D%29%5E2%7D%24%24&bc=White&fc=Black&im=jpg&fs=12&ff=arev&edit=0)
![](http://www.sciweavers.org/tex2img.php?eq=%24%24a%3D%5Cfrac%7B%5Csum_%7Bi%3D1%7D%5E%7Bn%7D%28X_i-%5Coverline%7BX%7D%29%28Y_i-%5Coverline%7BY%7D%29%7D%7B%5Csum_%7Bi%3D1%7D%5E%7Bn%7D%28X_i-%5Coverline%7BX%7D%29%5E2%7D%24%24&bc=White&fc=Black&im=jpg&fs=12&ff=arev&edit=)
![](http://www.sciweavers.org/tex2img.php?eq=1%2Bsin%28mc%5E2%29&bc=White&fc=Black&im=jpg&fs=12&ff=arev&edit=)
h<sub>&theta;</sub>(x) = &theta;<sub>o</sub> x + &theta;<sub>1</sub>x

# Kodowanie

# Testowanie

# Wdrożenie, raport i wnioski

