#include <stdio.h>

int main()
{
    int i, j;

    /* ---------------- HERO ENTRY ---------------- */

    int age;
    int difficulty;
    int maxMissions;
    int missions = 0;

    printf("\n============================================================\n");
    printf("                MULTIVERSE PROGRAMMING SIMULATOR\n");
    printf("============================================================\n");

    printf("\n[ HERO ENTRY PANEL ]\n");
    printf("------------------------------------------------------------\n");

    printf("Enter Your Age : ");
    scanf("%d", &age);

    while (age <= 0)
    {
        printf("Invalid Age. Enter again: ");
        scanf("%d", &age);
    }

    if (age < 18)
    {
        difficulty = 1;
        printf("Rank Assigned  : Trainee of Kamar-Taj\n");
    }
    else if (age <= 25)
    {
        difficulty = 2;
        printf("Rank Assigned  : Apprentice Sorcerer\n");
    }
    else if (age <= 40)
    {
        difficulty = 3;
        printf("Rank Assigned  : Senior Sorcerer\n");
    }
    else
    {
        difficulty = 4;
        printf("Rank Assigned  : Master of the Multiverse\n");
    }

    maxMissions = difficulty + 2;

    printf("Difficulty     : Level %d\n", difficulty);
    printf("Mission Limit  : %d Missions\n", maxMissions);

    /* ---------------- POWER EVALUATION ---------------- */

    float marks[5];
    float total = 0, average;
    char grade;

    printf("\n============================================================\n");
    printf("                 POWER EVALUATION PANEL\n");
    printf("============================================================\n");

    for (i = 0; i < 5; i++)
    {
        while (1)
        {
            printf("Subject %d Power (0-100) : ", i + 1);
            scanf("%f", &marks[i]);

            if (marks[i] < 0 || marks[i] > 100)
                printf("Invalid Value! Must be between 0 and 100.\n");
            else
            {
                total += marks[i];
                break;
            }
        }
    }

    average = total / 5;

    if (average >= 75)
        grade = 'A';
    else if (average >= 60)
        grade = 'B';
    else if (average >= 50)
        grade = 'C';
    else if (average >= 40)
        grade = 'D';
    else
        grade = 'F';

    printf("\n------------------ POWER ANALYSIS REPORT -------------------\n");
    printf("Average Power        : %.2f\n", average);
    printf("Evaluation Grade     : %c\n", grade);

    /* ---------------- TIME LOOP SIMULATION ---------------- */

    printf("\n============================================================\n");
    printf("                   TIME LOOP SIMULATION\n");
    printf("============================================================\n");

    int agreement = 0;
    int attempts = 0;

    while (agreement == 0)
    {
        attempts++;

        printf("\n[ LOOP %d ]\n", attempts);
        printf("Doctor Strange : I have come to bargain.\n");
        printf("Dormammu       : You dare challenge the Dark Dimension?\n");

        if (attempts < difficulty + 2)
            printf("System         : Timeline reset.\n");
        else
        {
            printf("Dormammu       : Enough! I accept your terms.\n");
            agreement = 1;
        }
    }

    printf("Agreement Achieved after %d loops.\n", attempts);

    /* ---------------- ENERGY MATRIX ---------------- */

    int rows, cols;

    printf("\n============================================================\n");
    printf("                ENERGY MATRIX CONFIGURATION\n");
    printf("============================================================\n");

    while (1)
    {
        printf("Enter number of rows    : ");
        scanf("%d", &rows);

        if (rows <= 0)
            printf("Rows must be positive.\n");
        else
            break;
    }

    while (1)
    {
        printf("Enter number of columns : ");
        scanf("%d", &cols);

        if (cols <= 0)
            printf("Columns must be positive.\n");
        else
            break;
    }

    int energy[rows][cols];

    printf("\nEnter Energy Values:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("Energy[%d][%d] : ", i, j);
            scanf("%d", &energy[i][j]);
        }
    }

    printf("\nEnergy Matrix Stabilized:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
            printf("%5d ", energy[i][j]);
        printf("\n");
    }

    /* ---------------- ENERGY BURST ---------------- */

    printf("\n============================================================\n");
    printf("                   ENERGY BURST SIMULATION\n");
    printf("============================================================\n");

    int burst = 0;

    do
    {
        printf("Energy Burst Activated.\n");
        burst++;
    } while (burst < difficulty);

    /* ---------------- MISSION CONSOLE ---------------- */

    int choice, num;

    while (1)
    {
        if (missions >= maxMissions)
        {
            int extendChoice;
            int extraMissions;

            printf("\n============================================================\n");
            printf("        MAXIMUM MISSIONS REACHED FOR YOUR RANK\n");
            printf("============================================================\n");
            printf("Missions Completed : %d\n", missions);

            printf("\nDo you want to extend mission limit?\n");
            printf("1. Yes\n");
            printf("0. No (Exit Simulator)\n");
            printf("Enter choice : ");
            scanf("%d", &extendChoice);

            if (extendChoice == 1)
            {
                printf("How many additional missions do you want? ");
                scanf("%d", &extraMissions);

                while (extraMissions <= 0)
                {
                    printf("Enter a positive number: ");
                    scanf("%d", &extraMissions);
                }

                maxMissions += extraMissions;

                printf("New Mission Limit : %d\n", maxMissions);
            }
            else
            {
                printf("Timeline Closed by User.\n");
                break;
            }
        }

        printf("\n============================================================\n");
        printf("                     MISSION CONSOLE\n");
        printf("============================================================\n");
        printf("Rank Level          : %d\n", difficulty);
        printf("Missions Completed  : %d / %d\n", missions, maxMissions);
        printf("------------------------------------------------------------\n");
        printf("1. Palindrome Check\n");
        printf("2. Prime Check\n");
        printf("3. Armstrong Check\n");
        printf("4. Factorial (0-12)\n");
        printf("5. Fibonacci (1-20)\n");
        printf("6. Neon Number Check\n");
        printf("0. Exit Timeline\n");
        printf("------------------------------------------------------------\n");
        printf("Enter Choice : ");
        scanf("%d", &choice);

        if (choice == 0)
        {
            printf("Timeline Closed Successfully.\n");
            break;
        }

        if (choice < 0 || choice > 6)
        {
            printf("Invalid Choice. Try Again.\n");
            continue;
        }

        printf("Enter Number : ");
        scanf("%d", &num);

        switch (choice)
        {
        case 1:
        {
            int temp = num, reverse = 0, remainder;
            while (temp != 0)
            {
                remainder = temp % 10;
                reverse = reverse * 10 + remainder;
                temp /= 10;
            }

            if (reverse == num)
                printf("Result : Palindrome Number\n");
            else
                printf("Result : Not a Palindrome\n");

            missions++;
            break;
        }

        case 2:
        {
            int count = 0;
            for (i = 1; i <= num; i++)
                if (num % i == 0)
                    count++;

            if (count == 2)
                printf("Result : Prime Number\n");
            else
                printf("Result : Not Prime\n");

            missions++;
            break;
        }

        case 3:
        {
            int temp = num, sum = 0, remainder;
            while (temp != 0)
            {
                remainder = temp % 10;
                sum += remainder * remainder * remainder;
                temp /= 10;
            }

            if (sum == num)
                printf("Result : Armstrong Number\n");
            else
                printf("Result : Not Armstrong\n");

            missions++;
            break;
        }

        case 4:
        {
            if (num < 0 || num > 12)
            {
                printf("Limit Exceeded (0-12 only)\n");
                break;
            }

            int fact = 1;
            for (i = 1; i <= num; i++)
                fact *= i;

            printf("Result : %d\n", fact);
            missions++;
            break;
        }

        case 5:
        {
            if (num <= 0 || num > 20)
            {
                printf("Limit Exceeded (1-20 only)\n");
                break;
            }

            int a = 0, b = 1, c;

            printf("Series : ");
            for (i = 0; i < num; i++)
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

            while (temp != 0)
            {
                remainder = temp % 10;
                sum += remainder;
                temp /= 10;
            }

            if (sum == num)
                printf("Result : Neon Number\n");
            else
                printf("Result : Not Neon\n");

            missions++;
            break;
        }
        }
    }

    printf("\n============================================================\n");
    printf("                      FINAL REPORT\n");
    printf("============================================================\n");
    printf("Total Missions Completed : %d\n", missions);
    printf("Program Terminated Successfully.\n");
    printf("============================================================\n");

    return 0;
}
