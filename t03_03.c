#include <stdio.h>   
#include <limits.h>   
#include <float.h>   

int main() {
    int n;             
    int current_num;  
    int min_val = INT_MAX; 
    int max_val = INT_MIN; 
    int previous_num;  
    double min_avg_val = DBL_MAX; 
    double max_avg_val = DBL_MIN; 
    int is_first_num_processed = 0; 

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &current_num);

        if (current_num < min_val) {
            min_val = current_num;
        }
        if (current_num > max_val) {
            max_val = current_num;
        }

        if (is_first_num_processed) { 
            double current_avg = (double)(previous_num + current_num) / 2.0;
            
            if (current_avg < min_avg_val) {
                min_avg_val = current_avg;
            }
            if (current_avg > max_avg_val) { 
                max_avg_val = current_avg;
            }
        } else {
            is_first_num_processed = 1;
        }
        

        previous_num = current_num;
    }

    printf("%d\n", min_val);
    printf("%d\n", max_val);
    
    if (n >= 2) {
        printf("%.2f\n", min_avg_val);
        printf("%.2f\n", max_avg_val); 
    } 

    return 0; 
}
