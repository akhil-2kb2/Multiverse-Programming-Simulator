#include <stdio.h>

int main()
{
    int i, j;
    int choice, num;
    int missions = 0;

    /* ---------------- PHASE 1 : Power Evaluation ---------------- */

    float marks[5];
    float total = 0, average;
    char grade;

    printf("=============================================\n");
    printf("      MULTIVERSE PROGRAMMING SIMULATOR\n");
    printf("=============================================\n");

    printf("\nEnter power levels of 5 Mystic Subjects (0 - 100 only):\n");

    for(i = 0; i < 5; i++)
    {
        while(1)
        {
            printf("Subject %d: ", i + 1);
            scanf("%f", &marks[i]);

            if(marks[i] < 0 || marks[i] > 100)
            {
                printf("Invalid Input! Value must be between 0 and 100.\n");
                printf("Please re-enter.\n");
            }
            else
            {
                total += marks[i];
                break;
            }
        }
    }

    average = total / 5;

    if(average >= 75)
        grade = 'A';
    else if(average >= 60)
        grade = 'B';
    else if(average >= 50)
        grade = 'C';
    else if(average >= 40)
        grade = 'D';
    else
        grade = 'F';

    printf("\nAverage Power: %.2f\n", average);
    printf("Grade: %c\n", grade);

    /* ---------------- PHASE 2 : Negotiation Loop ---------------- */

    printf("\n--- Entering the Dark Dimension ---\n");

    int agreement = 0;
    int attempts = 0;

    while(agreement == 0)
    {
        printf("\nDoctor Strange: I am here to negotiate.\n");
        printf("Dormammu: You challenge the Dark Dimension?\n");

        attempts++;

        if(attempts < 3)
        {
            printf("Cosmic destruction unleashed...\n");
            printf("Timeline resets.\n");
        }
        else
        {
            printf("Doctor Strange: Release Earth and the loop ends.\n");
            printf("Dormammu: Enough. I accept your terms.\n");
            agreement = 1;
        }
    }

    printf("Negotiation completed after %d loops.\n", attempts);

    /* ---------------- PHASE 3 : Dynamic Energy Matrix ---------------- */

    int rows, cols;

    printf("\n--- Configure Energy Matrix ---\n");

    while(1)
    {
        printf("Enter number of rows: ");
        scanf("%d", &rows);

        if(rows <= 0)
            printf("Rows must be positive.\n");
        else
            break;
    }

    while(1)
    {
        printf("Enter number of columns: ");
        scanf("%d", &cols);

        if(cols <= 0)
            printf("Columns must be positive.\n");
        else
            break;
    }

    int energy[rows][cols];

    printf("Enter energy values:\n");

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            printf("Energy[%d][%d]: ", i, j);
            scanf("%d", &energy[i][j]);
        }
    }

    printf("\nEnergy Matrix Stabilized:\n");

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            printf("%d ", energy[i][j]);
        }
        printf("\n");
    }

    /* ---------------- PHASE 4 : Do-While Burst ---------------- */

    int burst = 0;

    printf("\n--- Energy Burst Simulation ---\n");

    do
    {
        printf("Energy Burst Activated.\n");
        burst++;
    }
    while(burst < 2);

    /* ---------------- PHASE 5 : Mission Console ---------------- */

    while(1)
    {
        printf("\n=================================\n");
        printf("        MISSION CONSOLE\n");
        printf("=================================\n");
        printf("1. Palindrome\n");
        printf("2. Prime\n");
        printf("3. Armstrong\n");
        printf("4. Factorial\n");
        printf("5. Fibonacci\n");
        printf("6. Neon\n");
        printf("0. Exit Timeline\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice == 0)
        {
            printf("\nTimeline Closed Successfully.\n");
            printf("Total Missions Completed: %d\n", missions);
            break;
        }

        if(choice < 0 || choice > 6)
        {
            printf("Invalid Choice. Try Again.\n");
            continue;
        }

        printf("Enter a number: ");
        scanf("%d", &num);

        switch(choice)
        {
            case 1:
            {
                int temp = num, reverse = 0, remainder;

                while(temp != 0)
                {
                    remainder = temp % 10;
                    reverse = reverse * 10 + remainder;
                    temp /= 10;
                }

                if(reverse == num)
                    printf("Palindrome Number.\n");
                else
                    printf("Not a Palindrome.\n");

                missions++;
                break;
            }

            case 2:
            {
                int count = 0;

                for(i = 1; i <= num; i++)
                {
                    if(num % i == 0)
                        count++;
                }

                if(count == 2)
                    printf("Prime Number.\n");
                else
                    printf("Not a Prime Number.\n");

                missions++;
                break;
            }

            case 3:
            {
                int temp = num, sum = 0, remainder;

                while(temp != 0)
                {
                    remainder = temp % 10;
                    sum += remainder * remainder * remainder;
                    temp /= 10;
                }

                if(sum == num)
                    printf("Armstrong Number.\n");
                else
                    printf("Not an Armstrong Number.\n");

                missions++;
                break;
            }

            case 4:
            {
                int fact = 1;

                for(i = 1; i <= num; i++)
                    fact *= i;

                printf("Factorial: %d\n", fact);
                missions++;
                break;
            }

            case 5:
            {
                int a = 0, b = 1, c;

                printf("Fibonacci Series:\n");

                for(i = 0; i < num; i++)
                {
                    printf("%d ", a);
                    c = a + b;
                    a = b;
                    b = c;
                }

                printf("\n");
                missions++;
                break;
            }

            case 6:
            {
                int square = num * num;
                int temp = square, sum = 0, remainder;

                while(temp != 0)
                {
                    remainder = temp % 10;
                    sum += remainder;
                    temp /= 10;
                }

                if(sum == num)
                    printf("Neon Number.\n");
                else
                    printf("Not a Neon Number.\n");

                missions++;
                break;
            }
        }
    }

    return 0;
}
