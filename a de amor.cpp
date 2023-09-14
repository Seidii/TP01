#include <stdio.h>

int main() {
    int abc, a, b, c, cba, xyz, zyx, resultado;

    // Solicitar o usu�rio a inserir um n�mero de tr�s d�gitos
    printf("Digite um n�mero de tr�s d�gitos: ");
    scanf("%d", &abc);

    // Separar os d�gitos
    a = abc / 100;
    b = (abc % 100) / 10;
    c = abc % 10;
    
	// Inverter a ordem dos d�gitos
    cba = c * 100 + b * 10 + a;

    // Somar abc e cba
    xyz = abc + cba;

    // Inverter os d�gitos
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
