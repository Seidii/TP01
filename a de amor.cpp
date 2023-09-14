#include <stdio.h>

int main() {
    int abc, a, b, c, cba, xyz, zyx, resultado;

    // Solicitar o usuário a inserir um número de três dígitos
    printf("Digite um número de três dígitos: ");
    scanf("%d", &abc);

    // Separar os dígitos
    a = abc / 100;
    b = (abc % 100) / 10;
    c = abc % 10;
    
	// Inverter a ordem dos dígitos
    cba = c * 100 + b * 10 + a;

    // Somar abc e cba
    xyz = abc + cba;

    // Inverter os dígitos
    zyx = xyz % 10 * 100 + (xyz / 10) % 10 * 10 + xyz / 100;

    // Somar xyz e zyx
    resultado = xyz + zyx;

    // Imprimir cba, xyz, zyx e resultado
    printf("cba: %d\n", cba);
    printf("xyz: %d\n", xyz);
    printf("zyx: %d\n", zyx);
    printf("Resultado: %d\n", resultado);

    return 0;
}
