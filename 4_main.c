//202510306202
//202510306202@cdu.edu.en
//龚慧洁
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a + b > c && b + c > a && a + c > b)
    {
        printf("可以组成三角形\n");
    }
    else 
    {
        printf("不能组成三角形\n");
    }
    return 0;
}
