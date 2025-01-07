#include <stdio.h>
#include <limits.h>
// Please modify this function signature and implementation
#define ARRAY_SIZE  5
enum ProcessResult {
    PROCESS_SUCCESS = 0,
    PROCESS_NULL_ERROR = -1,
    PROCESS_SIZE_ERROR = -2,
    PROCESS_OVERFLOW_ERROR = -3
};

/**
 * [Your function description here]
 *
 * @param array input by use 
 * @param size  size of the array pass to the function by user
 * @param result result will be stored here after process_array func
 *
 * @return
 *   PROCESS_SUCCESS        - if operation successfull return 0
 *   PROCESS_NULL_ERROR     - if 
 *   PROCESS_SIZE_ERROR     - [Description]
 *   PROCESS_OVERFLOW_ERROR - [Description]
 *
 * @example
 *   [Add a usage example]
 */

int process_array(const int array[], unsigned int size, int* result) {
    // Your implementation
    
    if(result == NULL || array == NULL) {
        return PROCESS_NULL_ERROR;
    }
    if(size > ARRAY_SIZE || size == 0) {
        return PROCESS_NULL_ERROR;
    }
    
    for (size_t i = 0; i < size; i++)
    {
       if ((array[i] > 0 && *result > INT_MAX - array[i]) ||    // Positive overflow
        (array[i] < 0 && *result < INT_MIN - array[i])) {    // Negative overflow
        return PROCESS_OVERFLOW_ERROR;
        }
        *result += array[i];
    }
        return PROCESS_SUCCESS;
}
int main(int argc, char const *argv[])
{
    int array[ARRAY_SIZE] = {1,2,3};
    int result = 0;
    int status = process_array(array, 5,&result);
    if(status == PROCESS_NULL_ERROR)
    {
        printf("Array Should not be Null");
    }
    if(status == PROCESS_SIZE_ERROR)
    {
        printf("Array size is invalid");
    }
    if(status == PROCESS_SUCCESS)
    {
        printf("Result is: %d", result);
    }
    return 0;
}