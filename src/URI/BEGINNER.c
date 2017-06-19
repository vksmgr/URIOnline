//
// Created by EARN on 17-06-2017.
//

#include <stdio.h>
#include <math.h>
#include "BEGINNER.h"

struct product {
    int code;
    int units;
    float price;
};

void simple(){
    struct product pro1 ,pro2;
    float total_price;
    scanf("%d %d %f",&pro1.code, &pro1.units, &pro1.price);
    scanf("%d %d %f",&pro2.code, &pro2.units, &pro2.price);

    total_price = (pro1.units * pro1.price) + (pro2.units * pro2.price);
    printf("VALOR A PAGAR: R$ %.2f\n",total_price);
}


/*==================================================*/
struct Point{
    float x;
    float y;
};

void two_point(){
    struct Point p1, p2;
    float distance;
    scanf("%f %f",&p1.x, &p1.y);
    scanf("%f %f",&p2.x, &p2.y);
    distance = sqrt(
            ((p2.x - p1.x) * (p2.x - p1.x)) + ((p2.y - p1.y) * (p2.y - p1.y))
    );
    printf("%.4f\n", distance);
}


/*=================================================*/

//Sphere

#define PI 3.14159
#define cube(x) x*x*x
void volume(){
    double vol;
    int radius;
    double temp = 4.0/3;

    scanf("%d",&radius);
    vol = temp * PI * cube(radius);
    printf("VOLUME = %.3f\n",vol);
}


/*=================================================*/

//Greatest
int mx(int a, int b) {
    return (a+b+abs(a-b))/2;
}
void Greatest() {
    int x,y,z,answer;
    scanf("%d %d %d", &x, &y, &z); // or any other way to read 3 numbers
    answer=mx(x,y);
    answer=mx(answer, z);
    printf("%d eh o maior\n",answer);
}


/*=================================================*/

//Distance
void distance(){
    int dis;
    scanf("%d",&dis);
    printf("%d minutos\n", 2 * dis);
}


/*===================================================*/

//Fuel Spent
void fuel(){
    int time, speed;
    float distance;
    scanf("%d %d", &time, &speed);
    distance = time * speed;
    printf("%.3f\n",distance /12);
}

/*=============================#Banknotes#=========================*/

void Banknotes(){
    int N;
    int copy ;
    int no_notes;
    scanf("%d",&N);
    copy = N;
    printf("%d\n",N);

    no_notes = N / 100;
    printf("%d nota(s) de R$ 100,00\n",no_notes);
    N = N % 100;

    no_notes = N / 50;
    printf("%d nota(s) de R$ 50,00\n",no_notes);
    N = N % 50;

    no_notes = N / 20;
    printf("%d nota(s) de R$ 20,00\n",no_notes);
    N = N % 20;

    no_notes = N / 10;
    printf("%d nota(s) de R$ 10,00\n",no_notes);
    N = N % 10;

    no_notes = N / 5;
    printf("%d nota(s) de R$ 5,00\n",no_notes);
    N = N % 5;

    no_notes = N / 2;
    printf("%d nota(s) de R$ 2,00\n",no_notes);
    N = N % 2;

    no_notes = N / 1;
    printf("%d nota(s) de R$ 1,00\n",no_notes);
    N = N % 1;

}


/*=======================#Time Conversion#=========================*/

void time_conversion(){
    int time;
    int hr, min, sec;
    scanf("%d",&time);
    hr = time / 3600;
    time = time - (hr * 3600);
    min = time / 60;
    sec = time - ( min * 60);
    printf("%d:%d:%d", hr, min, sec);
}


/*=======================#Age in Days#=========================*/

void Age_in_Days(){
    int days;
    int years, month, day;
    scanf("%d",&days);
    years = days / 365;
    days = days - (years * 365);
    month = days / 30;
    day = days - ( month * 30);
    printf("%d ano(s)\n", years);
    printf("%d mes(es)\n", month);
    printf("%d dia(s)\n", day);
}


/*====================#Banknotes and Coins#=======================*/

void Banknotes_and_coin(){
    int N=0;
    float input;
    int copy ;
    int no_notes;

    scanf("%f",&input);
    N = (int) input;
    printf( "INPUT %f\n",input);
    input = input - N ;
    printf("NOTAS:\n");

    no_notes = N / 100;
    printf("%d nota(s) de R$ 100,00\n",no_notes);
    N = N % 100;

    no_notes = N / 50;
    printf("%d nota(s) de R$ 50,00\n",no_notes);
    N = N % 50;

    no_notes = N / 20;
    printf("%d nota(s) de R$ 20,00\n",no_notes);
    N = N % 20;

    no_notes = N / 10;
    printf("%d nota(s) de R$ 10,00\n",no_notes);
    N = N % 10;

    no_notes = N / 5;
    printf("%d nota(s) de R$ 5,00\n",no_notes);
    N = N % 5;

    no_notes = N / 2;
    printf("%d nota(s) de R$ 2,00\n",no_notes);
    N = N % 2;

    printf("MOEDAS:\n");

    no_notes = N / 1;
    printf("%d nota(s) de R$ 1,00\n",no_notes);
    N = N % 1;

    no_notes = input / 0.50;
    printf("%d nota(s) de R$ 0.50\n",no_notes);
    input = input - (no_notes * 0.50);

    no_notes = input / 0.25;
    printf("%d nota(s) de R$ 0.25\n",no_notes);
    input = input - (no_notes * 0.25);

    no_notes = input / 0.10;
    printf("%d nota(s) de R$ 0.10\n",no_notes);
    input = input - (no_notes * 0.10);

    no_notes = input / 0.05;
    printf("%d nota(s) de R$ 0.05\n",no_notes);
    input = input - (no_notes * 0.05);

    printf("Input: %f \n",input);
    input = ceil(input*100);
    no_notes = input / 1;
    printf("Input: %f \n",input);
    printf("%d nota(s) de R$ 0.01\n",no_notes);

}


/*============================#Selection Test 1#===================*/

void selection_test(){

    int A, B, C, D;
    scanf("%d %d %d %d",&A, &B, &C, &D);
    if ( B > C && D > A && (C+D) > (A+B)){
        if( C > 0 && D > 0 && (A %2 == 0)){
            printf("Valores aceitos\n");
        }
    } else{
        printf("Valores nao aceitos\n");
    }
}


void bhk_formula()
{
    double a,b,c,r1,r2,d;
    scanf("%lf %lf %lf",&a,&b,&c);
    d=(pow(b,2)-(4*a*c));
    r1=(-b+sqrt(d))/(2*a);
    r2=(-b-sqrt(d))/(2*a);
    if(a!=0 && d>0)
    {
        printf("R1 = %.5lf\nR2 = %.5lf\n",r1,r2);
    }
    else{
        printf("Impossivel calcular\n");
    }

}