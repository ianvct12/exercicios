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


