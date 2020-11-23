#include <stdio.h>
#include <sys/types.h>
#include <math.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <time.h>
	
double f(int x)
{		
  return 4*x*x-6*x+5;
		
}
	
int main(){
		
	
int p=3,pid,r,i;	 
	
float a,b,sum,mid,h;
float pom_interval, pom_a, pom_b;
		
	for(i = 0; i<p; i++){fork();} 		
	srand(time(NULL) ^ getpid());
	r = rand()%8+2;
	i=0;
	a = rand()%5+1;
	b = rand()%10+10;
	pom_a = a;
	sum = 0;
	
	if(fork() == 0){ }
	
	else{
			
		pom_interval = (b-a)/r;
		pom_b = pom_a + pom_interval;
		for(i = 0; i<r; i++)
			{
	
			mid = (pom_b + pom_a)/2;
			h = f(mid);
			sum = sum + h*pom_interval;
	
			}
					
			printf("|Wynik calki|: %f, |Nr.pid procesu|: %d \n", sum, getpid() );
	
		}
		
		
		return 0;
	}
