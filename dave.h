/* dave.h

ref: https://www.transmissionzero.co.uk/computing/building-dlls-with-mingw/
*/

#ifdef DAVE_EXPORTS
  #define DAVEAPI __declspec(dllexport)
#else
  #define DAVEAPI __declspec(dllimport)
#endif

#define DAVECALL __cdecl

#ifdef __cplusplus
extern "C"
{
#endif

DAVEAPI void DAVECALL hello();
DAVEAPI void DAVECALL hello_name( char* name );
DAVEAPI void DAVECALL version( char** out );

#ifdef __cplusplus
}
#endif

// gcc -c -o dave.o dave.c
// gcc -o dave.dll -s -shared dave.o -Wl,--subsystem,windows