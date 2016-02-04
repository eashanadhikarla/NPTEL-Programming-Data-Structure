int main()
{

 int a[3][4]={1,2,3,4,4,3,2,1,1,3,4,1};

printf("%d",*(*(a+1)+2));
return 0;
}