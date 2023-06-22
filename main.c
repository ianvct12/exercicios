// #include <stdio.h>

// int main(void){
// int a,b,trocaA,trocaB;

// printf("Digite um número: ");
// scanf("%d",&a);

// printf("Digite um número: ");
// scanf("%d",&b);

//   trocaA=a;
//   trocaB=b;
//   a=trocaB;
//   b=trocaA;

//   printf("%d %d",a,b);
//   return 0;
// }


// #include <stdio.h>

// int main(void){
// int valor,valorTotal;

//   printf("Digite o valor: ");
//   scanf("%d",&valor);

//   valorTotal=valor*1.1;

//   printf("%d %d",valor,valorTotal);

  
//   return 0;
// }



// #include <stdio.h>

// int main(void){
// float raio,area,perimetro;

//   printf("Digite o raio do círculo: ");
//   scanf("%f",&raio);

//   perimetro=2*3.14*raio;
//   area=3.14*raio*raio;

//   printf("%f %f %f",raio,perimetro,area);
//   return 0;
// }


// #include <stdio.h>

// int main(void){
// int codigo;
// float quantidade,preco,total;

//   printf("Digite o código do consumidor: ");
//   scanf("%d",&codigo);

//   printf("Digite o total de KW consumido: ");
//   scanf("%f",&quantidade);

//   printf("Digite o preço do KW: ");
//   scanf("%f",&preco);

//   total=preco*quantidade;
//   if(total<=21.23){
//     printf("O total a pagar é:R$21,23");
//   }else{
//     printf("O total a pagar é: %f",total);
//   }
  
//   return 0;
// }




// #include <stdio.h>

// int main(void){
// int codigo;
// float quantidade,preco,total;

//   printf("Digite o código do consumidor: ");
//   scanf("%d",&codigo);

//   printf("Digite o total de KW consumido: ");
//   scanf("%f",&quantidade);

//   printf("Digite o preço do KW: ");
//   scanf("%f",&preco);

//   total=preco*quantidade;
//   if(total<=21.23){
//     printf("O total a pagar é:R$21,23");
//   }else{
//     printf("O total a pagar é: %f",total);
//   }
  
//   return 0;
// }



// #include <stdio.h>

// int main(void){
// float num1,num2,maior;

// printf("Digite dois números: ");
// scanf("%f %f",&num1,&num2);

//   if(num1>num2){
//     maior=num1;
//     printf("%f",maior);
//    }else if(num2>num1){
//     maior=num2;
//     printf("%f",maior);
//    }else if(num1==num2){
//       printf("Ambos são iguais");
//    }

  
//   return 0;
// }



// #include <stdio.h>

// int main(void){
// float av1,av2,media;

//   printf("Digite a nota da av1: ");
//   scanf("%f",&av1);

//   printf("Digite a nota da av2: ");
//   scanf("%f",&av2);

//   media=(av1+av2)/2;

//   if(media>=6){
//     printf("aprovado");
//   }else if(media<5){
//     printf("reprovado");
//   }else{
//     printf("Av3");
//   }
//   return 0;
// }



// #include <stdio.h>

// int main(void){
// float num1,num2,num3,maior,meio,menor;

//   printf("Digite 3 números: ");
//   scanf("%f %f %f",&num1,&num2,&num3);

//   if(num1>=num2&&num2>=num3){
//     maior=num1;
//     meio=num2;
//     menor=num3;
//   }else if(num1>=num3&&num3>=num2){
//     maior=num1;
//     meio=num3;
//     menor=num2;
//   }else if(num2>=num1&&num1>=num3){
//     maior=num2;
//     meio=num1;
//     menor=num3;
//   }else if(num2>=num3&&num3>=num1){
//     maior=num2;
//     meio=num3;
//     menor=num1;
//   }else if(num3>=num1&&num1>=num2){
//     maior=num3;
//     meio=num1;
//     menor=num2;
//   }else{
//     maior=num3;
//     meio=num2;
//     menor=num1;
//   }
//   printf("%f %f %f",maior,meio,menor);
//   return 0;
// }





// #include <stdio.h>

// int main(void){
// float num1,num2;
// char operacao;
  
//   printf("Digite dois números: ");
//   scanf("%f %f",&num1,&num2);

//   printf("Digite a operação: a)soma; b)subtração; c)multiplicação; d)divisão: ");
//   scanf(" %c",&operacao);

//   switch(operacao){
//     case'a':
//     printf("%f + %f = %f",num1,num2,num1+num2);
//     break;

//     case'b':
//     printf("%f - %f = %f",num1,num2,num1-num2);
//     break;

//     case'c':
//     printf("%f x %f = %f",num1,num2,num1*num2);
//     break;

//     case'd':
//     if(num2==0){
//       printf("Divisão inválida");
//     }else{
//       printf("%f / %f=%f",num1,num2,num1/num2);
//     }
//     break;

//     default:
//     printf("Operação inválida");
//   }
//   return 0;
// }



// #include <stdio.h>

// int main(void){
// float valor,quantidade;
// int tipo,codigo;

//   printf("Digite o código do consumidor: ");
//   scanf("%d",&codigo);
  
//   printf("Digite a quantidade total gasta de m³: ");
//   scanf("%f",&quantidade);

//   printf("Digite o tipo:1)Residencial;2)Comercial;3)Industrial: ");
//   scanf("%d",&tipo);

//   switch(tipo){
//     case 1:
//     valor=5+(0.05*quantidade);
//     printf("O valor total é:%f",valor);
//     break;

//     case 2:
//     if(quantidade<=80){
//       printf("O total a pagar é de R$500,00");
//     }else{
//       valor=500+(0.25*quantidade);
//       printf("O total é:%f",valor);
//     }
//     break;

//     case 3:
//     if(quantidade<=100){
//       printf("O total a pagar é de R$800,00");
//     }else{
//       valor=800+(0.04*quantidade);
//       printf("O valor total é de:%f",valor);
//       break;
//     }
//   }
//   return 0;
// }





// #include <stdio.h>

// int main(void){
// int dia;
// float valor,total;
// char tipo;

// printf("Escolha o dia da semana: 1)Domingo;2)Segunda;3)Terça;4)Quarta;5)Quinta;6)Sexta;7)Sábado: ");
//   scanf("%d",&dia);

//   printf("Digite 'l' para lançamento e 'n' para não: ");
//   scanf(" %c",&tipo);

//   printf("Digite o preço total da fita: ");
//   scanf("%f",&valor);

//   switch(dia){
//     case 2:
//       total=0.6*valor;
//       if(tipo=='l'){
//       total=total*1.15;
//     }else{
//       total=total;
//     }
//     printf("O valor é de:%f",total);
//     break;

//     case 3:
//       total=0.6*valor;
//       if(tipo=='l'){
//       total=total*1.15;
//     }else{
//       total=total;
//     }
//     printf("O valor é de:%f",total);
//     break;
    
//     case 5:
//     total=0.6*valor;
//       if(tipo=='l'){
//       total=total*1.15;
//     }else{
//       total=total;
//     }
//     printf("O valor é de:%f",total);
//     break;

//     case 4:
//       if(tipo=='l'){
//       total=valor*1.15;
//     }else{
//       total=valor;
//     }
//     printf("O valor total é:%f",total);
//     break;

//     case 6:
//     if(tipo=='l'){
//     total=valor*1.15;
//     }else{
//       total=valor;
//     }
//     printf("O valor total é:%f",total);
//     break;

//     case 7:
//     if(tipo=='l'){
//     total=valor*1.15;
//     }else{
//       total=valor;
//     }
//     printf("O valor total é:%f",total);
//     break;


//     case 1:
//     if(tipo=='l'){
//     total=valor*1.15;
//     }else{
//       total=valor;
//     }
//     printf("O valor total é:%f",total);
//     break;
//   }
    

  
// return 0;
//   }




// #include <stdio.h>

// int main(void){
// int i;
// float a,b,c,maior,menor,meio;

// printf("Digite 3 valores: ");
// scanf("%f %f %f",&a,&b,&c);

// printf("Digite a ordem: 1)crescente;2)decrescente;3)maior no meio: ");
// scanf("%d",&i);

// if(a>=b&&b>=c){
//   maior=a;
//   meio=b;
//   menor=c;
// }else if(a>=c&&c>=b){
//   maior=a;
//   meio=c;
//   menor=b;
// }else if(b>=a&&a>=c){
//   maior=b;
//   meio=a;
//   menor=c;
// }else if(b>=c&&c>=a){
//   maior=b;
//   meio=c;
//   menor=a;
// }else if(c>=a&&a>=b){
//   maior=c;
//   meio=a;
//   menor=b;
// }else{
//   maior=c;
//   meio=b;
//   menor=a;
// }

//   switch(i){
//     case 1:
//     printf("%f %f %f",menor,meio,maior);
//     break;

//     case 2:
//     printf("%f %f %f",maior,meio,menor);
//     break;

//     case 3:
//     printf("%f %f %f",menor,maior,meio);
//     break;
//   }
  
// return 0;
//   }





// #include <stdio.h>

// int main(void){
// int i;
// float a,b,c,maior,menor,meio;

// printf("Digite 3 valores: ");
// scanf("%f %f %f",&a,&b,&c);

// printf("Digite a ordem: 1)crescente;2)decrescente;3)maior no meio: ");
// scanf("%d",&i);

// if(a>=b&&b>=c){
//   maior=a;
//   meio=b;
//   menor=c;
// }else if(a>=c&&c>=b){
//   maior=a;
//   meio=c;
//   menor=b;
// }else if(b>=a&&a>=c){
//   maior=b;
//   meio=a;
//   menor=c;
// }else if(b>=c&&c>=a){
//   maior=b;
//   meio=c;
//   menor=a;
// }else if(c>=a&&a>=b){
//   maior=c;
//   meio=a;
//   menor=b;
// }else{
//   maior=c;
//   meio=b;
//   menor=a;
// }

//   switch(i){
//     case 1:
//     printf("%f %f %f",menor,meio,maior);
//     break;

//     case 2:
//     printf("%f %f %f",maior,meio,menor);
//     break;

//     case 3:
//     printf("%f %f %f",menor,maior,meio);
//     break;
//   }
  
// return 0;
//   }





// #include <stdio.h>

// int main(void){
// int i;

// for(i=1;i<=4;i++){
//   printf("%d",i);
// }
  
// return 0;
//   }




// #include <stdio.h>

// int main(void){
// int i,num;

//   printf("Digite o número para a tabuada: ");
//   scanf("%d",&num);
// for(i=1;i<=9;i++){
//   printf("%d x %d = %d\n",num,i,num*i);
// }
  
// return 0;
//   }




// #include <stdio.h>

// int main(void){
// int i,num,num2;

//   printf("Digite dois números: ");
//   scanf("%d %d",&num,&num2);

//   printf("%d - %d= %d",num,num2,num-num2);
// return 0;
//   }




// #include <stdio.h>

// int main(void){
// float media;

//   media=(5+8+12)/3;
//   printf("A média é:%f",media);
// return 0;
//   }




// #include <stdio.h>

// int main(void){
// int num;

//   printf("Digite um número: ");
//   scanf("%d",&num);

//   if(num<0){
//     printf("Esse número é negativo\n");
//   }else{
//     printf("Esse número é positivo");
//   }
//   if(num%3==0){
//     printf("Esse número é múltiplo de 3");
//   }else{
//     printf("Esse número não é múltiplo de 3");
//   }
// return 0;
//   }






// #include <stdio.h>

// int main(void){
// int i,n,par=0;

// for(i=0;i<10;i++){
//   printf("Digite um número: ");
//   scanf("%d",&n);
//   if(n%2==0){
//   par=par+1;
//   }
// }
//   printf("A quantidade de números pares é:%d\n",par);
//   printf("A quantidade de números ímpares é:%d",10-par);
// return 0;
//   }




// #include <stdio.h>

// int main(void){
// int i,n,par=0;

// for(i=0;i<10;i++){
//   printf("Digite um número: ");
//   scanf("%d",&n);
//   if(n%2==0){
//   par=par+1;
//   }
// }
//   printf("A quantidade de números pares é:%d\n",par);
//   printf("A quantidade de números ímpares é:%d",10-par);
// return 0;
//   }




// #include <stdio.h>

// int main(void){
// int n,soma=0,contador=0;
// float media;

//   while(n!=-1){
//     printf("Digite um número: ");
//     scanf("%d",&n);
//     soma=soma+n;
//     contador++;
//   }
//   media=soma/contador;
//   printf("A média total é:%f",media);
//   return 0;
//   }




// #include <stdio.h>

// int main(void){
// int n,fatorial=1;

//   printf("Digite um número para ser fatorado: ");
//   scanf("%d",&n);

//   while(n>=1){
//     fatorial=fatorial*n;
//       n--;
//   }
//     printf("%d\n",fatorial);
//   }



// #include <stdio.h>

// int main(void){
// int n,fatorial=1;

//   printf("Digite um número: ");
//   scanf("%d",&n);

//   for(int i=n;i>=1;i--){
//     fatorial=fatorial*i;
//     printf("%d x %d = %d\n",i,i-1,fatorial);
//   }
//   printf("%d",fatorial);
//   }




// #include <stdio.h>

// int main(void){
// int n,i=0;

//   printf("Digite um número: ");
//   scanf("%d",&n);
  
// while(i<=9){
//   printf("%d x %d = %d\n",n,i,n*i);
//   i++;
// }

// return 0;
// }





// #include <stdio.h>

// int main(void){
//   int num,sucessor,antecessor,i=0;

// while(i<1){
//   printf("Digite o número: ");
//   scanf("%d",&num);
//   sucessor=num+1;
//   antecessor=num-1;
//     i++;
// }
//   printf("O número digitado é:%d\no sucessor é:%d\no antecessor é:%d",num,sucessor,antecessor);

// return 0;
// }




// #include <stdio.h>

// int main(void){
//   int n;
//   printf("Escolha uma opção 1 ou 0: ");
//   scanf("%d",&n);
//   if(n==1||n==0){
//     printf("Opção válida! Você escolheu a opção %d",n);
//   }else if(n!=1||n!=0){
//      do{
// printf("Opção inválida\n");
// printf("Digite uma nova opção 1 ou 0: ");
// scanf("%d",&n);
//     if(n==1){
//   printf("Opção válida!Você escolheu a opção 1");
// }else if(n==0){
//   printf("Opção válida!Você escolheu a opção 0");
// }
//   }while(n!=1&&n!=0);

// }
// return 0;
//  }




// #include <stdio.h>

// int main(void){
//   int senha;

//   printf("Digite a senha: ");
//   scanf("%d",&senha);

//   if(senha==1234){
//     printf("Senha válida. Bem-vindo");
//   }else if(senha!=1234){
//     do{
//   printf("Senha inválida.\n");
//   printf("Digite a senha novamente: ");
//   scanf("%d",&senha);
//   if(senha==1234){
//     printf("Senha válida!Bem-vindo");
//   }
//   }while(senha!=1234);
//   }
 
// return 0;
//  }




// #include <stdio.h>

// int main(void){
//   float n,total=0,media;
//   int contador=0;
//   do{
//     printf("Digite números reais maiores do que 0(digite 0 para parar): ");
//     scanf("%f",&n);
//     contador++;
//     total=total+n;
//   }while(n!=0);
//  media=total/contador;

//   printf("A média dos números é:%f",media);
// return 0;
//  }




// #include <stdio.h>

// int main(void){
// int n, maior=0,menor=0,contador=0;
// do{
//   printf("Digite 10 números: ");
//   scanf("%d",&n);
//   contador++;
//     if(n>=maior){
//     maior=n;
//  }
// }while(contador<=10);

//   printf("O número maior é:%d",maior);
// return 0;
//  }


// #include <stdio.h>

// int main(void){
// int n, maior=0,menor=0,contador=0;
// do{
//   printf("Digite 10 números: ");
//   scanf("%d",&n);
//   contador++;
//     if(n>=maior){
//     maior=n;
//  }
// }while(contador<=10);

//   printf("O número maior é:%d",maior);
// return 0;
//  }




// #include <stdio.h>

// int main(void){
// int n;
//   do{
//     printf("Digite a opção 1 ou 0: ");
//     scanf("%d",&n);
//     if(n==0||n==1){
//       printf("Opção válida");
//     }else if(n!=0&&n!=1){
//       printf("Opção inválida");
//     }
//   }while(n!=1&&n!=0);
// return 0;
//  }





// #include <stdio.h>

// int main(void){
// int n;
//   do{
//     printf("Digite a opção 1 ou 0: ");
//     scanf("%d",&n);
//     if(n==0||n==1){
//       printf("Opção válida");
//     }else if(n!=0&&n!=1){
//       printf("Opção inválida");
//     }
//   }while(n!=1&&n!=0);
// return 0;
//  }





// #include <stdio.h>
// #include <math.h>

// int main(void){
// int n;
//   printf("Digite um número: ");
//   scanf("%d",&n);

//   int a=pow(n,2);
//   int b=pow(n,3);
//   float c=sqrt(n);
//   float d=cbrt(n);
//   printf("O quadrado do número é: %d\n",a);
//   printf("O cubo do número é:%d\n",b);
//   printf("A raiz quadrada é:%f\n",c);
//   printf("A raiz cúbica é:%f\n",d);
// return 0;
//  }


// #include <stdio.h>
// #include <math.h>

// int main(void){
// int a,b,c,d,soma;

//   printf("Digite 4 números: ");
//   scanf("%d %d %d %d",&a,&b,&c,&d);

//   if(a>=b&&a>=c&&a>=d){
//     soma=b+c+d;
//   }else if(b>=a&&b>=c&&b>=d){
//     soma=a+c+d;
//   }else if(c>=a&c>=b&&c>=d){
//     soma=d+a+b;
//   }else if(d>=a&&d>=b&&d>=c){
//     soma=c+a+b;
//   }
//   printf("A soma dos 3 menores números é:%d",soma);
// return 0;
//  }





// int main(void) {//3.1

// float a,b,c;

// printf("Digite o valores de a,b e c: \n");
//   scanf("%f %f %f",&a,&b,&c);

// float d = sqrt(a), e = sqrt(b), f = sqrt(c);

// printf("O valor da raíz  de %f é:%f\n",a,d);
  
  
// printf("O valor da raíz  de %f é:%f\n",b,e);
  
  
// printf("O valor da raíz de %f é:%f\n",c,f);

  
//   if(d==0||e==0||f==0){
//     printf("A raiz é única\n");
//   }else if(d<0||e<0||f<0){
//     printf("A raiz é imaginária\n");
//   }else if(d>0||e>0||f>0){
//     printf("A raiz é distinta\n");
//   }
//   return 0;
// }





// int main(void) {//3.3

// float a,b,c,delta,x1,x2,x3;

// printf("Digite o valores de a,b e c: \n");
//   scanf("%f %f %f",&a,&b,&c);
  
// delta=(b*b)-(4*a*c);
  
// printf("O valor de delta é: %f\n",delta);

  
//   if(delta==0){
//     printf("A raiz é única\n.");
//     x1=(-b/2*a);
//     printf("O valor de x é:%f\n",x1);
//   }else if(delta<0){
//     printf("A raiz é imaginária.\n");
//   }else if(delta>0){
//     printf("A raiz é distinta.\n");
//     x2=(-b+sqrt(delta))/2*a;
//     x3=(-b-sqrt(delta))/2*a;
//     printf("O valor de x1 é:%f e o valor de x2 é:%f\n",x2,x3);
//   }
//   return 0;
// }



// int main(void) {//3.3

// float a,b,c,delta,x1,x2,x3;

// printf("Digite o valores de a,b e c: \n");
//   scanf("%f %f %f",&a,&b,&c);
  
// delta=(b*b)-(4*a*c);
  
// printf("O valor de delta é: %f\n",delta);

  
//   if(delta==0){
//     printf("A raiz é única\n.");
//     x1=(-b/2*a);
//     printf("O valor de x é:%f\n",x1);
//   }else if(delta<0){
//     printf("A raiz é imaginária.\n");
//   }else if(delta>0){
//     printf("A raiz é distinta.\n");
//     x2=(-b+sqrt(delta))/2*a;
//     x3=(-b-sqrt(delta))/2*a;
//     printf("O valor de x1 é:%f e o valor de x2 é:%f\n",x2,x3);
//   }
//   return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <locale.h>

// int main(void) {//3.3
// setlocale(LC_ALL,"ptb");
  
// int mat[2][2],total=0,somaLinha=0,i,j;

//   for(i=0;i<2;i++){
//     for(j=0;j<2;j++){
//       printf("Digite os elementos da Matriz [%d][%d]: ",i,j);
//       scanf("%d",&mat[i][j]);
//     }
//   }

//   for(i=0;i<2;i++){
//     somaLinha=0;
//     for(j=0;j<2;j++){
//       printf("%d\t",mat[i][j]);
//       somaLinha=somaLinha+mat[i][j];
//     }
//     printf("A soma da linha:%d",somaLinha);
//     printf("\n");
//     total=somaLinha+total;
//   }
//   printf("Soma total é:%d",total);

// return 0;
//  }



// #include <stdio.h> 
// #include <stdlib.h>
// #include <string.h> 
// #include <locale.h> 

// int main(void){
// setlocale(LC_ALL,"ptb");

// int vetor[10],i;

//  for(i=0;i<10;i++){
//    printf("Digite 10 números: ");
//    scanf("%d",&vetor[i]);
//  } 

//   for(i=0;i<10;i=i+2){
//     printf("%d\n",vetor[i]);
//   }
// }




// #include <stdio.h> 
// #include <stdlib.h>
// #include <string.h> 
// #include <locale.h> 

// int main(void){
// setlocale(LC_ALL,"ptb");

//   int vet[15],i;

//     for(i=0;i<15;i++){//vetor sempre começa do 0.
//     vet[i]=(i+1)*3;//porque começa do 1, e não do 0.0+1
//     printf("%d\n",vet[i]);
//       }
  
//   return 0;
// }





// #include <stdio.h> 
// #include <stdlib.h>
// #include <string.h> 
// #include <locale.h> 

// int main(void){
// setlocale(LC_ALL,"ptb");

//   int vet[20],i;

//   for(i=0;i<20;i++){
//     vet[i]=i;
//     printf("vet[%d]=%d\n",vet[i],i);
//   }
//   return 0;
// }





// #include <stdio.h> 
// #include <stdlib.h>
// #include <string.h> 
// #include <locale.h> 

// int main(void){
// setlocale(LC_ALL,"ptb");

// int mat[2][2],soma=0,i,j;

//   for(i=0;i<2;i++){
//     for(j=0;j<2;j++){
//       printf("Digite os valores da Matriz[%d][%d]",i,j);
//       scanf("%d",&mat[i][j]);
//       soma=soma+mat[i][j];
//     }
//   }

//   for(i=0;i<2;i++){
//     for(j=0;j<2;j++){
//       printf("%d\t",mat[i][j]);
//     }
//     printf("\n");
//   }
//   printf("\n");
//   printf("O valor total é: %d",soma);
//   return 0;
// }


// #include <stdio.h> 
// #include <stdlib.h>
// #include <string.h> 
// #include <locale.h> 

// int main(void){
// setlocale(LC_ALL,"ptb");

// int m[3][3],par=0,i,j;

//   for(i=0;i<3;i++){
//     for(j=0;j<3;j++){
//      printf("Digite os valores da Matriz[%d][%d]",i,j);
//      scanf("%d",&m[i][j]);
//       if(m[i][j]%2==0){
//         par=par+1;
//       }
//     }
//   }

//   for(i=0;i<3;i++){
//     for(j=0;j<3;j++){
//       printf("%d\t",m[i][j]);
//     }
//     printf("\n");
//   }
//    printf("\n");
//   printf("A quantidade de números pares é: %d",par);
//   printf("A quantidade de números pares é: %d",9-par);
//   return 0;
// }



// #include <stdio.h> 
// #include <stdlib.h>
// #include <string.h> 
// #include <locale.h> 

// int main(void){
// setlocale(LC_ALL,"ptb");

// int m[3][3],m2[3][3],i,j,soma[3][3];

//   for(i=0;i<3;i++){
//     for(j=0;j<3;j++){
//      printf("Digite os valores da Matriz[%d][%d]",i,j);
//      scanf("%d",&m[i][j]);
//     }
//   }

//   for(i=0;i<3;i++){
//     for(j=0;j<3;j++){
//       printf("%d\t",m[i][j]);
//     }
//     printf("\n");
//   }

//     for(i=0;i<3;i++){
//     for(j=0;j<3;j++){
//      printf("Digite os valores da Matriz[%d][%d]",i,j);
//      scanf("%d",&m2[i][j]);
//     }
//   }

//   for(i=0;i<3;i++){
//     for(j=0;j<3;j++){
//       printf("%d\t",m2[i][j]);
//     }
//     printf("\n");
//   }

//   printf("A matriz somada é:\n ");
//   for(i=0;i<3;i++){
//     for(j=0;j<3;j++){
//       soma[i][j]=m[i][j]+m2[i][j];
//     }
//   }
//    for(i=0;i<3;i++){
//      for(j=0;j<3;j++){
//        printf("%d\t",soma[i][j]);
//      }
//       printf("\n");
//    }
   
//   return 0;
// }




// #include <stdio.h> 
// #include <stdlib.h>
// #include <string.h> 
// #include <locale.h> 

// int main(void){
// setlocale(LC_ALL,"ptb");

// int vet[5],i;

//   for(i=0;i<5;i++){
//     printf("Digite os valores do vetor: ");
//     scanf("%d",&vet[i]);
//   }
//   for(i=4;i>=0;i--){
//     printf("%d",vet[i]);
//   }
//   return 0;
// }




// #include <stdio.h> 
// #include <stdlib.h>
// #include <string.h> 
// #include <locale.h> 

// int main(void){
// setlocale(LC_ALL,"ptb");

// int m[3][3],i,j;

// for(i=0;i<3;i++){
//   for(j=0;j<3;j++){
//     printf("Digite os elementos da matriz[%d][%d]: ",i,j);
//     scanf("%d",&m[i][j]);
//   }
// }
// for(i=0;i<3;i++){
//   for(j=0;j<3;j++){
//     printf("%d\t",m[i][j]);
//   }
//   printf("\n");
// }
  
// for(i=0;i<3;i++){
//   for(j=0;j<3;j++){
//     m[i][j]=m[i][j]*9;
//   }
// }

//   for(i=0;i<3;i++){
//   for(j=0;j<3;j++){
//     printf("%d\t",m[i][j]);
//   }
//   printf("\n");
// }
  
//   return 0;
// }



// #include <stdio.h> 
// #include <stdlib.h>
// #include <string.h> 
// #include <locale.h> 

// int main(void){
// setlocale(LC_ALL,"ptb");

// int m[3][3],i,j,vetor[3];

// for(i=0;i<3;i++){
//   for(j=0;j<3;j++){
//     printf("Digite os elementos da matriz[%d][%d]: ",i,j);
//     scanf("%d",&m[i][j]);
//   }
// }
// for(i=0;i<3;i++){
//   for(j=0;j<3;j++){
//     printf("%d\t",m[i][j]);
//   }
//   printf("\n");
// }
  
// for(i=0;i<3;i++){
//   printf("Digite o valor do vetor: ");
//   scanf("%d",&vetor[i]);
//   }

  
//   for(i=0;i<3;i++){
//     for(j=0;j<3;j++){
//     m[i][j]=m[i][j]*vetor[i];
//   }
// }


//   for(i=0;i<3;i++){
//   for(j=0;j<3;j++){
//     printf("%d\t",m[i][j]);
//   }
//   printf("\n");
// }
  
//   return 0;
// }




// #include <stdio.h> 
// #include <stdlib.h>
// #include <string.h> 
// #include <locale.h> 

// int main(void){
// setlocale(LC_ALL,"ptb");

// int vetor[5],i,soma=0;

// for(i=0;i<5;i++){
//   printf("Digite o valor do vetor: ");
//   scanf("%d",&vetor[i]);
//   soma=soma+vetor[i];
// }
//   printf("A soma é:%d",soma);
//   return 0;
// }







// #include <stdio.h> 
// #include <stdlib.h>
// #include <string.h> 
// #include <locale.h> 

// int main(void){
// setlocale(LC_ALL,"ptb");

// char nome[50];
// int i;
// printf("Digite um nome: ");
// fgets(nome,50,stdin);

// for(i=0;i<4;i++){
//   printf("%c",nome[i]);
// }
//   return 0;
// }




// #include <stdio.h> 
// #include <stdlib.h>
// #include <string.h> 
// #include <locale.h> 

// int main(void){
// setlocale(LC_ALL,"ptb");

// char nome[50];
// int i;
// printf("Digite um nome: ");
// fgets(nome,50,stdin);

// for(i=1;i<strlen(nome);i=i+2){
//   printf("%c",nome[i]);
// }
//   return 0;
// }



// #include <stdio.h> 
// #include <stdlib.h>
// #include <string.h> 
// #include <locale.h> 

// int main(void){
// setlocale(LC_ALL,"ptb");

// char nome[50],sexo;
// int i,idade;
  
// printf("Digite um nome: ");
// fgets(nome,50,stdin);

// printf("Escolha o seu sexo: f- feminino e m-masculino: ");
// scanf(" %c",&sexo);

// printf("Digite a sua idade: ");
// scanf("%d",&idade);

// if(sexo=='f'&&idade<25){
//   fputs(nome,stdout);
//   printf(",aceita");
// }else{
//   fputs(nome,stdout);
//   printf(",não aceita");
// }
//   return 0;
// }





// #include <stdio.h> 
// #include <stdlib.h>
// #include <string.h> 
// #include <locale.h> 

// int main(void){
// setlocale(LC_ALL,"ptb");

// char n[50];


// printf("Digite um nome: ");
// fgets(n,50,stdin);

// printf("%d\n",strlen(n)-1);
//   return 0;
// }







// #include <stdio.h>
// #include <locale.h>
// #include <string.h>
// #include <stdlib.h>


// int main(void){
//   setlocale(LC_ALL,"ptb");

//   char nome[50];
//   int i=0;
//     printf("Digite um nome:");
  
//     fgets(nome,50,stdin);


//     while(nome[i] != '\0'){
//         i++;
//     }
//     printf("A string %s possui %d de caracteres.\n", nome, i-1);

//  }





// #include <stdio.h>
// #include <locale.h>
// #include <string.h>
// #include <stdlib.h>


// int main(void){
//   setlocale(LC_ALL,"ptb");

//  char s[80]="Olá, galera!";//aqui tem 13 caracteres. O espaço conta
//   printf("%d\n",strlen(s));//ela quer que mostre a quantidade de caracteres.

//  }


// #include <stdio.h>
// #include <stdlib.h>
// #include <locale.h>
// #include <string.h>

// int main(void){

// int i,num_aluno;
// float media=0,total=0;

// printf("Digite a quantidade de alunos: ");
// scanf("%d",&num_aluno);

// float nota[num_aluno];

// for(i=0;i<num_aluno;i++){
// printf("Digite a nota dos alunos: ");
// scanf("%f",&nota[i]);

// total=total+nota[i];
// }
//   media=total/i;

//   printf("A média total de todos os alunos é:%f",media);
// }



// #include <stdio.h>
// #include <stdlib.h>
// #include <locale.h>
// #include <string.h>

// int main(void){

//   char letras[26];
//   int i=0,contador=0;

//   for(i=97;i<=122;i++){
//   letras[contador]=i;
//   contador++;
//   }
// for(i=0;i<26;i++){
//   printf("%d=%c\n",letras[i],letras[i]);
// }

// return 0;
//  }




// #include <stdio.h>
// #include <stdlib.h>
// #include <locale.h>
// #include <string.h>

// int main(void){

//   char s1[40]="Oi",s2[40]="Tchau";

//   printf("%d",strlen(s1));

// return 0;
//  }


  //criar  uma matriz 2x2, calcular e imprimir o somatório dos elementos de cada linha e calcular e imprimir o somatório de todos os elementos da matriz.


// #include <stdio.h>
// #include <stdlib.h>
// #include <locale.h>
// #include <string.h>

// int main(void){

//   int mat[2][2],somaL,total=0,i,j;

//   for(i=0;i<2;i++){
//     for(j=0;j<2;j++){
//       printf("Digite os valores da matriz[%d][%d]: ",i,j);
//       scanf("%d",&mat[i][j]);
//     }
//   }

//   for(i=0;i<2;i++){
//     somaL=0;
//   for(j=0;j<2;j++){
//     printf("%d\t",mat[i][j]);
//     somaL=somaL+mat[i][j];
//   }
//     printf("A soma da linha é:%d",somaL);
//     printf("\n");
//     total=total+somaL;
//   }
// printf("O somatório total é:%d",total);
// return 0;
//  }





// #include <stdio.h>
// #include <stdlib.h>
// #include <locale.h>
// #include <string.h>

// int main(void){

//   int vet[5],i=0;

// for(i=0;i<5;i++){
//   printf("Digite 5 números: ");
//   scanf("%d",&vet[i]);
// }
//   for(i=4;i>=0;i--){
//     printf("%d",vet[i]);
//   }
// return 0;
//  }




// #include <stdio.h>
// #include <stdlib.h>
// #include <locale.h>
// #include <string.h>

// int main(void){

//   int mat[3][3],i=0,j=0;

//   for(i=0;i<3;i++){
//     for(j=0;j<3;j++){
//       printf("Digite os elementos da matriz[%d][%d]: ",i,j);
//       scanf("%d",&mat[i][j]);
//     }
//   }
//   for(i=0;i<3;i++){
//     for(j=0;j<3;j++){
//       printf("%d\t",mat[i][j]);
//     }
//     printf("\n");
//   }
//   for(i=0;i<3;i++){
//     for(j=0;j<3;j++){
//       mat[i][j]=mat[i][j]*9;
//     }
//   }

//   for(i=0;i<3;i++){
//     for(j=0;j<3;j++){
//       printf("%d\t",mat[i][j]);
//     }
//     printf("\n");
//   }
// return 0;
//  }




// #include <stdio.h>
// #include <stdlib.h>
// #include <locale.h>
// #include <string.h>

// int main(void){

//   int mat[3][3],vet[3],i,j;

//   for(i=0;i<3;i++){
//     for(j=0;j<3;j++){
//       printf("Digite os elementos da matriz[%d][%d]: ",i,j);
//       scanf("%d",&mat[i][j]);
//     }
//   }
//   for(i=0;i<3;i++){
//     for(j=0;j<3;j++){
//       printf("%d\t",mat[i][j]);
//     }
//     printf("\n");
//   }
//   for(i=0;i<3;i++){
//     printf("Digite os valores do vetor: ");
//     scanf("%d",&vet[i]);
//   }
//   for(i=0;i<3;i++){
//     for(j=0;j<3;j++){
//       mat[i][j]=mat[i][j]*vet[i];
//     }
//   }
//   for(i=0;i<3;i++){
//     for(j=0;j<3;j++){
//       printf("%d\t",mat[i][j]);
//     }
//     printf("\n");
//   }
// return 0;
//  }




// #include <stdio.h>
// #include <stdlib.h>
// #include <locale.h>
// #include <string.h>

// int main(void){

//   int vet[5],i=0,soma=0;
//   for(i=0;i<5;i++){
//     printf("Digite os valores do vetor: ");
//     scanf("%d",&vet[i]);
//     soma=soma+vet[i];
//   }
//     printf("A soma total é:%d",soma);

  
// return 0;
//  }



// #include <stdio.h>
// #include <stdlib.h>
// #include <locale.h>
// #include <string.h>

// int main(void){

//   char nome[50];

//   printf("Digite um nome: ");
//   fgets(nome,50,stdin);

//   for(int i=0;i<4;i++){
//     printf("%c",nome[i]);
//   }
  
// return 0;
//  }




// #include <stdio.h>
// #include <stdlib.h>
// #include <locale.h>
// #include <string.h>

// int main(void){

//   char nome[50];
//   int i=0;

 
//   printf("Digite um nome: ");
//   gets(nome);

//   for(i=1;i<strlen(nome);i=i+2){
//     printf("%c",nome[i]);
//   }
// return 0;
//  }



// #include <stdio.h>
// #include <stdlib.h>
// #include <locale.h>
// #include <string.h>

// int main(void){

//   char nome[50];
//   int idade;
//   char sexo;

 
//   printf("Digite um nome: ");
//   fgets(nome,50,stdin);

//   printf("Digite a sua idade: ");
//   scanf("%d",&idade);

//   printf("Digite o seu sexo(m para masculino ou f para feminino): ");
//   scanf(" %c",&sexo);

//   if(sexo=='f'&&idade<25){
//       printf("%s,aceita",nome);
//   }else{
//     printf("%s,não aceita",nome);
//   }
// return 0;
//  }




// #include <stdio.h>
//  #include <stdlib.h>
// // #include <locale.h>
//  #include <string.h>

//  int main(void){

//    char nome[50];
//     printf("Digite um nome: ");
//    gets(nome);

//    printf("%d",strlen(nome));
// // return 0;
//   }





// #include <stdio.h>
// #include <stdlib.h>
// #include <locale.h>
// #include <string.h>

// int main(void){

//   char nome[50],i=0;
  
//   printf("Digite um nome: ");
//   gets(nome);

//   while(nome[i]!='\0'){
//     i++;
//   }
//   printf("%d",i);
// return 0;
//  }





// #include <stdio.h>
// #include <stdlib.h>
// #include <locale.h>
// #include <string.h>

// int main(void){

//   char nome[50],letra;
//   int i=0,soma=0;
  
//   printf("Digite uma palavra: ");
//   gets(nome);

//   printf("Digite uma letra: ");
//   scanf(" %c",&letra);
  
//   for(i=0;i<strlen(nome);i++){
//     if(nome[i]=='a'){
//       nome[i]=letra;
//       soma=soma+1;
//     }else if(nome[i]=='e'){
//       nome[i]=letra;
//       soma=soma+1;
//     }else if(nome[i]=='i'){
//     nome[i]=letra;
//       soma=soma+1;
//     }else if(nome[i]=='o'){
//      nome[i]=letra;
//       soma=soma+1;
//     }else if(nome[i]=='u'){
//       nome[i]=letra;
//       soma=soma+1;
//     }
//   }
//   printf("O total de vogais foi de:%d\n",soma);
//   printf("O novo nome será:%s",nome);
// return 0;
//  }




// #include <stdio.h>
// #include <stdlib.h>
// #include <locale.h>
// #include <string.h>

// int main(void){

//   char nome[50],letra;
//   int i=0,soma=0;
  
//   printf("Digite uma palavra: ");
//   gets(nome);

//   printf("Digite uma letra: ");
//   scanf(" %c",&letra);
  
//   for(i=0;i<strlen(nome);i++){
//     if(nome[i]=='a'){
//       nome[i]=letra;
//       soma=soma+1;
//     }else if(nome[i]=='e'){
//       nome[i]=letra;
//       soma=soma+1;
//     }else if(nome[i]=='i'){
//     nome[i]=letra;
//       soma=soma+1;
//     }else if(nome[i]=='o'){
//      nome[i]=letra;
//       soma=soma+1;
//     }else if(nome[i]=='u'){
//       nome[i]=letra;
//       soma=soma+1;
//     }
//   }
//   printf("O total de vogais foi de:%d\n",soma);
//   printf("O novo nome será:%s",nome);
// return 0;
//  }




// #include <stdio.h>
// #include <stdlib.h>
// #include <locale.h>
// #include <string.h>

// int main(void){

//   int vet[10],i=0;

//   for(i=0;i<10;i++){
//     printf("Digite o valor do vetor[%d]: ",i);
//     scanf("%d",&vet[i]);
//   }
//   for(i=0;i<10;i=i+2){
//     printf("%d\n",vet[i]);
//   }
// return 0;
//  }




// #include <stdio.h>
// #include <stdlib.h>
// #include <locale.h>
// #include <string.h>

// int main(void){

//   int vet[15],i=0;

//   for(i=0;i<15;i++){
//     vet[i]=(i+1)*3;
//   }
//   for(i=0;i<15;i++){
//     printf("vetor[%d] : %d\n",i,vet[i]);
//   }
// return 0;
//  }


// #include <stdio.h>
// #include <stdlib.h>
// #include <locale.h>
// #include <string.h>

// int main(void){

//   int vet[20],i=0,n=0;

//   for(i=0;i<20;i++){
//     vet[i]=i;
//   }
//   for(i=0;i<20;i++){
//     printf("vetor[%d]:%d\n",vet[i],vet[i]);
//   }
//  do{
//    printf("Digite um valor que você deseje consultar: ");
//     scanf("%d",&n);
//     if(n<0||n>=20){
//       printf("Valor inválido\n");
//     }else{
//       printf("Valor válido\n");
//     }} while(n<0||n>=20);
  
// return 0;
//  }




#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(void){

  int vet[20],i=0,n=-1;


  for(i=0;i<20;i++){
     vet[i]=i;
    printf("vetor[%d]:%d\n",vet[i],vet[i]);
  }
  // while(n<0||n>=20){
  //   printf("Digite um valor que você deseje consultar: ");
  //   scanf("%d",&n);
  //   if(n<0||n>=20){
  //     printf("Valor inválido");
  //   }else{
  //     printf("Valor válido");
  //   }
  // }
  
    printf("Digite um número: ");
    scanf("%d",&n);
      if(n==vet[i]){
        printf("Esse número existe");
      }else if(n!=vet[i]){
        printf("Esse número não existe");
      }
  }
;
 


// #include <stdio.h>
// #include <stdlib.h>
// #include <locale.h>
// #include <string.h>

// int main(void){
// setlocale(LC_ALL,"ptb");
//   char nome[79];
//   int i;
//   printf("Digite uma palavra: ");
//   fgets(nome,79,stdin);

//   for(i=78;i>=0;i--){
//     printf("%c",nome[i]);
//   }
// return 0;
//  }





// #include <stdio.h>
// #include <stdlib.h>
// #include <locale.h>
// #include <string.h>

// int main(void){
// setlocale(LC_ALL,"ptb");
//   char nome[79];
//   int i=0;
//   printf("Digite uma palavra: ");
//   fgets(nome,79,stdin);

//   for(i=strlen(nome);i>=0;i--){
//     printf("%c",nome[i]);
//   }
// return 0;
//  }



// #include <stdio.h>
// #include <stdlib.h>
// #include <locale.h>
// #include <string.h>

// int main(void){
// setlocale(LC_ALL,"ptb");
//   char nome[79];
//   int i=0;
//   printf("Digite uma palavra: ");
//   gets(nome);

//   for(i=strlen(nome);i>=0;i--){
//     printf("%c",nome[i]);
//   }
// return 0;
//  }


// #include <stdio.h>
// int main(void){
//   int c;

//   printf("Digite o número: ");
//   scanf("%d",&c);
  
  

//   if (c<=7)
//   printf("C e igual ou menor do que 7\n");
  

// }



// #include <stdio.h>
// #include <stdlib.h>
// #include <locale.h>

// int main(void){
// setlocale(LC_ALL,"ptb");

//   int vetor[20],i=0;

//   for(i=2;i<=20;i=i+2){
//     vetor[i]=i;
//     printf("%d\n",vetor[i]);
//   }
// }




// #include <stdio.h>
// #include <stdlib.h>
// #include <locale.h>

// int main(void){
// setlocale(LC_ALL,"ptb");

//   int mat[4][4],i=0,j=0,soma=0;

//   for(i=0;i<4;i++){
//     for(j=0;j<4;j++){
//       printf("Digite os valores da matriz[%d][%d]: ",i,j);
//       scanf("%d",&mat[i][j]);
//       if(mat[i][j]>10){
//         soma=soma+1;
//       }
//     }
//   }
//   for(i=0;i<4;i++){
//     for(j=0;j<4;j++){
//       printf("%d\t",mat[i][j]);
//     }
//     printf("\n");
//   }

//   printf("Os números maiores que 10 que ela possui são:%d",soma);
//   return 0;
// }







// #include <stdio.h>
// #include <stdlib.h>
// #include <locale.h>

// int main(void){
// setlocale(LC_ALL,"ptb");

//   char letras[26];//tabela ascii. Foi o vetor que puxou essas letras. Serão 26 letras armazenadas
//   int contador=0;
  

//   for(int i=97;i<=122;i++){// Mesmo sendo número, estamos usando a tabela Ascii. Esses números são da tabela Ascii. 65 a 90 é maiúscula; 97 a 122 é minúscula.
//     letras[contador]=i;//começa da posição 0, pois o contador=0, e estamos igualando à letra, que começa no 97, e vai somando.
//     contador=contador+1;//contador+=1. Vamos somando para ficar mudando de posição do vetor letras.
//   }
// //imprimir as  letras e seus respectivos valores
//   for(contador=0;contador<26;contador++){
//     printf("%d=%c\n",letras[contador],letras[contador]);//também funciona colocar %d=%d. A professora colocou %c para mostrar que número pode ser char também.
//   }
//   return 0;
// }

//1- Escreva um algoritmo para ler o raio de um círculo, calcular e escrever a sua área. 

// #include <stdio.h>

// int main(void) {
//   float area,raio;

//   printf("Digite o raio do círculo: ");
//   scanf("%f",&raio);

//   area=3.14*(raio*raio);

//   printf("A área do círculo é:%.2f",area);
//   return 0;
// }


//2-Escreva um programa para ler um valor inteiro e mostrar ao usuário qual é o antecessor e sucessor do número informado.
// #include<stdio.h>

// int main(void){
// int valor;

//   printf("Digite um valor inteiro: ");
//   scanf("%d",&valor);

// printf("O sucessor do número é:%d; O antecessor do número é: %d",valor+1,valor-1);
//   return 0;
// }





// 3-As maçãs custam R$ 2,30 se forem compradas menos do que uma dúzia, e R$ 2,05 se forem compradas pelo menos doze. Escreva um algoritmo que leia o número de maçãs compradas, calcule e escreva o valor total da compra.

// #include<stdio.h>

// int main(void){
// int numeroTotal=0;
// float valorTotal=0,precoMaca=0;

//   printf("Digite quantas maçãs você deseja comprar: ");
//   scanf("%d",&numeroTotal);

//   if(numeroTotal<12){
//     precoMaca=2.30;
//   }else if(numeroTotal>=12){
//     precoMaca=2.05;
//   }
  
//   valorTotal=precoMaca*numeroTotal;

//   printf("O número de maçãs compradas foi de: %d; O valor total da compra foi de:%.2f",numeroTotal,valorTotal);

//   return 0;
// }


// 4-Escreva um algoritmo para ler um número inteiro (considere que serão lidos apenas valores positivos e inteiros) e escrever se é par ou ímpar.

// #include<stdio.h>

// int main(void){

// int numero=0,par=0,impar=0;

//   printf("Digite um número inteiro e positivo: ");
//   scanf("%d",&numero);

//   if(numero%2==0){
//     printf("Esse número é par");
//   }else{
//     printf("Esse número é ímpar");
//   }
//   return 0;
// }

// 5-Escreva um algoritmo para ler 2 valores (considere que não serão lidos valores iguais) e escrevê-los em ordem crescente.


// #include<stdio.h>

// int main(void){

//   int n1=0,n2=0;

//   printf("Digite um valor: ");
//   scanf("%d",&n1);

//   printf("Digite um valor: ");
//   scanf("%d",&n2);

//   if(n1>n2){
//     printf("Ordem crescente: %d > %d",n1,n2);
//   }else{
//     printf("Ordem crescente: %d > %d",n2,n1);
//   }
//   return 0;
// }

// 6-Escreva um algoritmo para ler as notas da 1a . e 2a . avaliações de um aluno, calcule e imprima a média semestral. Só deve aceitar valores válidos (0 a 10) para cada nota.

// #include<stdio.h>

// int main(void){

// float av1=0,av2=0,media=0;
// do{
//   printf("Digite a nota da av1: ");
//   scanf("%f",&av1);

//   printf("Digite a nota da av2: ");
//   scanf("%f",&av2);  

//   if(av1<0||av1>10||av2<0||av2>10){
//     printf("Esse valor é inválido. Digite um valor válido!\n");
//   }
// }while(av1<0||av1>10||av2<0||av2>10);

//   media=(av1+av2)/2;

//   printf("A média semestral é de:%.2f",media);
//   return 0;
// }


// 7-Faça um programa que calcule e escreva o valor de S:

// #include<stdio.h>

// int main(void){

// float s=0,i=0;


// s=1;

// for(i=2;i<=1000;i++){
//   s=s+1/i;

// }
//   printf("%.2f",s);
//   return 0;
// }

// 8 - Elabore um programa em C que imprima na tela a quantidade de múltiplos de 5 que foram digitados em uma coleção de 15 elementos. 


// #include<stdio.h>

// int main(void){
// int n[15];
// int i=0;
// int contador=0;

//   for(i=0;i<15;i++){
//     printf("Digite o número: ");
//     scanf("%d",&n[i]);

//     if(n[i]%5==0){
//       contador++;
//     }
//   }

//   printf("A quantidade de elementos múltiplos de 5 é de :%d",contador);
//   return 0;
// }

//9-Imprima todos os números de 100 até 1. 

// #include<stdio.h>

// int main(void){
// int i=0;

//   for(i=100;i>0;i--){
//     printf("%d\n",i);
//   }
//   return 0;
// }

// 10-Faça um programa que leia um número e imprima os números de 1 a num e o seu somatório. 

// #include<stdio.h>

// int main(void){
// int i=0,n=0,total=0;

//   printf("Digite um número: ");
//   scanf("%d",&n);

//   for(i=1;i<=n;i++){
//     total=i+total;
//     printf("%d\n",i);
//   }
//   printf("O somatório total deles é:%d",total);
//   return 0;
// }


// 11- Faça um programa que imprima a soma dos números pares entre 15 e 100.

// #include<stdio.h>

// int main(void){
// int i=0,n=0,totalPar=0;

//   for(i=15;i<=100;i++){
//     if(i%2==0){
//       totalPar=i+totalPar;
//     }
//   }
//   printf("%d",totalPar);
//   return 0;
// }


//12-Entrar com 10 números e imprimir a metade de cada número. 

// #include<stdio.h>

// int main(void){
// int n[10],i=0,metade=0;


// for(i=0;i<10;i++){
//   printf("Digite dez números: ");
//   scanf("%d",&n[i]);
//   metade=n[i]/2;
//   printf("A metade do número digitado é: %d\n",metade);
// }
 
//   return 0;
// }

// 13-Entrar com 12 números e imprimir a média desses números. 

// #include<stdio.h>

// int main(void){

// int n[12],i=0;
// float media=0,total=0;
//   for(i=0;i<12;i++){
//   printf("Digite doze números: ");
//   scanf("%d",&n[i]);

//   total=n[i]+total;
//   }
//  media=total/i;

//   printf("A média dos números é de:%f",media);
//   return 0;
// }

// 14-Faça um programa em C que receba via teclado os valores das variáveis existentes na expressão abaixo e imprima o resultado:
// ((x – 5) * y) – z

// #include<stdio.h>

// int main(void){

//   int x=0,z=0,y=0,resultado=0;

// printf("Digite o valor de X: ");
// scanf("%d",&x);

// printf("Digite o valor de Y: ");
// scanf("%d",&y);

// printf("Digite o valor de Z: ");
// scanf("%d",&z);

// resultado=((x-5)*y)-z;
  
// printf("O resultado da expressão ((%d-5)*%d)-%d é igual:%d",x,y,z,resultado);
//   return 0;
// }


// 15-Faça um programa que leia uma sequência de 10 números e informe o total de ocorrências do último número lido. Exemplo: supondo a seguinte sequência de números 38 4 23 5 6 7 4 12 4 O resultado será: O número 4 apareceu 3 vezes.

// #include<stdio.h>

// int main(void){

// int n[10],i=0,contador=0;

// for(i=0;i<10;i++){
//   printf("Digite dez números: ");
//   scanf("%d",&n[i]);
//   }

// for(i=0;i<10;i++){
//   if(n[i]==n[9]){
//     contador++;
//   }
// }
//   printf("A quantidade de números %d repetidos foi de:%d",n[9],contador);
//return 0;
// }


// 16-Escrever um programa que declara e lê um vetor int com 10 elementos. Exibir a diferença entre o maior e o menor valor armazenado no vetor.

// #include<stdio.h>

// int main(void){
// int n[10],i=0,maior=0,menor=0,diferenca=0;

// for(i=0;i<10;i++){
//   printf("Digite dez números: ");
//   scanf("%d",&n[i]);
//   }

// for(i=0;i<10;i++){
//   if(n[i]>maior){
//  maior=n[i];
//   }else if(n[i]<menor){
//     menor=n[i];
//   }
// }
//   diferenca=maior-menor;

//   printf("A diferença entre o maior(%d) e o menor(%d) número é de:%d",maior,menor,diferenca);
//   return 0;
// }










// 1-Dada uma matriz Amxn, imprimir o número de linhas e o número de colunas nulas da matriz.

// Exemplo: m = 4 e n = 4

// #include <stdio.h>

// int main(void) {
//  int mat[4][4]={{1,0,2,3},{4,0,5,6},{0,0,0,0},{0,0,0,0}};
//   int i=0,j=0,linhaNula=0, colunaNula=0;
  
  


//     // Contagem das linhas nulas
//     for(i = 0; i <4; i++) {
//         int soma = 0;
//         for(j = 0; j <4; j++) {
//             soma += mat[i][j];
//         }
//         if(soma == 0) {
//             linhaNula++;
//         }
//     }

//     // Contagem das colunas nulas
//     for(j = 0; j < 4; j++) {
//         int soma = 0;
//         for(i = 0; i < 4; i++) {
//             soma += mat[i][j];
//         }
//         if(soma == 0) {
//             colunaNula++;
//         }
//     }
// printf("O número de colunas nulas é de: %d; O número de linhas nulas é de:%d.",colunaNula,linhaNula);
    
//   return 0;
// }




// 2-Os elementos aij de uma matriz inteira Anxn representam os custos de transporte da cidade i para a cidade j. Dados n itinerários, cada um com k cidades, calcular o custo total para cada itinerário.

// #include<stdio.h>

// int main(void){

// int i=0,j=0,mat[i][j],n=0,k=0;

  
//   return 0;
// }





//3. Escreva uma função que recebe como parâmetro um inteiro positivo ano e devolve 1 se ano for bissexto, 0 em caso contrário. (Um ano é bissexto se (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0)).)
//#include <stdio.h>

// int function(int ano, int mes, int vida){
//   int somar=(365*ano)+(30*mes)+(vida);
//   return somar;
// }

// int main(void){
//   int ano,mes,dia;
  
//   printf("Coloque os anos de sua vida: ");
//   scanf("%d",&ano);

//   printf("Coloque os meses de sua vida: ");
//   scanf("%d",&mes);

//   printf("Coloque os dias de sua vida: ");
//   scanf("%d",&dia);
  
//   printf("A quantidade de dias vividos foi de:%d",function(ano,mes,dia));
// }




// 4. Escreva um programa que leia um inteiro não-negativo n e imprima a soma dos n primeiros números primos.

//#include <stdio.h>

// int function(int n){
//   int i=0,total=0;
//   for(i=1;i<n;i++){
//     if(n%i==0){
//       total++;
//     }
//   }
//   return total;
// }
// int main(void){
//   int n=0,soma=0;

//   while(n!=-1){
//   printf("Escreva um número inteiro não negativo: ");
//   scanf("%d",&n);
//     if(function(n)==1){
//       soma=n+soma;
//     }
//   }
  
// printf("O total da soma dos números primos é:%d",soma);

  
// }


//5. Escreva um programa para ler dois vetores v e w de 10 componentes cada, e calcular e escrever a soma dos produtos dos respectivos componentes de v e w, através da utilização de uma função.


// #include<stdio.h>

// int function(int v[10],int w[10]){
//   int soma=0;
//   int produtoV=1;
//   int produtoW=1;
//   int i=0;
  
//   for(i=0;i<10;i++){
//   produtoV=v[i]*produtoV;
// }

//   for(i=0;i<10;i++){
//   produtoW=w[i]*produtoW;
// }
// soma=produtoV+produtoW;
  
//   return soma;
// }

// int main(void){

// int v[10],w[10],i=0;

//   //salvar dados no v
// for(i=0;i<10;i++){
//   printf("Digite o elemento [%d] para o vetor v: ",i);
//   scanf("%d",&v[i]);
// }
// //salvar dados no w
//   for(i=0;i<10;i++){
//   printf("Digite o elemento [%d] para o vetor w: ",i);
//   scanf("%d",&w[i]);
// }

//   printf("A soma dos produtos dos elementos dos vetores é de :%d",function(v,w));

  
//   return 0;
// }


//6. Escreva um programa para ler um vetor v de inteiros de 100 componentes e realizar uma busca neste vetor, informando se um elemento que se deseja encontrar, foi ou não encontrado no vetor e em que posição. Faça uma função para a busca que receba o vetor, o número de elementos do vetor e o valor a ser procurado. Ela deverá retornar o índice (sucesso na busca) ou -1 (fracasso na busca).

// #include <stdio.h>

// int function(int *v,int tamanho, int valor){
  
//   for(int i=0;i<tamanho;i++){
//     if(valor == v[i]){
//        return valor;
//     }
// }
//   return -1;
// } 

// int main(void){
//   int v[100],i=0,valor,n;

//   for(i=0;i<100;i++){
//    v[i]=i;
//     printf("%d\n",v[i]);
//   }
  
//   printf("Digite o valor a ser procurado: ");
//   scanf("%d",&valor);

//   n=function(v,100,valor);

//   printf("%d",n);

//   return 0;
// }

// #include <stdio.h>

// int buscar(int *v, int n, int x) {
//     int i;
//     for (i = 0; i < n; i++) {
//         if (x == v[i]) {
//             return x;
//         }
//     }
//     return -1;
// }

// int main() {
//     int v[100];
//     int n, x, posicao;

//     // Leitura do vetor
//     for(int i=0;i<100;i++){
//       v[i]=i;
//     }

//     // Leitura do valor a ser procurado
//     printf("Digite o valor a ser procurado: ");
//     scanf("%d", &x);

//     // Busca do elemento no vetor
//     posicao = buscar(v, 100, x);

//     // Exibição do resultado da busca
//     if (posicao == -1) {
//         printf("O valor %d não foi encontrado no vetor.\n", x);
//     } else {
//         printf("O valor %d foi encontrado na posicao %d do vetor.\n", x, posicao);
//     }

//     return 0;
// }




// 1-Faça uma função que receba dois números positivos por
// parâmetro e retorne a soma dos N números inteiros existentes entre
// eles.
// #include<stdio.h> 

// int soma(int n1, int n2);

// int main(void){
// int n1,n2;
//   printf("Digite um número: ");
//   scanf("%d",&n1);

//   printf("Digite um outro número: ");
//   scanf("%d",&n2);

//   printf("O resultado da soma é:%d", soma(n1,n2));
//   return 0;
// }

// int soma(int n1, int n2){
//   int soma=0, i=0;

//   for(i=n1+1;i<n2;i++){
//     soma=i+soma;
//   }
//   return soma;
// }
// 2-Faça uma função que receba três notas de um aluno com
// parâmetros e uma letra. Se a letra for A o procedimento calcula a
// média das notas do aluno, se for P o procedimento calcula a média
// ponderada com pesos 5,3 e 2. A média calculada deve ser devolvida
// ao programa principal para, então ser mostrada.

// #include<stdio.h> 

// float media(float n1, float n2, float n3, char letra);

// int main(void){
// float n1,n2,n3;
// char letra;
//   printf("Digite uma nota: ");
//   scanf("%f",&n1);

//   printf("Digite outra nota: ");
//   scanf("%f",&n2);

//   printf("Digite outra nota: ");
//   scanf("%f",&n3);

//   printf("Digite uma letra- A ou P :");
//   scanf(" %c",&letra);

//   printf("A média do aluno é:%.2f",media(n1,n2,n3,letra));
//   return 0;
// }

// float media(float n1, float n2, float n3, char letra){
//   float media=0;
//   if(letra=='A'){
//     media=(n1+n2+n3)/3;

//   }else if(letra=='P'){
//     media=(n1*5 + n2*3 + n3*2)/10;
//   }
//   return media;
// }



// 3-Escreva uma função potenciaInt(base, expoente) que retorne o
// valor de baseexpoente. Não use nenhuma das funções da biblioteca
// matemática.

// #include<stdio.h> 
// int pot(int base, int expo);

// int main(void){
//   int base,expo;
//   printf("Digite uma base: ");
//   scanf("%d",&base);

//   printf("Digite um expoente: ");
//   scanf("%d",&expo);

//   printf("%d",pot(base,expo));
// }
// int pot(int base, int expo){
//   int i=0, potencia=1;
//   for(i=0;i<expo;i++){
//     potencia=potencia*base;
//   }
//   return potencia;
// }



// 4-Escreva uma função omega(int n) que retorne a soma dos
// divisores de n exceto ele próprio. Exemplo: omega(15) = 1+3+5 = 9

// Usando a função omega solicitada acima, escreva um programa
// que imprima todos os números primos entre 2 e 10000.
// #include<stdio.h>
// int omega(int n);

// int main(void){
// int i=0,n=0;

//   for(i=2;i<1000;i++){
//     if(omega(i)==1){
//       printf("%d\n",i);
//     }
//   }
//   return 0;
// }

// int omega(int n){
//   int i=0,soma=0;
//   for(i=1;i<n;i++){
//   if(n%i==0){
//     soma=i+soma;
//   }
//   }
//     return soma;
// }


// #include<stdio.h>
// int omega(int n);

// int main(void){
// int i=0,n=0;

// printf("Digite um número: ");
// scanf("%d",&n);

// if(omega(n)==1){
//   printf("Número primo!");
// }else{
//   printf("Não é número primo!");
// }
//   return 0;
// }

// int omega(int n){
//   int i=0,qtd=0,num=0;
//   for(i=1;i<n;i++){
//   if(n%i==0){
//   qtd++;
//   }
//   }
//     if(qtd==1){
//      return 1;
//     }
//     else{
//       return 0;
//     }

// }


// Crie um programa que receba 2 valores e realize as operações de
// soma e subtração com a utilização de ponteiros. Mostrar os valores
// dos ponteiros ao final.
// #include<stdio.h>
// int main(void){
//   int n1,n2,*p,*p2;
//   p=&n1;
//   p2=&n2;
//   printf("Digite um valor: ");
//   scanf("%d",p);
//   printf("Digite outro valor: ");
//   scanf("%d",p2);

//   printf("Soma:%d; Sub:%d",*p+*p2,*p-*p2);
// }

// Crie um programa que leia uma variável a e um ponteiro pa que aponta para a. Leia também uma variável b e um
// ponteiro pb que aponta para b. Utilizando os ponteiros ( e variável auxiliar), troque os valores das variáveis.

// #include<stdio.h>

// int main(void){
//   int a,b, *pa,*pb,aux;
//   pa=&a;
//   pb=&b;
  
// printf("Digite um valor para A: ");
// scanf("%d",pa);

// printf("Digite um valor para B: ");
// scanf("%d",pb);

// aux=*pa;
// *pa=*pb;
// *pb=aux;

// printf("Valor de A:%d ; Valor de B: %d",*pa,*pb);
//   return 0;
// }

// #include<stdio.h>

// int contaLetra(char *s);

// int main(){

// char palavra[50] = "frase de teste";

// printf("\ntem : %d letras \n",contaLetra(palavra));
// return 0;

// }

// int contaLetra(char * s){
//   int i=0;
//   while(*s!='\0'){
//     s++;
//     i++;
//   }
//   return i;
// }


// Criar um programa para receber 5 valores e apresentar o
// maior e o menor valor informado. Utilize uma função e
// ponteiros para identificar o maior e o menor valor do vetor.
// void maiorMenor(int *vet, int *maior, int *menor);

// #include<stdio.h>
// int main(void){
//   int vet[5],i=0,maior=0,menor=0;

//   for(i=0;i<5;i++){
//     printf("Digite um valor: ");
//     scanf("%d",&vet[i]);
//   }

//   maior=vet[0];
//   menor=vet[0];
//   maiorMenor(vet,&maior,&menor);

//   printf("O maior valor foi:%d. O menor valor foi:%d",maior,menor);
  
//   return 0;
// }

// void maiorMenor(int *vet, int *maior, int *menor){
//   int i=0;
//   for(i=0;i<5;i++){
//     if(vet[i]>*maior){
//       *maior=vet[i];
//     }else if(vet[i]<*menor){
//       *menor=vet[i];
//     }
//   }
// }


// Escreva uma função que recebe como parâmetro
// um inteiro positivo ano e devolve 1 se ano for
// bissexto, 0 em caso contrário. (Um ano é bissexto
// se (ano % 4 == 0 && (ano % 100 != 0 || ano % 400
// == 0)).)
// #include<stdio.h>

// int bissexto(int n);
// int main(void){
//   int n=0;
//   printf("Digite um ANO inteiro positivo: ");
//   scanf("%d",&n);

//   if(bissexto(n)==1){
//     printf("Esse ano é bissexto!");
//   }else{
//     printf("Não é bissexto!");
//   }
  
// }

// int bissexto(int n){
//   if(n%4==0&&(n%100!=0||n%400==0)){
//     return 1;
//   }else{
//     return 0;
//   }
// }


// Dada uma matriz Amxn, imprimir o número de linhas e o
// número de colunas nulas da matriz.

// Exemplo: m = 4 e n = 4

// tem 2 linhas nulas e 1 coluna nula.
// #include<stdio.h>
// int main(void){
//   int mat[4][4]={{1,0,2,3},{4,0,5,6},{0,0,0,0},{0,0,0,0}},i=0,j=0,somaL=0,somaC=0,qtdC=0,qtdL=0;
  
//   for(i=0;i<4;i++){
//     somaC=0;
//     for(j=0;j<4;j++){
//       somaC=somaC+mat[i][j];
//     }
//     if(somaC==0){
//       qtdL++;
//     }
//   }



//   for(j=0;j<4;j++){
//     somaL=0;
//     for(i=0;i<4;i++){
//       somaL=somaL+mat[i][j];
//     }
//     if(somaL==0){
//       qtdC++;
//     }
//   }

//   printf("A quantidade de linhas nulas é:%d; A quantidade de colunas nulas é:%d",qtdL,qtdC);
// }


// Escreva um programa que leia um inteiro não-negativo n e
// imprima a soma dos n primeiros números primos.

// #include<stdio.h>
// int primo(int n);

// int main(void){
// int n=0,i=0,soma=0;

//   printf("Digite um número inteiro: ");
//   scanf("%d",&n);

//   for(i=n-1;i>0;i--){
//     if(primo(i)==1){
//       soma=i+soma;
   
//     }
//   }
//   printf("A soma é:%d",soma);
//   return 0;
// }

// int primo(int n){
//   int i=0,qtd=0,soma=0;
//   for(i=1;i<n;i++){
//     if(n%i==0){
//      soma=soma+i; 
//     }
//   }

//   return soma;
// }

// Desenvolva um programa em C que receba duas
// string de 10 posições e apresente o valor recebido e seus tamanhos correspondentes;

// informe se o primeiro valor recebido é maior,
// menor ou igual ao segundo;

// apresente os valores lidos concatenados;

// #include<stdio.h>
// #include<string.h>
// int main(void){
//   char vet[10],str[10],vet2[20];
  
//   printf("Digite uma palavra: ");
//   gets(vet);

//   printf("Digite outra frase: ");
//   gets(str);

//   if(strcmp(vet,str)==0){
//     printf("São iguais!");
//   }else if(strcmp(vet,str)>0){
//     printf("O primeiro valor é maior que o segundo\n");
//   }else{
//     printf("O segundo é maior que o primeiro\n");
//   }
  
// strcat(vet2,vet);
// strcat(vet2,str);

//   printf("%s",vet2);
  
// }

// Escrever uma função que recebe como argumentos uma cadeia
// s e um caracter c, e que dá como resultado o número de vezes
// que c aparece em s.

// #include<stdio.h>
// #include<string.h>

// int vezes(char *str,char c);

// int main(void){
//   char str[60],c;
//   printf("Digite uma frase: ");
//   gets(str);

//   printf("Digite uma letra: ");
//   scanf(" %c",&c);

//   printf("A quantidade de vezes que a letra apareceu foram:%d",vezes(str,c));
// }

// int vezes(char *str,char c){
//   int i=0,tamanho=0,qtd=0;
  
//   tamanho=strlen(str);
  
//   for(i=0;i<tamanho;i++){
//     if(str[i]==c){
//       qtd++;
//     }
//   }
//   return qtd;
// }

// Faça uma função que dadas 2 palavras, retorna o valor 1 se
// elas são iguais e 0 se são diferentes.

// #include<stdio.h>
// #include<string.h>

// int comp(char *str1, char *str2);
// int main(void){
//   char str1[50],str2[50];

//   printf("Digite uma palavra: ");
//   gets(str1);

//   printf("Digite outra palavra: ");
//   gets(str2);

// if(comp(str1,str2)==1){
//   printf("São iguais!");
// }else{
//   printf("São diferentes!");
// }
//   return 0;
// }

// int comp(char *str1, char *str2){
// if(strcmp(str1,str2)==0){
//   return 1;
// }else{
//   return 0;
// }
// }

// Declare uma estrutura capaz de armazenar o número e 3
// notas para um dado aluno.

// #include<stdio.h>

// struct aluno{
// int n;
// float n1,n2,n3;
// };

// typedef struct aluno aluno;

// int main(void){
// aluno aluno;

// printf("Digite três notas: ");
// scanf("%f %f %f",&aluno.n1,&aluno.n2,&aluno.n3);

// printf("Digite um número inteiro: ");
// scanf("%d",&aluno.n);

// printf("As notas do aluno foram: %f ; %f ; %f . O número escolhido por ele foi: %d",aluno.n1,aluno.n2,aluno.n3,aluno.n);
//   return 0;
// }


// Declare uma estrutura capaz de armazenar um número e as notas de av1 av2 e av3 e média para um dado aluno. Faça um programa leia estes valores e salve-os na estrutura. Por fim, mostre os valores na tela
// #include<stdio.h>
// struct notas{
// float nota[3];
// };

// typedef struct notas notas;

// int main(void){
// notas notas;
// int i=0;
// float media=0;

// for(i=0;i<3;i++){
//   printf("Digite uma nota: ");
//   scanf("%f",&notas.nota[i]);
// }
//   media=(notas.nota[0]+notas.nota[1]+notas.nota[2])/3;

//   printf("A média final: %f",media);
// }

// #include <stdio.h>

// struct ponto { float x; float y; };

// typedef struct ponto ponto;

// ponto lerPonto();

// int main(){

// ponto p = lerPonto();

// printf("O ponto fornecido foi: (%.2f,%.2f)\n", p.x, p.y);

// return 0;

// }

// ponto lerPonto(){

// ponto tmp;

// printf("Digite as coordenadas do ponto(x y): ");

// scanf("%f %f", &tmp.x, &tmp.y);

// return tmp;

// }




// #include <stdio.h>

// struct dma{ int dia; int mes; int ano; };

// typedef struct dma dma;

// dma fimEvento(dma inicio, int dias);

// int main(){

// dma data;
// int dias=0;

// printf("Digite o dia, mês e ano: ");
// scanf("%d %d %d",&data.dia, &data.mes, &data.ano);

// printf("Digite a duração: ");
// scanf("%d", &dias);

// dma dataFim = fimEvento(data, dias);

// printf("o evento acaba em %d / %d / %d \n",dataFim.dia,
// dataFim.mes, dataFim.ano);

// return 0;

// }

// //Calcula a data de fim de um evento ao receber a data de início do evento e a duração do evento em dias.

// dma fimEvento(dma inicio, int dias){

// dma dataFim;

// dataFim.dia = 

// }


// Escreva uma função que receba um número inteiro que representa um intervalo de tempo medido em minutos e retorne uma estrutura equivalente de horas e minutos. ex: 131 minutos equivalem a 2 horas e 11 minutos. Use uma struct como a seguinte:
// #include<stdio.h>
// struct dma{
// int h;
// int m;
// };
// typedef struct dma dma;

// dma calcular(int min);

// int main(void){
//   int min;

//   printf("Digite a quantidade de minutos: ");
//   scanf("%d",&min);

//   dma total=calcular(min);

//   printf("%d:%d",total.h,total.m);
// }

// dma calcular(int min){
//   dma h;
//   h.h=min/60;
//   h.m=min%60;

//   return h;
// }



// Faça um programa em C para receber 3 informações de cadastro, apresentar a informação de cada cadastro em linha e, ao final apresentar a média das idades.
// #include<stdio.h>

// struct cadastro{
// char nome[50];
// int idade;
// char sexo;
// };

// typedef struct cadastro cadastro;

// int main(void){
//   cadastro cad[3];
//   int i=0;
//   for(i=0;i<3;i++){
//     printf("Digite o nome: ");
//     scanf("%s",cad[i].nome);

//     printf("Digite a idade: ");
//     scanf("%d",&cad[i].idade);

//     printf("Digite o sexo: ");
//     scanf(" %c",&cad[i].sexo);
//   }

//   for(i=0;i<3;i++){
//     printf("Nome:%s; Idade:%d; Sexo:%c\n",cad[i].nome,cad[i].idade,cad[i].sexo);
//   }
// }

// 1. Faça um programa em C para manipular registros de produtos, conforme a estrutura a seguir.
// #include <stdio.h> 

// struct produto
// { int codigo;
// char descricao[30];
// float preco;
// };

// typedef struct produto produto;

// // O programa deve:
// // a) Declarar um vetor que armazene os 50 diferentes produtos com o lay-out da estrutura;
// int main(void){
//   produto pr[3];
//   int i=0;
//   float perc[3],pA[3];
//   for(i=0;i<3;i++){
//     printf("Digite o código do produto: ");
//     scanf("%d",&pr[i].codigo);

//     printf("Digite a descrição do produto: ");
//     scanf("%s",pr[i].descricao);

//     printf("Digite o preço do produto: ");
//     scanf("%f",&pr[i].preco);

//     pA[i]=pr[i].preco;


//     printf("Digite o percentual de ajuste do preço: ");
//     scanf("%f",&perc[i]);

//     pr[i].preco=pr[i].preco*perc[i]+pr[i].preco;
    
//   }

//   for(i=0;i<3;i++){
//     printf("O código do produto foi: %d; A descrição do produto é:%s; O preço antes do produto foi:%.2f. O percentual foi de :%.2f; O preço depois do reajuste foi:%.2f\n",pr[i].codigo,pr[i].descricao,pA[i],perc[i],pr[i].preco);
//   }
  
// }

// 2. Foi feita uma pesquisa visando identificar as características físicas da população de uma região,
// coletando-se os seguintes dados dos seus habitantes:
// ü sexo ( M ou F );
// ü cor dos olhos ( azul, verde, castanho);
// ü cor dos cabelos ( louro, castanho, preto, ruivo );
// ü idade.
// Faça um programa que leia estes dados de um conjunto desconhecido de habitantes, calcule e imprima:
// ü homem mais novo;
// ü número de pessoas entrevistadas;
// ü idade média das mulheres;
// ü percentagem de habitantes de cabelos louros e olhos azuis.

// #include<stdio.h>
// #include<string.h>

// struct carac{
// char sexo;
// char olhos[50];
// char cabelo[50];
// int idade;
// };

// typedef struct carac carac;

// int main(void){
//   carac c[3];
//   int i=0,qtd=0,qtdM=0,soma=0;
//   float media=0,media2=0,qtdLA=0;
//   for(i=0;i<3;i++){
//     printf("Digite o sexo:(m ou f) ");
//     scanf(" %c",&c[i].sexo);

//     printf("Digite a cor dos olhos: ( azul, verde, castanho) ");
//     scanf("%s",c[i].olhos);

//     printf("Digite a cor do cabelo: ( louro, castanho, preto, ruivo ) ");
//     scanf("%s",c[i].cabelo);

//     printf("Digite a idade: ");
//     scanf("%d",&c[i].idade);
//      qtd++;
//     if(c[i].sexo=='f'){
//       qtdM++;
//     }
//   }
//  int  menor=c[0].idade;
//   for(i=0;i<3;i++){
//     if(c[i].idade<menor&&c[i].sexo=='m'){
//       menor=c[i].idade;
//     }if(c[i].sexo=='f'){
//       soma=soma+c[i].idade;
//     }if(strcmp(c[i].olhos,"azul")==0 && strcmp(c[i].cabelo,"louro")==0){
//       qtdLA++;
//     }
//   }
// media=soma/qtdM;
// media2=qtdLA/qtd;
//   printf("O home mais novo é: %d; O número de pessoas entrevistadas foi de:%d; A idade média das mulheres é:%.2f; A percentagem de louros e olhos azuis é:%.2f", menor,qtd, media,media2);
// }


// Fazer um programa que lê valores para uma matriz do tipo "float"de 5 linhas por 3 colunas e imprime a diferença entre a média dos elementos das colunas pares e a média dos elementos das linhas ímpares.

// #include<stdio.h>

// int main(void){
//   float mat[5][3],media=0,dif=0,par=0,impar=0,somaP=0,somaI=0,qtdP=0,qtdI=0,mediaI=0,mediaP=0;
//   int i=0,j=0;

//   for(i=0;i<5;i++){
//     for(j=0;j<3;j++){
//       printf("Digite um número: ");
//       scanf("%f",&mat[i][j]);
//     }
//     if(i%2!=0){
//       somaP=somaP+mat[i][j];
//       qtdP++;
//     }
//   }

//     for(j=0;j<3;j++){
//     for(i=0;i<5;i++){
//      if(j%2==0){
//        somaI=somaI+mat[i][j];
//        qtdI++;
//      }
//     }
//   }
// mediaI=somaI/qtdI;
// mediaP=somaP/qtdP;

// dif=mediaP-mediaI;

//   printf("A diferença é :%f",dif);
// }

// 5. Fazer uma rotina que aguarda um string do teclado e retorna o valor 1 se ostring digitado foi "SIM" e 0 se o string digitado foi "NAO". A rotina só deve retornar alguma coisa se o string digitado for "SIM" ou "NAO".
// #include<stdio.h>
// #include<string.h>

// int retorno(char *str);
// int main(void){
//   char str[5];
//   printf("Digite SIM ou NAO: " );
//   gets(str);

//   printf("%d",retorno(str));
//   return 0;
// }
//   int retorno(char *str){
//     if(strcmp(str,"SIM")==0){
//       return 1;
//     }else if(strcmp(str,"NAO")==0){
//       return 0;
//     }
//   }
// 6. Fazer uma rotina que recebe um string como parâmetro e imprime quantas palavras (separadas por espaços em branco) o mesmo contém.

// #include<stdio.h>
// #include<string.h>
//   int func(char *str);
//   int main(void){
//     char str[50];
//     printf("Escreva uma frase:");
//     gets(str);
// printf("Existem %d palavras separadas por espaço em branco.",func(str));
//   return 0;    
//   }

//   int func(char *str){
//     int i=0,tamanho=0,qtd=0;
//     tamanho=strlen(str);
    
//     for(i=0;i<tamanho;i++){
//       if(str[i]==' '){
//         qtd++;
//       }
//     }
//     return qtd;
//   }

// Grupo VIII - Passagem de parâmetros e estruturas
// 1. Fazer uma função que retorna a soma, a diferença e o produto entre dois números.
// #include<stdio.h>

// void func(int *soma, int *dif, int *prod, int n1, int n2);
// int main(void){
//   int soma=0,dif=0,prod=0,n1=0,n2=0;

//   printf("Digite um número: ");
//   scanf("%d",&n1);

//   printf("Digite outro número: ");
//   scanf("%d",&n2);

//   func(&soma,&dif,&prod,n1,n2);

//   printf("O resultado da soma é:%d; Diferença é:%d; Produto é:%d",soma,dif,prod);
  
//   return 0;
// }

// void func(int *soma, int *dif, int *prod, int n1, int n2){
//   *soma=n1+n2;
//   *dif=n1-n2;
//   *prod=n1*n2;
// }

// 2. Fazer uma função em "C" que retorna a razão entre dois números. A função deve retornar pelo comando return o valor 1 se a operação foi possível e o  valor 0 se a operação não foi possível (divisão por zero, por exemplo). O resultado da divisão deve retonar por um parâmetro por referência.
// #include<stdio.h>

// int func(float n1, float n2, float *razao);

// int main(void){
// float n1=0,n2=0;
// float razao=0;
//   printf("Digite um número: ");
//   scanf("%f",&n1);

//   printf("Digite outro número: ");
//   scanf("%f",&n2);

//   if(func(n1,n2,&razao)==1){
//     printf("A razão dos dois números é:%.2f",razao);
//   }else if(func(n1,n2,&razao)==0){
//     printf("Não é possível dividir.");
//   }
//   return 0;
// }
// int func(float n1, float n2, float *razao){

//   if(n2==0){
//     return 0;
//   }else{
//   *razao=n1/n2;
//     return 1;
//   }
// }

// 3. Fazer uma rotina em "C" que recebe um vetor de números inteiros como
// parâmetro onde todos os valores exceto o último são positivos e devolve:
// - a média dos valores do vetor;
// - o menor valor do vetor (sem considerar o último)
// - o maior valor do vetor
// #include<stdio.h>

// void funcao(int *vet, float *media, int *menor,int *maior);
// int main(void){
//   int vet[3],i=0;
//   float media;
//   for(i=0;i<3;i++){
//     printf("Digite um número, sendo o último negativo: ");
//     scanf("%d",&vet[i]);
//   }
//   int menor=vet[0];
//   int maior=vet[0];

//   funcao(vet,&media,&menor,&maior);
//   printf("Média:%f ; Menor(sem contar o último): %d; Maior:%d",media,menor,maior);
// }

// void funcao(int *vet, float *media, int *menor,int *maior){ 
//   int i=0;
//   float soma=0;
//   for(i=0;i<3;i++){
//   soma=soma+vet[i];
//     if(vet[i]>*maior){
//       *maior=vet[i];
//     }if(vet[i]<*menor&&vet[i]!=vet[2]){
//       *menor=vet[i];
//     }
//   }
//   *media=soma/3;
// }
// 4. Fazer uma função para ler e retornar o valor das 3 notas de um aluno.

// 5. Construir um programa em "C" que implementa uma agenda eletrônica. O
// programa deve ter um menu com as seguintes opções:
// • Entrar um novo nome na agenda.
// • Imprimir na tela os dados de uma das pessoas cadastradas (conforme
// solicitação).
// • Imprimir a lista de nomes cadastrados que comecem pela letra indicada.
// • Fim
// Cada entrada da agenda deve ter os seguintes campos:
// char nome[30];
// char endereco[100];
// char fone[10];
// long int CEP;
// Obs: a agenda deve ter capacidade para 100 entradas.
#include<stdio.h>

struct agenda{
char nome[30];
char endereco[100];
char fone[10];
long int CEP;
};

typedef struct agenda agenda;

int main(void){
agenda ag[100];
  int i=0;
  char letra;
  for(i=0;i<3;i++){
  printf("Digite o nome: ");
  scanf("%s",ag[i].nome);

  printf("Digite o endereço: ");
    scanf("%s",ag[i].endereco);

  printf("Digite o tel: ");
    scanf("%s",ag[i].fone);

  printf("Digite o CEP: ");
    scanf("%li",&ag[i].CEP);
  }

    for(i=0;i<3;i++){
printf("Nome: %s; Endereço:%s; Telefone:%s; CEP:%li\n",ag[i].nome,ag[i].endereco,ag[i].fone,ag[i].CEP);
  }
printf("Digite uma letra: ");
  scanf(" %c",&letra);
      for(i=0;i<3;i++){
  if(ag[i].nome[0]==letra){
    printf("%s\n",ag[i].nome);
  }
  }
  return 0;
}

