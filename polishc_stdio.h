#ifndef POLISH_C
#error "Rozszerzenia Polish C wymagają zaimportowanego nagłówka `polishc.h`\n Moduł stdio dodatkowo wymaga nagłówka `stdio.h`."
#endif // POLISH_C

#ifndef POLISH_C_EXT_STDIO
#define POLISH_C_EXT_STDIO
#define wypisz printf
#define swypisz sprintf
#define czytaj scanf
#endif	// POLISH_C_EXT_STDIO