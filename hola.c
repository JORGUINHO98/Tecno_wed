#include <stdio.h>
#include <string.h>
#include <time.h>

#define NOMBRE "Jorge Peña"
#define VERSION "1.0"

void mostrar_encabezado() {
    printf("\n");
    printf("╔════════════════════════════════════════╗\n");
    printf("║     BIENVENIDO A MI PRIMER PROGRAMA   ║\n");
    printf("║              Versión %s               ║\n", VERSION);
    printf("╚════════════════════════════════════════╝\n\n");
}

void mostrar_saludo() {
    printf("📢 Hola mundo, soy %s\n\n", NOMBRE);
}

void mostrar_informacion() {
    time_t ahora;
    time(&ahora);
    
    printf("════════════════════════════════════════\n");
    printf("Información del programa:\n");
    printf("════════════════════════════════════════\n");
    printf("👤 Autor: %s\n", NOMBRE);
    printf("📅 Fecha: %s", ctime(&ahora));
    printf("⚙️  Versión: %s\n", VERSION);
    printf("💻 Lenguaje: C (Profesional)\n");
    printf("════════════════════════════════════════\n\n");
}

int main() {
    mostrar_encabezado();
    mostrar_saludo();
    mostrar_informacion();
    
    printf("✅ Programa ejecutado correctamente.\n\n");
    
    return 0;
}
