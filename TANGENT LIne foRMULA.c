//finding tangent line of a circle
#include<stdio.h>
float tangent_line(float x1, float y1, float x2, float y2){
    float slope = (x2-x1)/(y2-y1);
    return slope;
}
int main(){
    float x1;
    float x2;
    float y1;
    float y2;
    printf("ENTER X1 : ");
    scanf("%f",&x1);
    printf("ENTER x2 : ");
    scanf("%f",&x2);
    printf("ENTER y1 : ");
    scanf("%f",&y1);
    printf("ENTER y2 : ");
    scanf("%f",&y2);
    float slope = tangent_line(x1,x2,y1,y2);
    printf("TANGENT LINE OF CIRCLE IS;/n y = %.1fx + c\n",slope);
    

}
