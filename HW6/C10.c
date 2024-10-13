#include <stdio.h>

int main(int argc, char *argv[]){
    int ch = 0;
    signed long long int num;
    int div = 2;
    
    
    while ((ch = scanf("%lli", &num)) == 1)
    {
        if (num > 0){
            printf("Prime factor of %lli is:\n", num);
            if (num == 1){
                printf("%lli", num);
            }
            while (num > 1){
                int tmp = 0;
                long int limit = 1000000;
                int prime[limit+1];
                int arrprime[tmp];
                for(int i = 1; i <= limit; i++){
                    prime[i] = i;
                }
                for(int i = 2; i*i <= limit; i++){
                    if (prime[i] != -1){
                        for(int j = 2*i; j<= limit; j += i){
                            prime[j] = -1;
                        }
                    }
                }
                for (int i = 0; i < limit; i++){
                    if (prime[i] > 0){
                        arrprime[tmp] = prime[i];
                        tmp++;
                    }
                }
                
                int power = 0;
                for (int i = 1; i < tmp; i++){
                    while ((num % div) == 0){
                        num /= div;
                        power++;
                        if (num == 1){
                            break;
                        }
                        else{
                            continue;
                        }
                    }
                    if (power > 0){
                        printf("%d", div);
                        if (power > 1){
                            printf("^%d", power);
                        }
                        if (num > 1){
                            printf(" x ");
                        }
                    }
                    div++;
                }
            }
            printf("\n");
            div = 2;
        }
        
        else if(num == 0){
            return 0;
        }
    }
}
