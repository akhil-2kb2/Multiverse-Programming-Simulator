#include <stdio.h>

int main()
{
    int i, j;
    int choice, num;
    int missions = 0;

    float marks[5];
    float total = 0, average;
    char grade;

    int agreement = 0;
    int labAttack = 0;

    int energy[2][3] = {{10, 20, 30}, {40, 50, 60}};

    printf("=============================================\n");
    printf("      MULTIVERSE PROGRAMMING SIMULATOR\n");
    printf("=============================================\n");

    /* -------- PHASE 1 : Power Evaluation Chamber -------- */

    printf("\nEnter power levels of 5 Mystic Subjects:\n");

    for(i = 0; i < 5; i++)
    {
        printf("Subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        total += marks[i];
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

    printf("\nAverage Power = %.2f\n", average);
    printf("Grade = %c\n", grade);

    if(grade == 'A')
        printf("Rank: Master of the Multiverse\n");
    else if(grade == 'B')
        printf("Rank: Senior Sorcerer\n");
    else if(grade == 'C')
        printf("Rank: Apprentice\n");
    else if(grade == 'D')
        printf("Rank: Trainee\n");
    else
        printf("Rank: Needs More Training\n");

    /* -------- PHASE 2 : Time Loop Simulation -------- */

    printf("\n--- Time Loop Simulation ---\n");

    while(agreement == 0)
    {
        printf("Negotiating with Dark Dimension...\n");
        agreement = 1;
    }

    printf("Agreement Achieved. Loop Closed.\n");

    printf("\n--- Energy Burst Simulation ---\n");

    do
    {
        printf("Energy Burst Activated.\n");
        labAttack++;
    }
    while(labAttack < 2);

    /* -------- PHASE 3 : Energy Matrix -------- */

    printf("\n--- Energy Matrix ---\n");

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d ", energy[i][j]);
        }
        printf("\n");
    }

    /* -------- PHASE 4 : Mission Console -------- */

    while(1)
    {
        printf("\n=================================\n");
        printf("        MISSION CONSOLE\n");
        printf("=================================\n");
        printf("1. Time Mirror Test (Palindrome)\n");
        printf("2. Energy Stability Check (Prime)\n");
        printf("3. Power Amplification (Armstrong)\n");
        printf("4. Quantum Growth (Factorial)\n");
        printf("5. Mystic Resonance (Fibonacci)\n");
        printf("6. Dark Energy Detector (Neon)\n");
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
                    printf("Time Mirror Stable. Palindrome Number.\n");
                else
                    printf("Time Distortion Detected. Not Palindrome.\n");

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
                    printf("Energy Stable. Prime Number.\n");
                else
                    printf("Energy Unstable. Not Prime.\n");

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
                    printf("Power Amplified Successfully. Armstrong Number.\n");
                else
                    printf("Amplification Failed.\n");

                missions++;
                break;
            }

            case 4:
            {
                int fact = 1;

                for(i = 1; i <= num; i++)
                {
                    fact *= i;
                }

                printf("Quantum Growth Result: %d\n", fact);
                missions++;
                break;
            }

            case 5:
            {
                int a = 0, b = 1, c;

                printf("Mystic Resonance Series:\n");

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
                    printf("Dark Energy Detected. Neon Number.\n");
                else
                    printf("No Dark Energy Signature.\n");

                missions++;
                break;
            }
        }
    }

    return 0;
}
