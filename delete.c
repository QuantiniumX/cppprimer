#include<stdio.h>
#include<math.h>
int display_char(int x);
int main(){
	int n=1,ch=65,str;
	while(n<=5)
    {
		str=display_char(ch);
		ch=str;
		n++;
	}
	return 0;
}
int display_char(int x){
	int y;
	switch (x)
    {
		case 65:
			printf("D\t\t");
			break;
			case 64:
				printf("G\t\t");
				break;
				case 63:
					printf("J\t\t");
					break;
					case 62:
					printf("M\t\t");
					break;
					case 61:
						printf("P\t\t");
						break;
						default:
							printf("\t");
							
	}
	y=x-1;
	return y;
	
}