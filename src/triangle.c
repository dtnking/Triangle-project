#include "triangle.h"

/*void identifyLengths(Triangle triangle,int a, int b, int c){
	int max=a;
	triangle->longest=a;
	triangle->short1=b;
	triangle->short2=c;
	
	if(b>max){
		max=b;
		triangle->longest=b;
		triangle->short1=a;
		triangle->short2=c;
	}
	else if(c>max){
		max=c;
		triangle->longest=c;
		triangle->short1=a;
		triangle->short2=b;
	}
}*/

char *sortSidesOfTriangle(int a,int b,int c,int *s1,int *s2,int *l){
	if(a>b&&a>c){
	*l=a;
	*s1=b;
	*s2=c;
	}
	
	else if (b>a&&b>c){
	
		*l=b;
		*s1=a;
		*s2=c;
	}
	else if(c>a&&c>b){
	
		*l=c;
		*s1=a;
		*s2=b;
	}
	else
		return 0;
}

char *validityOfTriangle(int a,int b,int c){
	int s1,s2,l;
	sortSidesOfTriangle(a,b,c,&s1,&s2,&l);
	if(s1+s2>l)
		return "valid";
	else
		return "invalid";
}

char *TypeOfTriangle(int a,int b,int c){
	int s1,s2,l;
	sortSidesOfTriangle(a,b,c,&s1,&s2,&l);
	validityOfTriangle(a,b,c);
	if(s1*s1+s2*s2<l*l)
		return "accute triangle";
	else if(s1*s1+s2*s2>l*l)
		return "obtuse triangle";
	else if(s1*s1+s2*s2==l*l)
		return "right angle";
	else
		return "invalid";
}


