#include <stdio.h>

int main() {
    int option ;

    printf("\n\n\n");
    printf("\033[0;36m \t ########     ###    ##    ## ##    ##    ##     ##    ###    ##    ##    ###     ######   ######## ##     ## ######## ##    ## ######## \033[0m\n");
    printf("\033[0;36m \t ##     ##   ## ##   ###   ## ##   ##     ###   ###   ## ##   ###   ##   ## ##   ##    ##  ##       ###   ### ##       ###   ##    ##    \033[0m\n");
    printf("\033[0;36m \t ##     ##  ##   ##  ####  ## ##  ##      #### ####  ##   ##  ####  ##  ##   ##  ##        ##       #### #### ##       ####  ##    ##    \033[0m\n");
    printf("\033[0;36m \t ########  ##     ## ## ## ## #####       ## ### ## ##     ## ## ## ## ##     ## ##   #### ######   ## ### ## ######   ## ## ##    ##    \033[0m\n");
    printf("\033[0;36m \t ##     ## ######### ##  #### ##  ##      ##     ## ######### ##  #### ######### ##    ##  ##       ##     ## ##       ##  ####    ##    \033[0m\n");
    printf("\033[0;36m \t ##     ## ##     ## ##   ### ##   ##     ##     ## ##     ## ##   ### ##     ## ##    ##  ##       ##     ## ##       ##   ###    ##    \033[0m\n");
    printf("\033[0;36m \t ########  ##     ## ##    ## ##    ##    ##     ## ##     ## ##    ## ##     ##  ######   ######## ##     ## ######## ##    ##    ##    \033[0m\n");
    printf("\n\n\n");

    printf("1. Create Acoount \n");
    printf("2. Deposit \n");
    printf("3. Withdraw \n");
    printf("4. Search ID \n\n");

    printf("Option : ");
    scanf("%d" , &option); 

    printf("You choose : %d " , option);

    
    
    return 0;
}
