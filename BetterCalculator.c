int main()
{
    double num1;
    double num2;
    char op;

    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter operator: ");
    scanf(" %c", &op);
    printf("Enter second number: ");
    scanf("%lf", &num2);

    if(op == '+'){
        printf("%f", num1 + num2);
    }else if(op == '-'){
        printf("%f", num1 - num2);
    }else if(op == '/'){
        printf("%f", num1 / num2);
    }else if(op == '*'){
        printf("%f", num1 * num2);
    }else {
        printf("Invalid Operator");
    }
    return 0;
}
