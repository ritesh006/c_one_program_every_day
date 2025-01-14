#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#define ARRAY_SIZE  5

// Add type identifiers
#define TYPE_INT    1
#define TYPE_FLOAT  2

enum ProcessResult {
    PROCESS_SUCCESS = 0,
    PROCESS_NULL_ERROR = -1,
    PROCESS_SIZE_ERROR = -2,
    PROCESS_OVERFLOW_ERROR = -3,
    PROCESS_INVALID_TYPE = -4  // New error code for invalid type
};
/**
 * Calculates the sum of array elements with overflow protection.
 * 
 * @param array   Input integer array to be processed
 * @param size    Number of elements to process (must be > 0 and <= ARRAY_SIZE)
 * @param result  Pointer to store the sum result (must not be NULL)
 *                Will be initialized to 0 before calculation
 *
 * @return
 *   PROCESS_SUCCESS        - Sum calculated successfully
 *   PROCESS_NULL_ERROR     - Either array or result pointer is NULL
 *   PROCESS_SIZE_ERROR     - Size is 0 or exceeds ARRAY_SIZE
 *   PROCESS_OVERFLOW_ERROR - Operation would cause integer overflow/underflow
 *
 * @example
 *   int array[5] = {1, 2, 3, 4, 5};
 *   int result = 0;
 *   int status = process_array(array, 5, &result);
 *   if (status == PROCESS_SUCCESS) {
 *       printf("Sum is: %d\n", result);
 *   }
 */

int process_array(const void* array, unsigned int size, void* result, int type) {
    if(array == NULL || result == NULL) {
        return PROCESS_NULL_ERROR;
    }
    if(size > ARRAY_SIZE || size == 0) {
        return PROCESS_SIZE_ERROR;
    }

    switch(type) {
        case TYPE_INT: {
            const int* int_array = (const int*)array;
            int* int_result = (int*)result;
            *int_result = 0;
            
            for(size_t i = 0; i < size; i++) {
                if ((int_array[i] > 0 && *int_result > INT_MAX - int_array[i]) ||
                    (int_array[i] < 0 && *int_result < INT_MIN - int_array[i])) {
                    return PROCESS_OVERFLOW_ERROR;
                }
                *int_result += int_array[i];
            }
            break;
        }
        case TYPE_FLOAT: {
            const float* float_array = (const float*)array;
            float* float_result = (float*)result;
            *float_result = 0.0f;
            
            for(size_t i = 0; i < size; i++) {
                *float_result += float_array[i];
            }
            break;
        }
        default:
            return PROCESS_INVALID_TYPE;
    }
    
    return PROCESS_SUCCESS;
}

void handle_process_error(int status) {
     if (status == PROCESS_SUCCESS) return;  // Only handle errors
    switch(status) {
        case PROCESS_NULL_ERROR:
            printf("Error: NULL pointer detected\n");
            exit(-1);
        case PROCESS_SIZE_ERROR:
            printf("Error: Invalid size\n");
            exit(-1);
        case PROCESS_OVERFLOW_ERROR:
            printf("Error: Integer overflow detected\n");
            exit(-1);
        case PROCESS_INVALID_TYPE:
            printf("Error: Invalid type\n");
            exit(-1);
        default:
            printf("Error: Unknown error occurred\n");
            exit(-1);
    }
}

int main() {
    printf("\n=== Testing Integer Array ===\n");
    
    // Test 1: Normal case
    int int_array[5] = {1, 2, 3, 4, 5};
    int int_result;
    int status;

    printf("\nTest 1: Normal integer processing\n");
    status = process_array(int_array, 5, &int_result, TYPE_INT);
    handle_process_error(status);
    printf("Success! Sum: %d\n", int_result);

    // Test 2: NULL pointer
    printf("\nTest 2: NULL pointer test\n");
    status = process_array(NULL, 5, &int_result, TYPE_INT);
    handle_process_error(status);

    // Test 3: Invalid size
    printf("\nTest 3: Invalid size test\n");
    status = process_array(int_array, 10, &int_result, TYPE_INT);
    handle_process_error(status);

    // Test 4: Invalid type
    printf("\nTest 4: Invalid type test\n");
    status = process_array(int_array, 5, &int_result, 3);
    handle_process_error(status);

    // Test 5: Overflow test
    printf("\nTest 5: Overflow test\n");
    int_array[0] = INT_MAX;  // Using INT_MAX for overflow test
    int_array[1] = 1;
    status = process_array(int_array, 5, &int_result, TYPE_INT);
    handle_process_error(status);

    // Test 6: Float processing
    printf("\n=== Testing Float Array ===\n");
    float float_array[5] = {1.5, 2.5, 3.5, 4.5, 5.5};
    float float_result;
    
    status = process_array(float_array, 5, &float_result, TYPE_FLOAT);
    handle_process_error(status);
    printf("Success! Float sum: %.2f\n", float_result);
return 0;
    
}