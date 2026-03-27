#ifndef POLISH_C
#error "Rozszerzenia Polish C wymagają zaimportowanego nagłówka `polishc.h`"
#endif // POLISH_C

#ifndef POLISH_C_EXT_DIACRITICS
#define POLISH_C_EXT_DIACRITICS
#ifndef POLISH_C_ENABLE_EXPERIMENTAL_EXTENSIONS
#error "Znaki diakrytyczne nie są wspierane przez wszystkie kompilatory bądź terminale. Zdefiniuj `POLISH_C_ENABLE_EXPERIMENTAL_EXTENSIONS` przed zaimportowaniem nagłówka, aby włączyć ten moduł."
#endif //POLISH_C_ENABLE_EXPERIMENTAL_EXTENSIONS

#define jeżeli if
#define jeśli if
#define śmiecie 1
#define całkowita int
#define długa long
#define żegnam return
#define ciepło 0
#define ozięble 1
#define znak char
#define prawdaczyfałsz bool
#define zmiennoprzecinkowaalewiększa double
#define jedność union
// Dzięki wielorzeczownik <3
#define dopóki while
#define rób do
#endif	// POLISH_C_EXT_DIACRITICS