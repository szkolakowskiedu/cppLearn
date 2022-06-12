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

`if (wyr1) ins` jesli wyrazenie wyr1 jest prawdziwe, wykonuje instrukcje ins  
`if (wyr1) ins1 else ins2` jesli wyrazenie wyr1 jest falszywe, wykonuje instrukcje ins2
`switch (wyr) default:.. case:..` wykonuje case odpowiadajacy wyrazeniu wyr