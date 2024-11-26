// incorrect code
#include <stdio.h>

int main(void){
    int n1,n2,i,d=3;
    printf("Input any 2 numbers:\n");
    scanf("%d%d",&n1,&n2);

    for(int i=(n1+1); i<n2; i++){
        if (i%2!=0)
            {if (i%d!=0)
                {printf("%d ",i);
            }else
                d+1;
        }

    }

    printf("\n");

    return 0;
}
