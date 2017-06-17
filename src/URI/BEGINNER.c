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


