/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000002255795864_3598138731_init();
    work_m_00000000001588655007_2359452430_init();
    work_m_00000000001455377371_2030911003_init();
    work_m_00000000003302885617_2582214024_init();
    work_m_00000000002979123941_0286164271_init();
    work_m_00000000002945641099_0997497503_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002945641099_0997497503");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
