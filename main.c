#include <stdio.h>

#include <math.h>

#include <stdlib.h>

#define PI 3.14159265





// here are the declaration of the functions that i will write the body of it at the end of the program .

double sine(double  x);

double cosine(double x);

double tangent(double x);

double sineh(double x);

double cosineh(double x);

double tangenth(double x);

double logten(double x);

double squareroot(double x);

double exponent(double x);

double absolutevalue(double x);

double power(double x,double y);

double addition(double x, double y);

double subtraction(double x, double y);

double multplication(double x,double y);

double division(double x, double y);

double remainder(double x, double y);

double factorial(double x);

void addition_res(double **array, int **outsize);

void multiplication_res( double **output,  int **outputsize);

void sine_res(double **output, int **outsize);

void cosine_res( double **output, int **outsize);

void tangent_res(double **output, int **outsize);

void sinh_res(double **output, int **outsize);

void cosineh_result(double **output, int **outsize);

void tangent_result(double **output, int **outsize);

void log_ten_res(double **output, int **outsize);

void squre_root_res(double **output, int **outsize);

void exponential_res(double **output, int **outsize);

void absolute_value_res(double **output, int **outsize);

void factorial_res(double **output, int **outsize);

void sub_res(double **output, int **outsize);

void WriteToFile(FILE *fp, double res);

void read_from_file();



int main()

{
    
    double *array=NULL;
    
    int *size;
    
    int n,l,u;
    
    double x,y,result ;
    
    FILE *fp;
    fp=fopen("output.txt", "a");
    
    
    printf("Do you want to see the result of the last operations ?[1/0]\n");
    
    scanf("%d", &u);
    
    if (u==1)
        
    {
        
        read_from_file();
        fclose(fp);
        
    }
    
    else
        
    {
        fclose(fp);
        
        // here the user have to choose from one of the following options which is if he/she wants to do the operations for at most 2 or infinite number of times .
        
        printf("do you want to use the operation for more than two numbers? \n");
        
        printf("1.Yes\n2.No\n");
        
        scanf("%d", &l);
        
        if (l == 2)
            
        {
            
            printf("Choose the operation that you want to do :\n");
            
            printf("1.sin\n 2.cos\n 3.tan\n 4.sinh\n 5.cosh\n 6.tanh\n 7.1og10\n 8.square root\n 9.exponent\n 10.absolute value\n 11.factorial\n 12.power\n 13.addition\n 14.multiplication\n 15.subtraction \n 16.division\n 17.remainder of two numbers\n");
            
            scanf ("%d",&n);
            
            if (n<=11 && n>0)
                
            {
                
                printf("\n Enter x? ");
                
                scanf("%lf",&x);
                
                switch (n)
                
                {
                        
                    case 1:
                        
                        result = sine (x);
                        
                        WriteToFile(fp,result);
                        
                        break;
                        
                    case 2:
                        
                        result = cosine(x);
                        
                        WriteToFile(fp, result);
                        
                        break;
                        
                    case 3:
                        
                        result = tangent(x);
                        
                        WriteToFile(fp, result);
                        
                        break;
                        
                    case 4:
                        
                        result = sineh(x);
                        
                        WriteToFile(fp, result);
                        
                        break;
                        
                    case 5:
                        
                        result = cosineh(x);
                        
                        WriteToFile(fp, result);
                        
                        break;
                        
                    case 6:
                        
                        result = tangenth(x);
                        
                        WriteToFile(fp, result);
                        
                        break;
                        
                    case 7:
                        
                        result = logten(x);
                        
                        WriteToFile(fp, result);
                        
                        break;
                        
                    case 8:
                        
                        result = squareroot(x);
                        
                        WriteToFile(fp, result);
                        
                        break;
                        
                    case 9:
                        
                        result = exponent(x);
                        
                        WriteToFile(fp, result);
                        
                        break;
                        
                    case 10:
                        
                        result =absolutevalue(x);
                        
                        break;
                        
                    case 11:
                        
                        result = factorial(x);
                        
                        WriteToFile(fp, result);
                        
                        break;
                        
                }
                
            }
            
            if (n==12)
                
            {
                
                printf("enter x and y :\n");
                
                scanf("%lf%lf",&x,&y);
                
                result = power(x,y);
                
                WriteToFile(fp, result);
                
            }
            
            
            
            if (n == 13)
                
            {
                
                printf("enter x and y :\n");
                
                scanf("%lf%lf", &x, &y);
                
                result = x+y;
                
                WriteToFile(fp, result);
                
            }
            
            if (n == 14)
                
            {
                
                printf("enter x and y :\n");
                
                scanf("%lf%lf", &x,&y);
                
                result = x * y;
                
                WriteToFile(fp, result);
                
            }
            
            if (n == 15)
                
            {
                
                printf("enter x and y :\n");
                
                scanf("%lf%lf", &x, &y);
                
                result = x - y;
                
                WriteToFile(fp, result);
                
            }
            
            if (n == 16)
                
            {
                
                printf("enter x and y :\n");
                
                scanf("%lf%lf", &x, &y);
                
                result = x/y;
                
                WriteToFile(fp, result);
                
            }
            
            if (n == 17)
                
            {
                
                printf("enter x and y :\n");
                
                scanf("%lf%lf", &x, &y);
                
                result = (fmod(x, y));
                
                WriteToFile(fp, result);
                
            }
            
            if (n>0 && n<18)
                
                printf("%.2lf\n",result);
            
            else
                
                printf("Wrong input.\n");
            
            return 0;
            
        }
        
        //    used this for doing more than 2 multiplication or addition so it can allocate enough memory for infinity or we can say as long as the memory exist and it can handle biggest numbers doesn't matter if it's like 1 mil or 3 .
        
        if (l==1)
            
        {
            
            printf("what kind of opertation you want to do?\n");
            
            printf("1.Addition\n2.multiplication\n3.sin\n4.cosin\n5.tangent\n6.sinh\n7.cosinh\n8.tangenth\n9.logarithm over 10\n10.squre root\n11.exponential\n12.absolute value\n13.factorial\n14.subtraction\n");
            
            scanf("%d", &n);
            
            // i have used the switch here for executing the function.
            
            switch (n)
            
            {
                    
                case 1:
                    
                    addition_res(&array, &size);
                    
                    break;
                    
                case 2:
                    
                    multiplication_res(&array, &size);
                    
                    break;
                    
                case 3:
                    
                    sine_res(&array, &size);
                    
                    break;
                    
                case 4:
                    
                    cosine_res(&array, &size);
                    
                    break;
                    
                case 5:
                    
                    tangent_res(&array, &size);
                    
                    break;
                    
                case 6:
                    
                    sinh_res(&array, &size);
                    
                    break;
                    
                case 7:
                    
                    cosineh_result(&array, &size);
                    
                    break;
                    
                case 8:
                    
                    tangent_res(&array, &size);
                    
                    break;
                    
                case 9:
                    
                    log_ten_res(&array, &size);
                    
                    break;
                    
                case 10:
                    
                    squre_root_res(&array, &size);
                    
                    break;
                    
                case 11:
                    
                    exponential_res(&array, &size);
                    
                    break;
                    
                case 12:
                    
                    absolute_value_res(&array, &size);
                    
                    break;
                    
                case 13:
                    
                    factorial_res(&array, &size);
                    
                    break;
                    
                case 14:
                    
                    sub_res(&array, &size);
                    
                    break;
                    
            }
            
        }
        
        free(array);
        
    }
    
}

double sine(double x)

{
    
    return (sin (x*PI/180));
    
}

double cosine(double x)

{
    
    return (cos (x*PI/180));
    
}

double tangent(double x)

{
    
    return (tan(x*PI/180));
    
}

double sineh(double x)

{
    
    return (sinh(x));
    
}

double cosineh(double x)

{
    
    return (sinh(x));
    
}

double tangenth(double x)

{
    
    return (sinh(x));
    
}

double logten(double x)

{
    
    return (log10(x));
    
}

double squareroot(double x)

{
    
    return (sqrt(x));
    
}

double exponent(double x)

{
    
    return(exp(x));
    
}

double power(double x, double y)

{
    
    return (pow(x,y));
    
}

double absolutevalue(double x)

{
    
    return fabs(x);
    
}

double remainder(double x, double y)

{
    
    return (fmod(x, y));
    
}

double factorial (double x)

{
    
    if(x<=1)
        
        return 1;
    
    return x * (factorial(x-1));
    
}

// In each of these functions i have made a dynamic memory and stored both the input values of the user and the output values which are calculated via the program and afterward

// printing the both of the arrays to the screen

// the functions below can do infinite operation calculation and can be terminated by a character or "=" .

void addition_res(double **array, int **outsize)

{
    
    FILE *fp;
    
    fp=fopen("output.txt", "a");
    
    double *p;
    
    double *temp;
    
    double newnum, sum=0;
    
    int i,m=0;
    
    p=NULL;
    
    printf("Enter the numbers:\n");
    
    printf("Enter = to end the addition\n");
    
    while (scanf("%lf", &newnum) == 1)
        
    {
        
        temp=(double *)malloc((m+1) * sizeof(double));
        
        for(i=0; i<m; ++i)
            
        {
            
            temp[i]=p[i];
            
        }
        
        temp[i]=newnum;
        
        ++m;
        
        free(p);
        
        p=temp;
        
    }
    
    printf("I will show the sum of the all the elements below :\n");
    
    for (i=0; i<m; i++)
        
    {
        
        printf("%.2f +  ", p[i]);
        
    }
    
    printf("=");
    
    printf("\n");
    
    for (i=0; i<m; ++i)
        
    {
        
        sum+=p[i];
        
    }
    
    printf("the sum = %.2f\n", sum);
    
    fprintf(fp,"the sum = %.2f\n", sum);
    
    *array=p;
    
    *outsize=&m;
    
    fclose(fp);
    
}



void multiplication_res( double **output,  int **outputsize)

{
    
    FILE *fp;
    
    fp=fopen("output.txt", "a");
    
    double *p;
    
    double *temp;
    
    double newnum, mul=1;
    
    int i,m=0;
    
    p=NULL;
    
    printf("Enter the numbers:\n");
    
    printf("Enter = to end the Multiplication\n");
    
    while (scanf("%lf", &newnum) == 1)
        
    {
        
        temp=(double *)malloc((m+1) * sizeof(double));
        
        for(i=0; i<m; ++i)
            
        {
            
            temp[i]=p[i];
            
        }
        
        temp[i]=newnum;
        
        ++m;
        
        free(p);
        
        p=temp;
        
    }
    
    printf("I will show the multiplication of the all the elements below :\n");
    
    for (i=0; i<m; i++)
        
    {
        
        printf("%.2f * ", p[i]);
        
    }
    
    printf("=");
    
    printf("\n");
    
    for(i=0; i<m; ++i)
        
        mul*=p[i];
    
    printf("The multiplciation = %.2f\n", mul);
    
    fprintf(fp,"The multiplciation = %.2f\n", mul);
    
    *output=p;
    
    *outputsize=&m;
    
    fclose(fp);
    
}

void sine_res(double **output, int **outsize)

{
    
    FILE *fp;
    
    fp=fopen("output.txt", "a");
    
    double *p;
    
    double *temp;
    
    double newnum;
    
    int i,m=0;
    
    p=NULL;
    
    printf("Enter the numbers:\n");
    
    printf("Enter = to end the sin function\n");
    
    while (scanf("%lf", &newnum) == 1)
        
    {
        
        temp=(double *)malloc((m+1) * sizeof(double));
        
        for(i=0; i<m; ++i)
            
        {
            
            temp[i]=p[i];
            
        }
        
        temp[i]=newnum;
        
        ++m;
        
        free(p);
        
        p=temp;
        
    }
    
    for(i=0; i<m; ++i)
        
    {
        
        printf("sin(%.2f) = %.3f\n", p[i], sine(p[i]));
        
        fprintf(fp,"sin(%.2f) = %.3f\n", p[i], sine(p[i]));
        
    }
    
    
    
    *output=p;
    
    *outsize=&m;
    
    fclose(fp);
    
}



void cosine_res( double **output, int **outsize)

{
    
    FILE *fp;
    
    fp=fopen("output.txt","a");
    
    double *p;
    
    double *temp;
    
    double newnum;
    
    int i,m=0;
    
    p=NULL;
    
    printf("Enter the numbers:\n");
    
    printf("Enter = to end the cosine function\n");
    
    while (scanf("%lf", &newnum) == 1)
        
    {
        
        temp=(double *)malloc((m+1) * sizeof(double));
        
        for(i=0; i<m; ++i)
            
        {
            
            temp[i]=p[i];
            
        }
        
        temp[i]=newnum;
        
        ++m;
        
        free(p);
        
        p=temp;
        
    }
    
    for(i=0; i<m; ++i)
        
    {
        
        printf("cosine(%.2f) = %.3f\n", p[i], cosine(p[i]));
        
        fprintf(fp,"cosine(%.2f) = %.3f\n", p[i], cosine(p[i]));
        
        
        
    }
    
    *output=p;
    
    *outsize=&m;
    
}



void tangent_res(double **output, int **outsize)

{
    
    FILE *fp;
    
    fp=fopen("output.txt", "a");
    
    double *p;
    
    double *temp;
    
    double newnum;
    
    int i,m=0;
    
    p=NULL;
    
    printf("Enter the numbers:\n");
    
    printf("Enter = to end the tangent function\n");
    
    while (scanf("%lf", &newnum) == 1)
        
    {
        
        temp=(double *)malloc((m+1) * sizeof(double));
        
        for(i=0; i<m; ++i)
            
        {
            
            temp[i]=p[i];
            
        }
        
        temp[i]=newnum;
        
        ++m;
        
        free(p);
        
        p=temp;
        
    }
    
    for(i=0; i<m; ++i)
        
    {
        
        printf("tangent(%.2f) = %.3f\n", p[i], tangent(p[i]));
        
        fprintf(fp,"tangent(%.2f) = %.3f\n", p[i], tangent(p[i]));
        
    }
    
    fclose(fp);
    
}



void sinh_res(double **output, int **outsize)

{
    
    FILE *fp;
    
    fp=fopen("output.txt", "a");
    
    double *p;
    
    double *temp;
    
    double newnum;
    
    int i,m=0;
    
    p=NULL;
    
    printf("Enter the numbers:\n");
    
    printf("Enter = to end the sinh function\n");
    
    while (scanf("%lf", &newnum) == 1)
        
    {
        
        temp=(double *)malloc((m+1) * sizeof(double));
        
        for(i=0; i<m; ++i)
            
        {
            
            temp[i]=p[i];
            
        }
        
        temp[i]=newnum;
        
        ++m;
        
        free(p);
        
        p=temp;
        
    }
    
    for(i=0; i<m; ++i)
        
    {
        
        printf("sinh(%.2f) = %.3f\n", p[i], sinh(p[i]));
        
        fprintf(fp,"sinh(%.2f) = %.3f\n", p[i], sinh(p[i]));
        
    }
    
    *output=p;
    
    *outsize=&m;
    
    fclose(fp);
    
}



void cosineh_result(double **output, int **outsize)

{
    
    FILE *fp;
    
    fp=fopen("output.txt", "a");
    
    double *p;
    
    double *temp;
    
    double newnum;
    
    int i,m=0;
    
    p=NULL;
    
    printf("Enter the numbers:\n");
    
    printf("Enter = to end the cosinh\n");
    
    while (scanf("%lf", &newnum) == 1)
        
    {
        
        temp=(double *)malloc((m+1) * sizeof(double));
        
        for(i=0; i<m; ++i)
            
        {
            
            temp[i]=p[i];
            
        }
        
        temp[i]=newnum;
        
        ++m;
        
        free(p);
        
        p=temp;
        
    }
    
    for(i=0; i<m; ++i)
        
    {
        
        printf("cosinh(%.2f) = %.3f\n", p[i], cosineh(p[i]));
        
        fprintf(fp, "cosinh(%.2f) = %.3f\n", p[i], cosineh(p[i]));
        
    }
    
    *output=p;
    
    *outsize=&m;
    
    fclose(fp);
    
}



void tangent_result(double **output, int **outsize)

{
    
    FILE *fp;
    
    fp=fopen("output.txt", "a");
    
    double *p;
    
    double *temp;
    
    double newnum;
    
    int i,m=0;
    
    p=NULL;
    
    printf("Enter the numbers:\n");
    
    printf("Enter = to end the tangenth\n");
    
    while (scanf("%lf", &newnum) == 1)
        
    {
        
        temp=(double *)malloc((m+1) * sizeof(double));
        
        for(i=0; i<m; ++i)
            
        {
            
            temp[i]=p[i];
            
        }
        
        temp[i]=newnum;
        
        ++m;
        
        free(p);
        
        p=temp;
        
    }
    
    for(i=0; i<m; ++i)
        
    {
        
        printf("tangenth(%.2f) = %.3f\n", p[i], tangenth(p[i]));
        
        fprintf(fp, "tangenth(%.2f) = %.3f\n", p[i], tangenth(p[i]));
        
    }
    
    *output=p;
    
    *outsize=&m;
    
    fclose(fp);
    
}



void log_ten_res(double **output, int **outsize)

{
    
    FILE *fp;
    
    fp=fopen("output.txt", "a");
    
    double *p;
    
    double *temp;
    
    double newnum;
    
    int i,m=0;
    
    p=NULL;
    
    printf("Enter the numbers:\n");
    
    printf("Enter = to end the log over ten\n");
    
    while (scanf("%lf", &newnum) == 1)
        
    {
        
        temp=(double *)malloc((m+1) * sizeof(double));
        
        for(i=0; i<m; ++i)
            
        {
            
            temp[i]=p[i];
            
        }
        
        temp[i]=newnum;
        
        ++m;
        
        free(p);
        
        p=temp;
        
    }
    
    for(i=0; i<m; ++i)
        
    {
        
        printf("log over ten(%.2f) = %.3f\n", p[i], logten(p[i]));
        
        fprintf(fp,"log over ten(%.2f) = %.3f\n", p[i], logten(p[i]));
        
    }
    
    *output=p;
    
    *outsize=&m;
    
    fclose(fp);
    
}



void squre_root_res(double **output, int **outsize)

{
    
    FILE *fp;
    
    fp=fopen("output.txt", "a");
    
    double *p;
    
    double *temp;
    
    double newnum;
    
    int i,m=0;
    
    p=NULL;
    
    printf("Enter the numbers:\n");
    
    printf("Enter = to end the squre root\n");
    
    while (scanf("%lf", &newnum) == 1)
        
    {
        
        temp=(double *)malloc((m+1) * sizeof(double));
        
        for(i=0; i<m; ++i)
            
        {
            
            temp[i]=p[i];
            
        }
        
        temp[i]=newnum;
        
        ++m;
        
        free(p);
        
        p=temp;
        
    }
    
    for(i=0; i<m; ++i)
        
    {
        
        printf("squre root(%.2f) = %.3f\n", p[i], squareroot(p[i]));
        
        fprintf(fp,"squre root(%.2f) = %.3f\n", p[i], squareroot(p[i]));
        
    }
    
    *output=p;
    
    *outsize=&m;
    
    fclose(fp);
    
}



void exponential_res(double **output, int **outsize)

{
    
    FILE *fp;
    
    fp=fopen("output.txt", "a");
    
    double *p;
    
    double *temp;
    
    double newnum;
    
    int i,m=0;
    
    p=NULL;
    
    printf("Enter the numbers:\n");
    
    printf("Enter = to end the exponential function\n");
    
    while (scanf("%lf", &newnum) == 1)
        
    {
        
        temp=(double *)malloc((m+1) * sizeof(double));
        
        for(i=0; i<m; ++i)
            
        {
            
            temp[i]=p[i];
            
        }
        
        temp[i]=newnum;
        
        ++m;
        
        free(p);
        
        p=temp;
        
    }
    
    for(i=0; i<m; ++i)
        
    {
        
        printf("exp(%.2f) = %.3f\n", p[i], exponent(p[i]));
        
        fprintf(fp,"exp(%.2f) = %.3f\n", p[i], exponent(p[i]));
        
    }
    
    *output=p;
    
    *outsize=&m;
    
    fclose(fp);
    
}



void absolute_value_res(double **output, int **outsize)

{
    
    FILE *fp;
    
    fp=fopen("output.txt","a");
    
    double *p;
    
    double *temp;
    
    double newnum;
    
    int i,m=0;
    
    p=NULL;
    
    printf("Enter the numbers:\n");
    
    printf("Enter = to end the absolute value\n");
    
    while (scanf("%lf", &newnum) == 1)
        
    {
        
        temp=(double *)malloc((m+1) * sizeof(double));
        
        for(i=0; i<m; ++i)
            
        {
            
            temp[i]=p[i];
            
        }
        
        temp[i]=newnum;
        
        ++m;
        
        free(p);
        
        p=temp;
        
    }
    
    for(i=0; i<m; ++i)
        
    {
        
        printf("absolute value(%.2f) = %.3f\n", p[i], absolutevalue(p[i]));
        
        fprintf(fp,"absolute value(%.2f) = %.3f\n", p[i], absolutevalue(p[i]));
        
    }
    
    *output=p;
    
    *outsize=&m;
    
    fclose(fp);
    
}



void factorial_res(double **output, int **outsize)

{
    
    FILE *fp;
    
    fp=fopen("output.txt", "a");
    
    double *p;
    
    double *temp;
    
    double newnum;
    
    int i,m=0;
    
    p=NULL;
    
    printf("Enter the numbers:\n");
    
    printf("Enter = to end the factorial\n");
    
    while (scanf("%lf", &newnum) == 1)
        
    {
        
        temp=(double *)malloc((m+1) * sizeof(double));
        
        for(i=0; i<m; ++i)
            
        {
            
            temp[i]=p[i];
            
        }
        
        temp[i]=newnum;
        
        ++m;
        
        free(p);
        
        p=temp;
        
    }
    
    for(i=0; i<m; ++i)
        
    {
        
        printf("factorial(%.1f) = %.1f\n", p[i], factorial(p[i]));
        
        fprintf(fp, "factorial(%.1f) = %.1f\n", p[i], factorial(p[i]));
        
    }
    
    *output=p;
    
    *outsize=&m;
    
    fclose(fp);
    
}



void sub_res(double **output, int **outsize)

{
    
    FILE *fp;
    
    fp=fopen("output.txt", "a");
    
    double *p;
    
    double *temp;
    
    double newnum, sum=0;
    
    int i,m=0;
    
    p=NULL;
    
    printf("Enter the numbers:\n");
    
    printf("Enter = to end the subtraction\n");
    
    while (scanf("%lf", &newnum) == 1)
        
    {
        
        temp=(double *)malloc((m+1) * sizeof(double));
        
        for(i=0; i<m; ++i)
            
        {
            
            temp[i]=p[i];
            
        }
        
        temp[i]=newnum;
        
        ++m;
        
        free(p);
        
        p=temp;
        
    }
    
    printf("I will show the subtraction of the all the elements below :\n");
    
    for (i=0; i<m; i++)
        
    {
        
        printf("%.2f -  ", p[i]);
        
    }
    
    printf("=");
    
    printf("\n");
    
    for (i=0; i<m; ++i)
        
    {
        
        sum-=p[i];
        
    }
    
    printf("the sum = %.2f\n", sum);
    
    fprintf(fp, "the sum = %.2f\n", sum);
    
    *output=p;
    
    *outsize=&m;
    
    fclose(fp);
    
}

// function for writing to the file the result of the operations .

void WriteToFile(FILE *fp, double res)

{
    
    fp = fopen("output.txt", "a");
    
    fprintf(fp,"%.2lf\n", res);
    
    fclose(fp);
    
}

//This function is used for printing the file onto the screen.

void read_from_file()

{
    FILE *fp;
    
    char ch;
    
    fp=fopen("output.txt", "r");
    
    while((ch = fgetc(fp)) != EOF)
        
        printf("%c", ch);
    
}
