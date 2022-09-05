/*Evolua o programa que tem a função cadastrarCliente, para fazer as validações dos dados. Cadavalidação deve ser feita em uma função diferente, conforme lista abaixo. A função cadastrarClientedeve chamar cada uma dessas funções. A função main deve imprimir se o cadastro foi realizadocom sucesso ou se houve erro, informando onde foi o erro:
• função validarNome: recebe o nome digitado, e valida se nome tem até 20 caracteres;
• função validarSexo: recebe o sexo digitado, e valida é um sexo válido (opções: m e M para
masculino; f e F para feminino, o e O para outro).
• função validarCPF: recebe o cpf digitado, e valida é um cpf válido;
• função validarNacimento: recebe o data digitada, e valida é uma data válida.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define N 20

struct Cliente{
    char nome[30];
    char sexo[1];
    char cpf[13];
    int nascimento;
}
