# parser
解析器是由编程语言写出来的程序，用于解析源代码并运行，最常用的是递归下降分析法实现，当然也有其他方法，比如 LR分析法等等。
# 示例
``` txt
print("Hello World!")
:

#include <stdio.h>
#include <string.h>
int main() {
    char s[256];
    fgets(s, sizeof s, stdin);
    char *p = strstr(s, "print(");
    if (p) {
        p += 6;
        char *end = strchr(p, ')');
        if (end) *end = '\0';
        printf("%s\n", p);
    }
    return 0;
}

