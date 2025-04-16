[README.md](https://github.com/user-attachments/files/19783847/README.md)
# Dokumentacja Projektu Kalkulatora

## Klasa Kalkulator

Niektóre części kodu klasy Kalkulator były do użytku tylko w kalkulatorze konsolowym i nie były używane do projektu aplikacji okienkowej.
Nieużywane pola i metody nie zostały usunięte w celu pokazania wykonanej pracy na wcześniejszych zajęciach.
Klasa Klalkulator zawiera:
1. **Sześć pól prywatnych:**
- *double cache = 0.0* - swego rodzaju pamięć podręczna,
- *double Memory = 0.0* - pamięć główna kalkulatora,
- *bool mem_used = false* - boolean do sprawdzania czy w pamięć cache = 0,
- *bool exit_operand* - boolean, który był używany do zakończenia działania kalkulatora konsolowego.,
- *bool isDecimal = false* - boolean, który sprawdza czy piszemy liczbę zmiennoprzecinkową,
- *int decimalPlaces = 1* - odpowiada za ilość miejsc po przecinku.

2. **Metody używane przez Kalkulator GUI**
- *metody operacji: add(double b), subtract(double b), multiply(double b), divide(double b), modulo(double b)* - metody wykonujące operacje matematyczne; Pobierają argument wywołania i jeśli checkForMemory() zwraca prawdę, wykonuje odpowiednie operacje na pamięci podręcznej kalkulatora,

- *metody operacji na pamięci: setMemory(double display), setCache(double display), getMemory(bool type), erase(), checkForMemory()* - funkcjonalność metod __setMemory__ i __setCache__ mówi sama za siebie, ale __setCache__ jest używany tylko gdy wyświetlacz jest "wyczyszczony";
__erase__ czyści pamięć podręczną; 
__getMemory__ zwraca pamięć cache jeśli podany jej argument to *true*, w przeciwnym wypadku zwraca pamięć główną;
__checkForMemory__ zwraca prawdę jeśli pamięć cache nie jest aktualnie pusta,

- *metody zarządzania przecinkiem: isDecimalNum(), comaClicked(), addDecimal(), getDecimal(), resetDecimal()* - __isDecimalNum__ ustawia zmienną isDecimal na prawdę, a __comaClicked__ zwraca prawdę jeśli __isDecimal__ = *true*;
__addDecimal__ dodaje 1 do zmiennej __decimalPlaces__, __getDecimal__ zwraca aktualną wartość zmiennej __decimalPlaces__;
__resetDecimal__ ustawia zmienną __isDecimal__ na *false*, a __decimalPlaces__ na 1.

## Interfejs Graficzny
Plik mainwindow.cpp zawiera 3 zmienne globalne:
- *double display* - odpowiada za aktualną wartość na wyświetlaczu,
- *const int n = 12* - zmienna kontrolująca maksymalną długość wyświetlanej liczby; Jeśli zostanie przekroczona liczba wyświetla się w notacji naukowej,
- *Kalkulator Calc* - obiekt klasy Kalkulator zintegrowany z logika GUI.

Pola prywatne w pliku nagłówkowym;
- *QString lastOperator* - użwywana w prywatnej metodzie doOperation,
- *QVector<QPushButton\*> operatorButtons oraz numButtons* - wektory zawierające odpowiednio: wszystkie przyciski operacji i wszystkie przyciski numeryczne (włącznie z liczbą π),
- *QActionGroup\* theme* - grupa obiektów typu QAction odpowiadające motywowi aplikacji

### Przyciski numeryczne
Każdy przycisk numeryczny (za wyjątkiem liczby π) ma w swojej definicji blok kodu, który sprawdza czy został w którymś momencie wciśnięty przecinek. Jeśli nie - wyświetla __display__ × 10 + *numer*, jeśli tak - wyświetla __display__ + *numer* / (10^Calc.getDecimal()) i zwiększa liczbę miejsc po przecinku poprzez metodę *Calc.addDecimal()*.
Przycisk π przypisuje i wyświetla __display__ o wartości tej stałej matematycznej.

### Przyciski operacji
1. Przyciski operacji matematycznych:
- sprawdzają czy __lastOperator__ to pusty napis (taki jest zainicjowany w konstruktorze), jeśli tak - ustawiają pamięć podręczną kalkulatora na __display__ -> ustawia __lastOperator__ na odpowiedni znak -> zeruje display. Jeśli nie jest pusty - wywołuje prywatną funkcję *doOperation()*, która zawiera "drabinkę if-ów" metod klasy kalkulator zależnych od pola __lastOperator__ -> ustawia __lastOperator__ na odpowiedni znak -> zeruje display,

- każdy przycisk operaji z osobna wywołuje metodę *resetDecimal()* dla obiektu Calc,

- dodatkowo przyscisk √ (sqrt) pierwiastkuje aktualny __display__ i go wyświetla.

2. Przycisk "=":
- wywołuje *doOperation()* jeśli __lastOperator__ nie jest pusty, a następnie czyści tą zmienną.

3. Przyciski zarządzania pamięcią:
- **M** zapisuje aktualną wartość na wyświetlaczu do pamięci głównej kalkulatora i czyści wyświetlacz,
- **MR** przypisuje zmiennej __display__ wartość pamięci głównej i ją wyświetla,
- **CM** czyści pamięć główną.

## Dodatkowe Opcje
W pasku menu u góry okienka jest zakładka "Opcje".
1. Autor - Okienko z informacjami o autorze
2. Motyw - Dostępne dwa motywy - jasny i ciemny (jasny jest domyślny)
3. Konwerter - Otwiera nowe okno z konwerterem systemów liczbowych (dostępne konwersje: dziesiętny, ósemkowy, binarny, szesnastkowy)

## Błędy
Błąd krytyczny spowoduje wyczyszczenie wyświetlacza. Błędem krytycznym jest:
- dzielenie lub modulo przez 0,
- pierwiastek z liczby ujemnej

Okienko błedu wyskoczy także przy jakiejś nieodpowiedniej liczbie do przekonwertowania na system liczbowy, ale nie ma to większych konsekwencji. Jest to tylko działanie prewencyjne.
