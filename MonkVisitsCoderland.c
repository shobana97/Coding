
// Sample code to perform I/O:
#include <stdio.h>
long int min(long int temp, long cost){
    if(temp < cost)
        return temp;
    else return cost;
}

int main(){
	int num, checkpoints;
	//long long int cost[checkpoints], litres[checkpoints], sum;
	scanf("%d", &num);  
    while(num--){
        scanf("%d", &checkpoints);
        long long int cost[checkpoints], litres[checkpoints], sum = 0; 
        long int temp;
	    for(int i = 0; i < checkpoints; i++){
	        scanf("%lld", &cost[i]);
	    }
	    temp = cost[0];
	    for(int i = 1; i < checkpoints; i++){
	        temp = min(temp, cost[i]);
	        cost[i] = temp;
	    }
	    //cost[0] = temp;
	    for(int i = 0; i < checkpoints; i++){
	        scanf("%lld", &litres[i]);
	        //sum += cost[i] * litres[i];
	    }
	    for(int i = 0; i < checkpoints; i++){
	        sum += (cost[i] * litres[i]);
	        //printf("%lld ", cost[i]);
	        //printf("%lld\n", litres[i]);
	        //printf("%lld\n", sum);  
	    }
	    printf("%lld\n", sum); 
    }
	return 0;
}



