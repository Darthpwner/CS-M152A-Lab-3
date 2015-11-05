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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/MichaelShea/Desktop/lab3_guan/fsm.v";
static unsigned int ng1[] = {1U, 0U};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {4U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {2U, 0U};
static int ng6[] = {0, 0};
static unsigned int ng7[] = {0U, 0U};



static void Always_53_0(char *t0)
{
    char t9[8];
    char t33[8];
    char t55[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    char *t54;
    char *t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;

LAB0:    t1 = (t0 + 4808U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 5128);
    *((int *)t2) = 1;
    t3 = (t0 + 4840);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(54, ng0);

LAB5:    xsi_set_current_line(55, ng0);
    t4 = (t0 + 3888);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 3728);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 3, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 3888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3408);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 3, 0LL);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 3728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB6:    t5 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 3, t5, 3);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t8 == 1)
        goto LAB13;

LAB14:
LAB16:
LAB15:    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB17:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 3728);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng7)));
    memset(t9, 0, 8);
    t7 = (t5 + 4);
    t10 = (t6 + 4);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t6);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t7);
    t16 = *((unsigned int *)t10);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t7);
    t20 = *((unsigned int *)t10);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB128;

LAB125:    if (t21 != 0)
        goto LAB127;

LAB126:    *((unsigned int *)t9) = 1;

LAB128:    t24 = (t9 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB129;

LAB130:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 3728);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t9, 0, 8);
    t7 = (t5 + 4);
    t10 = (t6 + 4);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t6);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t7);
    t16 = *((unsigned int *)t10);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t7);
    t20 = *((unsigned int *)t10);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB136;

LAB133:    if (t21 != 0)
        goto LAB135;

LAB134:    *((unsigned int *)t9) = 1;

LAB136:    t24 = (t9 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB137;

LAB138:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 3728);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng5)));
    memset(t9, 0, 8);
    t7 = (t5 + 4);
    t10 = (t6 + 4);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t6);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t7);
    t16 = *((unsigned int *)t10);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t7);
    t20 = *((unsigned int *)t10);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB144;

LAB141:    if (t21 != 0)
        goto LAB143;

LAB142:    *((unsigned int *)t9) = 1;

LAB144:    t24 = (t9 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB145;

LAB146:    xsi_set_current_line(117, ng0);
    t2 = (t0 + 3728);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng4)));
    memset(t9, 0, 8);
    t7 = (t5 + 4);
    t10 = (t6 + 4);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t6);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t7);
    t16 = *((unsigned int *)t10);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t7);
    t20 = *((unsigned int *)t10);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB152;

LAB149:    if (t21 != 0)
        goto LAB151;

LAB150:    *((unsigned int *)t9) = 1;

LAB152:    t24 = (t9 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB153;

LAB154:    xsi_set_current_line(122, ng0);
    t2 = (t0 + 3728);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
    memset(t9, 0, 8);
    t7 = (t5 + 4);
    t10 = (t6 + 4);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t6);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t7);
    t16 = *((unsigned int *)t10);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t7);
    t20 = *((unsigned int *)t10);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB160;

LAB157:    if (t21 != 0)
        goto LAB159;

LAB158:    *((unsigned int *)t9) = 1;

LAB160:    t24 = (t9 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB161;

LAB162:
LAB163:
LAB155:
LAB147:
LAB139:
LAB131:    goto LAB2;

LAB7:    xsi_set_current_line(59, ng0);

LAB18:    xsi_set_current_line(60, ng0);
    t6 = (t0 + 2368U);
    t7 = *((char **)t6);
    t6 = ((char*)((ng2)));
    memset(t9, 0, 8);
    t10 = (t7 + 4);
    t11 = (t6 + 4);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t6);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t10);
    t16 = *((unsigned int *)t11);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t11);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB22;

LAB19:    if (t21 != 0)
        goto LAB21;

LAB20:    *((unsigned int *)t9) = 1;

LAB22:    t25 = (t9 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB23;

LAB24:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t9, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t12 = *((unsigned int *)t3);
    t13 = *((unsigned int *)t2);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t5);
    t16 = *((unsigned int *)t6);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t6);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB29;

LAB26:    if (t21 != 0)
        goto LAB28;

LAB27:    *((unsigned int *)t9) = 1;

LAB29:    t10 = (t9 + 4);
    t26 = *((unsigned int *)t10);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB30;

LAB31:
LAB32:
LAB25:    goto LAB17;

LAB9:    xsi_set_current_line(68, ng0);

LAB41:    xsi_set_current_line(69, ng0);
    t3 = (t0 + 2368U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t9, 0, 8);
    t6 = (t5 + 4);
    t7 = (t3 + 4);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t3);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t7);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t6);
    t20 = *((unsigned int *)t7);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB45;

LAB42:    if (t21 != 0)
        goto LAB44;

LAB43:    *((unsigned int *)t9) = 1;

LAB45:    t11 = (t9 + 4);
    t26 = *((unsigned int *)t11);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB46;

LAB47:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 2208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t9, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t12 = *((unsigned int *)t3);
    t13 = *((unsigned int *)t2);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t5);
    t16 = *((unsigned int *)t6);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t6);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB52;

LAB49:    if (t21 != 0)
        goto LAB51;

LAB50:    *((unsigned int *)t9) = 1;

LAB52:    t10 = (t9 + 4);
    t26 = *((unsigned int *)t10);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB53;

LAB54:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 2208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t9, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t12 = *((unsigned int *)t3);
    t13 = *((unsigned int *)t2);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t5);
    t16 = *((unsigned int *)t6);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t6);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB59;

LAB56:    if (t21 != 0)
        goto LAB58;

LAB57:    *((unsigned int *)t9) = 1;

LAB59:    t10 = (t9 + 4);
    t26 = *((unsigned int *)t10);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB60;

LAB61:
LAB62:
LAB55:
LAB48:    goto LAB17;

LAB11:    xsi_set_current_line(78, ng0);

LAB71:    xsi_set_current_line(79, ng0);
    t3 = (t0 + 2368U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t9, 0, 8);
    t6 = (t5 + 4);
    t7 = (t3 + 4);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t3);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t7);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t6);
    t20 = *((unsigned int *)t7);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB75;

LAB72:    if (t21 != 0)
        goto LAB74;

LAB73:    *((unsigned int *)t9) = 1;

LAB75:    t11 = (t9 + 4);
    t26 = *((unsigned int *)t11);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB76;

LAB77:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 2208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t9, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t12 = *((unsigned int *)t3);
    t13 = *((unsigned int *)t2);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t5);
    t16 = *((unsigned int *)t6);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t6);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB82;

LAB79:    if (t21 != 0)
        goto LAB81;

LAB80:    *((unsigned int *)t9) = 1;

LAB82:    t10 = (t9 + 4);
    t26 = *((unsigned int *)t10);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB83;

LAB84:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 2208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t9, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t12 = *((unsigned int *)t3);
    t13 = *((unsigned int *)t2);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t5);
    t16 = *((unsigned int *)t6);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t6);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB89;

LAB86:    if (t21 != 0)
        goto LAB88;

LAB87:    *((unsigned int *)t9) = 1;

LAB89:    t10 = (t9 + 4);
    t26 = *((unsigned int *)t10);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB90;

LAB91:
LAB92:
LAB85:
LAB78:    goto LAB17;

LAB13:    xsi_set_current_line(88, ng0);

LAB101:    xsi_set_current_line(89, ng0);
    t3 = (t0 + 2368U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng6)));
    memset(t9, 0, 8);
    t6 = (t5 + 4);
    t7 = (t3 + 4);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t3);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t7);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t6);
    t20 = *((unsigned int *)t7);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB105;

LAB102:    if (t21 != 0)
        goto LAB104;

LAB103:    *((unsigned int *)t9) = 1;

LAB105:    t11 = (t9 + 4);
    t26 = *((unsigned int *)t11);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB106;

LAB107:
LAB108:    goto LAB17;

LAB21:    t24 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB22;

LAB23:    xsi_set_current_line(60, ng0);
    t31 = ((char*)((ng3)));
    t32 = (t0 + 3888);
    xsi_vlogvar_wait_assign_value(t32, t31, 0, 0, 3, 0LL);
    goto LAB25;

LAB28:    t7 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB29;

LAB30:    xsi_set_current_line(62, ng0);

LAB33:    xsi_set_current_line(63, ng0);
    t11 = (t0 + 1888U);
    t24 = *((char **)t11);
    t11 = ((char*)((ng2)));
    memset(t33, 0, 8);
    t25 = (t24 + 4);
    t31 = (t11 + 4);
    t34 = *((unsigned int *)t24);
    t35 = *((unsigned int *)t11);
    t36 = (t34 ^ t35);
    t37 = *((unsigned int *)t25);
    t38 = *((unsigned int *)t31);
    t39 = (t37 ^ t38);
    t40 = (t36 | t39);
    t41 = *((unsigned int *)t25);
    t42 = *((unsigned int *)t31);
    t43 = (t41 | t42);
    t44 = (~(t43));
    t45 = (t40 & t44);
    if (t45 != 0)
        goto LAB37;

LAB34:    if (t43 != 0)
        goto LAB36;

LAB35:    *((unsigned int *)t33) = 1;

LAB37:    t46 = (t33 + 4);
    t47 = *((unsigned int *)t46);
    t48 = (~(t47));
    t49 = *((unsigned int *)t33);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB38;

LAB39:    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB40:    goto LAB32;

LAB36:    t32 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB37;

LAB38:    xsi_set_current_line(63, ng0);
    t52 = ((char*)((ng4)));
    t53 = (t0 + 3888);
    xsi_vlogvar_wait_assign_value(t53, t52, 0, 0, 3, 0LL);
    goto LAB40;

LAB44:    t10 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB45;

LAB46:    xsi_set_current_line(69, ng0);
    t24 = ((char*)((ng3)));
    t25 = (t0 + 3888);
    xsi_vlogvar_wait_assign_value(t25, t24, 0, 0, 3, 0LL);
    goto LAB48;

LAB51:    t7 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB52;

LAB53:    xsi_set_current_line(70, ng0);
    t11 = ((char*)((ng1)));
    t24 = (t0 + 3888);
    xsi_vlogvar_wait_assign_value(t24, t11, 0, 0, 3, 0LL);
    goto LAB55;

LAB58:    t7 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB59;

LAB60:    xsi_set_current_line(72, ng0);

LAB63:    xsi_set_current_line(73, ng0);
    t11 = (t0 + 1888U);
    t24 = *((char **)t11);
    t11 = ((char*)((ng2)));
    memset(t33, 0, 8);
    t25 = (t24 + 4);
    t31 = (t11 + 4);
    t34 = *((unsigned int *)t24);
    t35 = *((unsigned int *)t11);
    t36 = (t34 ^ t35);
    t37 = *((unsigned int *)t25);
    t38 = *((unsigned int *)t31);
    t39 = (t37 ^ t38);
    t40 = (t36 | t39);
    t41 = *((unsigned int *)t25);
    t42 = *((unsigned int *)t31);
    t43 = (t41 | t42);
    t44 = (~(t43));
    t45 = (t40 & t44);
    if (t45 != 0)
        goto LAB67;

LAB64:    if (t43 != 0)
        goto LAB66;

LAB65:    *((unsigned int *)t33) = 1;

LAB67:    t46 = (t33 + 4);
    t47 = *((unsigned int *)t46);
    t48 = (~(t47));
    t49 = *((unsigned int *)t33);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB68;

LAB69:    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB70:    goto LAB62;

LAB66:    t32 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB67;

LAB68:    xsi_set_current_line(73, ng0);
    t52 = ((char*)((ng4)));
    t53 = (t0 + 3888);
    xsi_vlogvar_wait_assign_value(t53, t52, 0, 0, 3, 0LL);
    goto LAB70;

LAB74:    t10 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB75;

LAB76:    xsi_set_current_line(79, ng0);
    t24 = ((char*)((ng3)));
    t25 = (t0 + 3888);
    xsi_vlogvar_wait_assign_value(t25, t24, 0, 0, 3, 0LL);
    goto LAB78;

LAB81:    t7 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB82;

LAB83:    xsi_set_current_line(80, ng0);
    t11 = ((char*)((ng1)));
    t24 = (t0 + 3888);
    xsi_vlogvar_wait_assign_value(t24, t11, 0, 0, 3, 0LL);
    goto LAB85;

LAB88:    t7 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB89;

LAB90:    xsi_set_current_line(82, ng0);

LAB93:    xsi_set_current_line(83, ng0);
    t11 = (t0 + 1888U);
    t24 = *((char **)t11);
    t11 = ((char*)((ng2)));
    memset(t33, 0, 8);
    t25 = (t24 + 4);
    t31 = (t11 + 4);
    t34 = *((unsigned int *)t24);
    t35 = *((unsigned int *)t11);
    t36 = (t34 ^ t35);
    t37 = *((unsigned int *)t25);
    t38 = *((unsigned int *)t31);
    t39 = (t37 ^ t38);
    t40 = (t36 | t39);
    t41 = *((unsigned int *)t25);
    t42 = *((unsigned int *)t31);
    t43 = (t41 | t42);
    t44 = (~(t43));
    t45 = (t40 & t44);
    if (t45 != 0)
        goto LAB97;

LAB94:    if (t43 != 0)
        goto LAB96;

LAB95:    *((unsigned int *)t33) = 1;

LAB97:    t46 = (t33 + 4);
    t47 = *((unsigned int *)t46);
    t48 = (~(t47));
    t49 = *((unsigned int *)t33);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB98;

LAB99:    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB100:    goto LAB92;

LAB96:    t32 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB97;

LAB98:    xsi_set_current_line(83, ng0);
    t52 = ((char*)((ng4)));
    t53 = (t0 + 3888);
    xsi_vlogvar_wait_assign_value(t53, t52, 0, 0, 3, 0LL);
    goto LAB100;

LAB104:    t10 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB105;

LAB106:    xsi_set_current_line(90, ng0);

LAB109:    xsi_set_current_line(91, ng0);
    t24 = (t0 + 2208U);
    t25 = *((char **)t24);
    t24 = ((char*)((ng2)));
    memset(t33, 0, 8);
    t31 = (t25 + 4);
    t32 = (t24 + 4);
    t34 = *((unsigned int *)t25);
    t35 = *((unsigned int *)t24);
    t36 = (t34 ^ t35);
    t37 = *((unsigned int *)t31);
    t38 = *((unsigned int *)t32);
    t39 = (t37 ^ t38);
    t40 = (t36 | t39);
    t41 = *((unsigned int *)t31);
    t42 = *((unsigned int *)t32);
    t43 = (t41 | t42);
    t44 = (~(t43));
    t45 = (t40 & t44);
    if (t45 != 0)
        goto LAB113;

LAB110:    if (t43 != 0)
        goto LAB112;

LAB111:    *((unsigned int *)t33) = 1;

LAB113:    t52 = (t33 + 4);
    t47 = *((unsigned int *)t52);
    t48 = (~(t47));
    t49 = *((unsigned int *)t33);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB114;

LAB115:    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB116:    goto LAB108;

LAB112:    t46 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t46) = 1;
    goto LAB113;

LAB114:    xsi_set_current_line(92, ng0);

LAB117:    xsi_set_current_line(93, ng0);
    t53 = (t0 + 1888U);
    t54 = *((char **)t53);
    t53 = ((char*)((ng6)));
    memset(t55, 0, 8);
    t56 = (t54 + 4);
    t57 = (t53 + 4);
    t58 = *((unsigned int *)t54);
    t59 = *((unsigned int *)t53);
    t60 = (t58 ^ t59);
    t61 = *((unsigned int *)t56);
    t62 = *((unsigned int *)t57);
    t63 = (t61 ^ t62);
    t64 = (t60 | t63);
    t65 = *((unsigned int *)t56);
    t66 = *((unsigned int *)t57);
    t67 = (t65 | t66);
    t68 = (~(t67));
    t69 = (t64 & t68);
    if (t69 != 0)
        goto LAB121;

LAB118:    if (t67 != 0)
        goto LAB120;

LAB119:    *((unsigned int *)t55) = 1;

LAB121:    t71 = (t55 + 4);
    t72 = *((unsigned int *)t71);
    t73 = (~(t72));
    t74 = *((unsigned int *)t55);
    t75 = (t74 & t73);
    t76 = (t75 != 0);
    if (t76 > 0)
        goto LAB122;

LAB123:    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB124:    goto LAB116;

LAB120:    t70 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t70) = 1;
    goto LAB121;

LAB122:    xsi_set_current_line(93, ng0);
    t77 = ((char*)((ng5)));
    t78 = (t0 + 3888);
    xsi_vlogvar_wait_assign_value(t78, t77, 0, 0, 3, 0LL);
    goto LAB124;

LAB127:    t11 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB128;

LAB129:    xsi_set_current_line(103, ng0);

LAB132:    xsi_set_current_line(104, ng0);
    t25 = (t0 + 2848U);
    t31 = *((char **)t25);
    t25 = (t0 + 3568);
    xsi_vlogvar_wait_assign_value(t25, t31, 0, 0, 1, 0LL);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB131;

LAB135:    t11 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB136;

LAB137:    xsi_set_current_line(108, ng0);

LAB140:    xsi_set_current_line(109, ng0);
    t25 = (t0 + 2848U);
    t31 = *((char **)t25);
    t25 = (t0 + 3568);
    xsi_vlogvar_wait_assign_value(t25, t31, 0, 0, 1, 0LL);
    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB139;

LAB143:    t11 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB144;

LAB145:    xsi_set_current_line(113, ng0);

LAB148:    xsi_set_current_line(114, ng0);
    t25 = (t0 + 3008U);
    t31 = *((char **)t25);
    t25 = (t0 + 3568);
    xsi_vlogvar_wait_assign_value(t25, t31, 0, 0, 1, 0LL);
    xsi_set_current_line(115, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB147;

LAB151:    t11 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB152;

LAB153:    xsi_set_current_line(118, ng0);

LAB156:    xsi_set_current_line(119, ng0);
    t25 = (t0 + 3008U);
    t31 = *((char **)t25);
    t25 = (t0 + 3568);
    xsi_vlogvar_wait_assign_value(t25, t31, 0, 0, 1, 0LL);
    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB155;

LAB159:    t11 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB160;

LAB161:    xsi_set_current_line(123, ng0);

LAB164:    xsi_set_current_line(124, ng0);
    t25 = (t0 + 2848U);
    t31 = *((char **)t25);
    t25 = (t0 + 3568);
    xsi_vlogvar_wait_assign_value(t25, t31, 0, 0, 1, 0LL);
    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB163;

}


extern void work_m_00000000001455377371_2030911003_init()
{
	static char *pe[] = {(void *)Always_53_0};
	xsi_register_didat("work_m_00000000001455377371_2030911003", "isim/tbmain_isim_beh.exe.sim/work/m_00000000001455377371_2030911003.didat");
	xsi_register_executes(pe);
}
