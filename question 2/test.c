#include <stdio.h>
#include <sys/syscall.h>
#include <linux/kernel.h>
#include <unistd.h>
#include <errno.h>

#define SYS_2D_MEMCPY 451

void check_equal(float lhs[4][4], float rhs[4][4], int l, int m)
{

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (lhs[i][j] != rhs[i][j])
            {
                printf("Error : LHS[%d][%d] != RHS[%d][%d]\n", i, j, i, j);
                return;
            }
        }
    }
    printf("Message : Success LHS = RHS \n");
}
int main()
{
    float src_arr[4][4] = {{5.0, 6.0}, {7.0, 8.0}, {8.0, 9.0}, {9.0, 10.0}};
    float dest_arr[4][4];

    float sys_call_status;

    sys_call_status = syscall(SYS_2D_MEMCPY, src_arr, dest_arr, 4, 4);

    if (sys_call_status == 0)
    {
        printf("Message  SUCCESS \n");
        // check_equal(src_arr, dest_arr, 2, 2);
    }
    else if (sys_call_status == -1)
    {
        printf("Message : Error in copying \n");
    }

    check_equal(src_arr, dest_arr, 4, 4);

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%f", dest_arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}