#include <stdio.h>
#include <string.h>

int main() {
    char str1[101], str2[101], str3[101];
    scanf("%s", str1);
    scanf("%s", str2);
    scanf("%s", str3);
    
    int length = strlen(str1);
    int total_operations = 0;
    
    
    for (int i = 0; i < length; i++) {
        char a = str1[i];
        char b = str2[i];
        char c = str3[i];
        
        
        if (a == b && b == c) {
            continue;  
        } else if (a == b || b == c || a == c) {
            total_operations += 1;  
        } else {
            total_operations += 2;  
        }
    }
    
    
    printf("%d\n", total_operations);
    
    return 0;
}
