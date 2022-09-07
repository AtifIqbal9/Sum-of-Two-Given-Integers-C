# include <stdio.h>

int sum(int firstNumber, int secondNumber) {
    
    int sumOfFirstNumberAndSecondNumber = (firstNumber + secondNumber);

    return (sumOfFirstNumberAndSecondNumber);

}

int main(int argc, char const *argv[]) {
    
    // Take Two Integers.
    int firstNumber, secondNumber;
    printf("Enter the first nubmer : ");
    scanf("%d", &firstNumber);
    printf("Enter the second nubmer : ");
    scanf("%d", &secondNumber);

    return 0;
}


