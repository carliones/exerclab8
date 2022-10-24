
#include <stdio.h>

void main()
{
    int x;
    int y;
    int w;
    int z;
    int a;
    float total;
    int quant1;
    int quant2;
    int quant3;
    int quant4;
    int quant5;
    int matriz[6];
    int b;
    int c;
    float ab;
    float h;
    float matriza[6];
    int bc;
    
    printf("insira o número do exercício: ");
    scanf("%d", &x);
    
    switch (x)
    {
    case 2:
        
        printf("insira o valor para fazermos a tabuada");
        scanf("%d", &y);
        for (w = 1; w <= 10; w++)
        {
            printf("%d * %2d = %2d\n", y, w, (y * w));
        }
        break;
    case 3:
        
        a = 1;
        quant1 = 0;
        quant2 = 0;
        quant3 = 0;
        quant4 = 0;
        quant5 = 0; 
        
        while (a == 1)
        {
            printf("informe o código do produto: ");
            scanf("%d", &y);
            
            if(y < 0)
            {
                a = -1;
            }
            switch(y)
            {
        
                case 101:
                printf("informe a quantidade do produto: ");
                    scanf("%d", &w);
                    quant1 += w;
                    total += 15.20 * w;
                    break;
                    
                case 202:
                printf("informe a quantidade do produto: ");
                    scanf("%d", &w);
                    quant2 += w;
                    total += 4.99 * w;
                    break;
                
                case 303:
                printf("informe a quantidade do produto: ");
                    scanf("%d", &w);
                    quant3 += w;
                    total += 8.57 * w;
                    break;
                
                case 404:
                printf("informe a quantidade do produto: ");
                    scanf("%d", &w);
                    quant4 += w;
                    total += 1.40 * w;
                    break;
                
                case 505:
                printf("informe a quantidade do produto: ");
                    scanf("%d", &w);
                    quant5 += w;
                    total += 9.98 * w;
                    break;
            }
                
            printf("No total temos: %.2f", total);
            printf("\nQuantidade de '101':%d", quant1);
            printf("\nQuantidade de '202':%d", quant2);
            printf("\nQuantidade de '303':%d", quant3);
            printf("\nQuantidade de '404':%d", quant4);
            printf("\nQuantidade de '505':%d\n", quant5);
            }
        printf("\nNo total temos: %.2f", total);
        break;
        
        case 5:
            
            printf("decimal, hexadecimal, caractere");
            for(x = 0; x <= 127; x++)
            {
                printf("\n%d%10x%8c", x, x, x);
            }
            break;
            
        case 6:
            
            y = 0;
            do {
                for(a = 0; a <= 4; a++)
                {
                    printf("informe 5 números: ");
                    scanf("%d", &x);
                    matriz[a] = x;
                }
                y++;
            } while(y == 0);
            
            for(a = 0; a <= 4; a++)
            {
                w = matriz[a];
                if(w == 2)
                    {
                        printf("\no número %d é primo", w);
                        b = 1;
                    }
                for(b = w - 1; b > 1; b--)
                {
                    c = w % b;
                    if(c == 0)
                    {
                       b = 1;
                       printf("\no número %d não é primo", (matriz[a]));
                    }
                    else if((c != 0) && b == 2)
                    {
                        printf("\no número %d é primo", (matriz[a]));
                        b = 1;
                    }
                }
            }
            break;
            
        case 7:
        
            y = 0;
            do {
                for(a = 0; a <= 5; a++)
                {
                printf("informe 6 idades: ");
                scanf("%d", &x);
                matriz[a] = x;
                printf("informe o tamanho: ");
                scanf("%f", &ab);
                matriza[a] = ab;
                }
                y++;
            }while (y == 0);
            
            
            h = 0;
            bc = 0;
            for(a = 0; a <= 5; a++)
            {
                b = matriz[a];
                if(b > 50)
                {
                    h += matriza[a];
                    bc++;
                }
               
            }
            h /= bc;
            printf("a média dos tamanhos são %.2f", h);
           break;
    
        case 8:
            
            printf("informe a quantidade de N termos");
            scanf("%d", &x);
            w = 1;
            a = 1;
            z = 0;
            for(y = x; y >= 1; y--)
            {
                printf(" %d", w);
                w = a + z;
                z = a;
                a = w;
               
            }
           break;
        
        default:
        printf("os números possíveis são: 2 3 5 6 7 8");
        break;
    }
}
    
    





