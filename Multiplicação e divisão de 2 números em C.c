    #include<stdio.h>
    #include<stdlib.h>
    int main(void)
    {
      //Declara��o das vari�veis
      float nota1, nota2, nota3, media;
      
      //Entrada de dados
      printf("Digite a primeira nota do aluno: ");
      scanf("%f",&nota1);
      
      printf("Digite a segunda nota do aluno: ");
      scanf("%f",&nota2);
      
      printf("Digite a terceira nota do aluno: ");
      scanf("%f",&nota3);
      
      //Processamento
      media = (nota1 + nota2 + nota3) / 3;
      
      //Sa�da
      printf("Media do aluno = %.1f\n",media);
      
     return 0;//retorno da fun��o main  
    }