#include <stdio.h>

int main()
{
    int numeros [10];

    for (int i = 0; i < 10; i++) {
        
        printf("bom dia usuario, digite um numero inteiro: ");
        scanf("%d", &numeros[i]);
    }

    int soma = 0;
    int media = 0;
     int numeroUsuario = 0;

    for (int z = 0; z < 10; z++) 
    {
        soma += numeros [z];
        media = soma / 10;
    }
    
    printf("A soma dos numeros eh %d \n", soma);
    printf("A media dos numeros escolhidos eh: %d", media);
    

    //printf("---Vamos ver qual eh o maior numero---");
    
    //for (int g = 0; g < 10; g++)

    printf("Agora vamos verificar se um numero existe no sistema \n");
    printf("\n digite um numero");
    scanf("%d", &numeroUsuario);

    for (int user = 0; user < 10; user++) 
        { if (numeroUsuario == numeros[user])
        {
            printf("\n o numero esta correto");
        }
    
        
    }
    
    

    
    
    
    return 0;
}
