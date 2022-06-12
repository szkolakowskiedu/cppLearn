<h3 align="center">cppLearn</h3>
<h5>Basic Types</h5>

`#include` pozwala wlaczyc do pliku zrodlowego zawartosc podanego pliku  
`#define` pozwala zdefiniowac makro, podlegajace pozniej makrorozszerzeniu  
`deklaracja` informuje kompilator ze nazwa jest juz znana, nie przydziela pamieci  
`definicja` informuje czym jest identyfikator w programie, rezerwuje miejsce dla zmiennej  
`inicjalizacja` polega na przypisaniu wartosci do zmiennej w momencie jej deklaracji  
`zmienna skalarna` taka ktorej obiekty sa niepodzielne

<h5>Basic Operators</h5>

`przeciazanie` redefiniowanie dzialania operatorow dla obiektow struct, class, union  
`operator warunku` operator trojargumentowy (arg1 ? arg2 : arg3)  
`operator polaczenia ,` typem i wartoscia wyniku jest typ i wartosc ostatniego z wyrazen  
`operatory konwersji` przeksztalcaja zmienne na inny typ

<h5>Basic Instructions</h5>

`if (wyr) ins` jesli wyrazenie wyr jest prawdziwe, wykonuje instrukcje ins  
`if (wyr) ins1 else ins2` jesli wyrazenie wyr jest falszywe, wykonuje instrukcje ins2  
`switch (wyr) default:.. case:..` wykonuje case odpowiadajacy wyrazeniu wyr  
`while (wyr) ins` wykonuje instrukcje ins tak dlugo jak wyrazenie wyr jest prawdziwe  
`do ins while (wyr)` wykonuje instrukcje inst tak dlugo jak wyrazenie wyr jest prawdziwe + 1 raz  
`for (wyr1;wyr2;wyr3) ins` wykonuje instrukcje ins tak dlugo jak wyrazenie wyr2 jest prawdziwe  
`continue` przerwanie biezacego kroku petli i przejscie do nastepnego
`break` przerwanie petli w ktorej break zostal wywolany