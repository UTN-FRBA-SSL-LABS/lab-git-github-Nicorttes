#include "operaciones.h"

/* ── sumar — ya implementada, referencia de estilo ───────────────────────── */
//Ponerle const a los enteros permite que el compilador sepa que no se van a modificar dentro de la función, lo que puede ayudar a prevenir errores y mejorar la legibilidad del código.
int sumar(const int a, const int b) {
    return a + b;
}

/* ── restar — ya implementada ────────────────────────────────────────────── */

int restar(const int a, const int b) {
    return a - b;
}

/* ── multiplicar — implementar en feature/mi-funcion ─────────────────────── */
// Multiplica el primer número por el segundo y devuelve el resultado.
int multiplicar(const int a, const int b) {
    return a * b;
}

/* ── esPar ────────────────────────────────────────────────────────────────── */

int esPar(int n) {
    return (n % 2) == 0;
}
