#include <stdio.h>

int main()
{
    int i, j;

    /* ---------------- HERO ENTRY ---------------- */

    int age;
    int difficulty;
    int maxMissions;
    int missions = 0;

    printf("=============================================\n");
    printf("      MULTIVERSE PROGRAMMING SIMULATOR\n");
    printf("=============================================\n");

    printf("\nEnter Your Age: ");
    scanf("%d", &age);

    while(age <= 0)
    {
        printf("Invalid Age. Enter again: ");
        scanf("%d", &age);
    }

    /* Age decides difficulty level */

    if(age < 18)
    {
        difficulty = 1;
        printf("\nTrainee Mode Activated.\n");
    }
    else if(age <= 25)
    {
        difficulty = 2;
        printf("\nWarrior Mode Activated.\n");
    }
    else if(age <= 40)
    {
        difficulty = 3;
        printf("\nMaster Mode Activated.\n");
    }
    else
    {
        difficulty = 4;
        printf("\nAncient Sorcerer Mode Activated.\n");
    }

    maxMissions = difficulty + 2;

    /* ---------------- POWER EVALUATION ---------------- */

    float marks[5];
    float total = 0, average;
    char grade;

    printf("\nEnter Power Levels of 5 Mystic Subjects (0 - 100 only):\n");

    for(i = 0; i < 5; i++)
    {
        while(1)
        {
            printf("Subject %d: ", i + 1);
            scanf("%f", &marks[i]);

            if(marks[i] < 0 || marks[i] > 100)
            {
                printf("Invalid Value! Must be between 0 and 100.\n");
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

    /* ---------------- DORMAMMU NEGOTIATION LOOP ---------------- */

    printf("\n--- Entering Dark Dimension ---\n");

    int agreement = 0;
    int attempts = 0;

    while(agreement == 0)
    {
        attempts++;

        printf("\nDoctor Strange: I have come to bargain.\n");
        printf("Dormammu: You dare enter my dimension?\n");

        if(attempts < difficulty + 2)
        {
            printf("Dormammu destroys the timeline...\n");
            printf("Time resets.\n");
        }
        else
        {
            printf("Doctor Strange: This loop will never end.\n");
            printf("Dormammu: Enough! I accept your terms.\n");
            agreement = 1;
        }
    }

    printf("Negotiation completed after %d loops.\n", attempts);

    /* ---------------- DYNAMIC ENERGY MATRIX ---------------- */

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

    /* ---------------- DO-WHILE BURST ---------------- */

    int burst = 0;

    printf("\n--- Energy Burst Simulation ---\n");

    do
    {
        printf("Energy Burst Activated.\n");
        burst++;
    }
    while(burst < difficulty);

    /* ---------------- MISSION CONSOLE ---------------- */

    int choice, num;

    while(1)
    {
        if(missions >= maxMissions)
        {
            printf("\nMaximum missions completed for your level.\n");
            break;
        }

        printf("\n=================================\n");
        printf("          MISSION CONSOLE\n");
        printf("=================================\n");
        printf("1. Palindrome\n");
        printf("2. Prime\n");
        printf("3. Armstrong\n");
        printf("4. Factorial (0-12 only)\n");
        printf("5. Fibonacci (1-20 only)\n");
        printf("6. Neon\n");
        printf("0. Exit Timeline\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice == 0)
        {
            printf("\nTimeline Closed Successfully.\n");
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
                if(num < 0 || num > 12)
                {
                    printf("Invalid Range! Enter between 0 and 12 only.\n");
                    break;
                }

                int fact = 1;

                for(i = 1; i <= num; i++)
                    fact *= i;

                printf("Factorial: %d\n", fact);
                missions++;
                break;
            }

            case 5:
            {
                if(num <= 0 || num > 20)
                {
                    printf("Invalid Range! Enter between 1 and 20 only.\n");
                    break;
                }

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

    printf("\nTotal Missions Completed: %d\n", missions);
    printf("Program Ended Successfully.\n");

    return 0;
}
