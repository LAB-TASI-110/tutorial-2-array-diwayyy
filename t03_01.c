#include <stdio.h> 
#include <limits.h> 

int main() {
    int n;
    int current_num; 
    int min_val = INT_MAX; 
    int max_val = INT_MIN; 

    
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &current_num); 
        if (current_num < min_val) {
            min_val = current_num;
        }

        if (current_num > max_val) {
            max_val = current_num;
        }
    }

    printf("%d\n", min_val);
 
    printf("%d\n", max_val);

    return 0; 
}
