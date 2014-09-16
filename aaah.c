#include <stdio.h>
#include <strings.h>

int main(int argc, char* argv[])
{
    char marius[1000];
    char doctor[1000];

    scanf("%s", marius);
    scanf("%s", doctor);

    if (strlen(marius) >= strlen(doctor)) {
        printf("go\n");
    } else {
        printf("no\n");
    }
}
