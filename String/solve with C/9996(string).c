#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);
    
    char p[100];
    scanf("%s", p);
    
    char prefix[100], suffix[100];
    
    int starKey = -1;
    for (int i = 0; i < strlen(p); i++) {
        if (p[i] == '*') {
            starKey = i;
            break;
        }
    }
    
    strncpy(prefix, p, starKey);
    prefix[starKey] = '\0';
    
    strncpy(suffix, p + starKey + 1, strlen(p) - starKey);
    suffix[strlen(p) - starKey - 1] = '\0';
    
    char str[100];
    
    for (int i = 0; i < N; i++) {
        scanf("%s", str);
        
        if (strlen(prefix) + strlen(suffix) > strlen(str)) {
            printf("NE\n");
        } else {
            if (strncmp(prefix, str, strlen(prefix)) == 0 &&
                strncmp(suffix, str + strlen(str) - strlen(suffix), strlen(suffix)) == 0) {
                printf("DA\n");
            } else {
                printf("NE\n");
            }
        }
    }
    
    return 0;
}
