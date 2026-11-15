#include <stdio.h>
#include <string.h>
int main() {
    char s[256];
    fgets(s, sizeof s, stdin);
    char *p = strstr(s, "console.log(");
    if (p) {
        p += 6;
        char *end = strchr(p, ')');
        if (end) *end = '\0';
        printf("%s\n", p);
    }
    return 0;
}
