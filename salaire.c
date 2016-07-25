#import <stdio.h>


int main(){

	printf("Programme pour calculer mon salaire par moi en enlevant les impots\n Zhongwei.copyright\n Saisir votre salaire annuel en k euro: ");

	float a, result;
	scanf("%f",&a);
        printf("%f\n",a);

	a=a*1000;
	result=0.0;
	printf("%f\n",a);
	if(a>9700){
		result=(a-9700)*0.14;

	}
	
	if(a>26791){
                result=(a-26791)*0.16+result;

        }
	if(a>71826){
                result=(a-71826)*0.11+result;

        }
	if(a>152108){
                result=(a-152108)*0.04+result;
        }
	result=a-result;

	printf("Votre salaire par mois est de: %f\n\n", result/12);
	scanf("%f",a);


}
