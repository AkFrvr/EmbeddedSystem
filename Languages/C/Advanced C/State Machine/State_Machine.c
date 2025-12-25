#include <stdio.h>
#include <time.h>

typedef enum {
    IDLE = 0,
    HEAT,
    COOL,
    FAN,
    TURBO,
    MAX_STATE   // helper, not a real state
} AC_State;

AC_State currentState = IDLE;
AC_State previousState = IDLE;

void AC_StateMachine(AC_State newState)
{
    // Validate input
    if (newState < 0 || newState >= MAX_STATE) {
        printf("Invalid Mode Selected!\n");
        return;
    }

    // Prevent redundant transitions
    if (newState == currentState) {
        printf("Already in the selected state.\n");
        return;
    }

    previousState = currentState;
    currentState = newState;

    switch (currentState)
    {
        case IDLE:
            if (previousState == IDLE)
                printf("AC Starting...\n");
            else
                printf("Idle Mode Activated.\n");
            break;

        case HEAT:
            printf("Heating Mode Activated.\n");
            break;

        case COOL:
            printf("Cooling Mode Activated.\n");
            break;

        case FAN:
            printf("Fan Mode Activated.\n");
            break;

        case TURBO:
            if (previousState == COOL)
                printf("Turbo Cooling Mode Activated.\n");
            else if (previousState == HEAT)
                printf("Turbo Heating Mode Activated.\n");
            else
                printf("Turbo Fan Mode Activated.\n");
            break;

        default:
            printf("Invalid State Transition.\n");
            break;
    }
}

void delay(int milliseconds)
{
    clock_t start = clock();
    while (clock() < start + milliseconds * CLOCKS_PER_SEC / 1000);
}

int main()
{
    int mode;
    AC_StateMachine(IDLE);

    while (1) {
        printf("\nCurrent Mode: %d\n", currentState);
        printf("Select Mode: 0-IDLE, 1-HEAT, 2-COOL, 3-FAN, 4-TURBO\n> ");
        scanf("%d", &mode);

        AC_StateMachine((AC_State)mode);
        delay(500);
    }
    return 0;
}
