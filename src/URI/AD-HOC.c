//
// Created by EARN on 19-06-2017.
//

#include <stdio.h>
#include "AD-HOC.h"

//To Carry or not to Carry

void carry_or_not(){
    int A, B;
    scanf("%d %d", &A, &B);
    printf("%d\n", A^B );

}

//============#Flavious Josephus Legend#==========================
 void josephus(){
    int NC;
    scanf("%d",&NC);

    while (NC--){
        logic(NC);
    }
}

void logic(int NC){
   int n,k;
    static int count ;
    scanf("%d %d",&n, &k);

    printf("Case %d: %d\n",++count,josephu(n,k));
}

int josephu(int n, int k){
    if(n == 1) return 1;
    else
        return (josephu(n-1, k) + k-1) % n+1;
}


/*===================================================*/
