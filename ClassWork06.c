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

    while (age <= 0)
    {
        printf("Invalid Age. Enter again: ");
        scanf("%d", &age);
    }

    if (age < 18)
    {
        difficulty = 1;
        printf("\nRank Assigned: Trainee of Kamar-Taj\n");
    }
    else if (age <= 25)
    {
        difficulty = 2;
        printf("\nRank Assigned: Apprentice Sorcerer\n");
    }
    else if (age <= 40)
    {
        difficulty = 3;
        printf("\nRank Assigned: Senior Sorcerer\n");
    }
    else
    {
        difficulty = 4;
        printf("\nRank Assigned: Master of the Multiverse\n");
    }

    maxMissions = difficulty + 2;

    /* -------- PHASE 1 : Power Evaluation Chamber -------- */

    float marks[5];
    float total = 0, average;
    char grade;

    printf("\nEnter Power Levels of 5 Mystic Subjects (0 - 100 only):\n");

    for (i = 0; i < 5; i++)
    {
        while (1)
        {
            printf("Subject %d: ", i + 1);
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

    printf("\n====================================\n");
    printf("        POWER ANALYSIS REPORT\n");
    printf("====================================\n");

    printf("\nAverage Power Level : %.2f\n", average);
    printf("Evaluation Grade    : %c\n", grade);

    if (grade == 'A')
        printf("Status: Master of the Multiverse\nAccess Level: Unlimited Cosmic Authority\n");
    else if (grade == 'B')
        printf("Status: Senior Sorcerer\nAccess Level: Advanced Dimensional Control\n");
    else if (grade == 'C')
        printf("Status: Apprentice\nAccess Level: Restricted Spell Casting\n");
    else if (grade == 'D')
        printf("Status: Trainee\nAccess Level: Basic Mystic Training Required\n");
    else
        printf("Status: Unstable Energy Signature\nAccess Level: Training Intensification Needed\n");

    /* -------- PHASE 2 : Time Loop Simulation -------- */

    printf("\n--- Time Loop Simulation ---\n");

    int agreement = 0;
    int attempts = 0;

    while (agreement == 0)
    {
        attempts++;

        printf("\nDoctor Strange: I have come to bargain.\n");
        printf("Dormammu: You dare challenge the Dark Dimension?\n");

        if (attempts < difficulty + 2)
            printf("Time distortion detected. Timeline reset.\n");
        else
        {
            printf("Dormammu: Enough! I accept your terms.\n");
            agreement = 1;
        }
    }

    printf("Agreement Achieved after %d loops.\n", attempts);

    /* -------- PHASE 3 : Dynamic Energy Matrix -------- */

    int rows, cols;

    printf("\n--- Energy Matrix Configuration ---\n");

    while (1)
    {
        printf("Enter number of rows: ");
        scanf("%d", &rows);

        if (rows <= 0)
            printf("Rows must be positive.\n");
        else
            break;
    }

    while (1)
    {
        printf("Enter number of columns: ");
        scanf("%d", &cols);

        if (cols <= 0)
            printf("Columns must be positive.\n");
        else
            break;
    }

    int energy[rows][cols];

    printf("Enter Energy Values:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("Energy[%d][%d]: ", i, j);
            scanf("%d", &energy[i][j]);
        }
    }

    printf("\nEnergy Matrix Stabilized:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
            printf("%d ", energy[i][j]);
        printf("\n");
    }

    /* -------- Energy Burst Simulation -------- */

    int burst = 0;

    printf("\n--- Energy Burst Simulation ---\n");

    do
    {
        printf("Energy Burst Activated.\n");
        burst++;
    } while (burst < difficulty);

    /* -------- PHASE 4 : Mission Console -------- */

    int choice, num;

    while (1)
    {
        if (missions >= maxMissions)
        {
            printf("\nMaximum Missions Reached for Your Rank.\n");
            break;
        }

        printf("\n=================================\n");
        printf("        MISSION CONSOLE\n");
        printf("=================================\n");
        printf("1. Time Mirror Test (Palindrome)\n");
        printf("2. Energy Stability Check (Prime)\n");
        printf("3. Power Amplification (Armstrong)\n");
        printf("4. Quantum Growth (Factorial 0-12)\n");
        printf("5. Mystic Resonance (Fibonacci 1-20)\n");
        printf("6. Dark Energy Detector (Neon)\n");
        printf("0. Exit Timeline\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 0)
        {
            printf("\nTimeline Closed Successfully.\n");
            break;
        }

        if (choice < 0 || choice > 6)
        {
            printf("Invalid Choice. Try Again.\n");
            continue;
        }

        printf("Enter a number: ");
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
                printf("Time Mirror Stable. Palindrome Number.\n");
            else
                printf("Time Distortion Detected.\n");

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
                printf("Energy Stable. Prime Number.\n");
            else
                printf("Energy Unstable.\n");

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
                printf("Power Amplified Successfully. Armstrong Number.\n");
            else
                printf("Amplification Failed.\n");

            missions++;
            break;
        }

        case 4:
        {
            if (num < 0 || num > 12)
            {
                printf("Quantum Growth Limit Exceeded (0-12 only).\n");
                break;
            }

            int fact = 1;

            for (i = 1; i <= num; i++)
                fact *= i;

            printf("Quantum Growth Result: %d\n", fact);
            missions++;
            break;
        }

        case 5:
        {
            if (num <= 0 || num > 20)
            {
                printf("Mystic Resonance Limit Exceeded (1-20 only).\n");
                break;
            }

            int a = 0, b = 1, c;

            printf("Mystic Resonance Series:\n");

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
                printf("Dark Energy Detected. Neon Number.\n");
            else
                printf("No Dark Energy Signature.\n");

            missions++;
            break;
        }
        }
    }

    printf("\nTotal Missions Completed: %d\n", missions);
    printf("Program Terminated Successfully.\n");

    return 0;
}
