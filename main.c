# include <stdio.h>

int sum(int firstNumber, int secondNumber) {
    
    int sumOfFirstNumberAndSecondNumber = (firstNumber + secondNumber);

    return (sumOfFirstNumberAndSecondNumber);

}

int main(int argc, char const *argv[]) {
    
    while (1) {

        // Take Two Integers.
        int firstNumber, secondNumber;
        printf("Enter the first nubmer : ");
        scanf("%d", &firstNumber);
        printf("Enter the second nubmer : ");
        scanf("%d", &secondNumber);

        // Display the sum of both.
        printf("%d\n", sum(firstNumber, secondNumber));

    }

    return 0;
}


