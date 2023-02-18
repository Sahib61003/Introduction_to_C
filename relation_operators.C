/* Use of Relational Operators
    < is used for checking whether the left operand is less than the right operand or not.
    > is used for checking whether the left operand is greater than the right operand or not.
    == is used for checking whether the left operand is equal to the right operand or not.
    != is used for checking whether the left operand is not equal to the right operand or not.
    <= is used for checking whether the left operand is less than or equal to the right operand or not.
    >= is used for checking whether the left operand is greater than or equal to the right operand or not.
*/

int main(){
    int x=10, y=20;

    printf("\n %d<%d = %d", x,y,x<y);
    printf("\n %d==%d = %d", x,y,x==y);
    printf("\n %d!=%d = %d", x,y,x!=y);
    printf("\n %d>%d = %d", x,y,x>y);
    printf("\n %d>=%d = %d", x,y,x>=y);
    printf("\n %d<=%d = %d", x,y,x<=y);

    return 0;
}
