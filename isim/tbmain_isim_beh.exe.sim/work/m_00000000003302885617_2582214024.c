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
static const char *ng0 = "C:/Users/MichaelShea/Desktop/lab3_guan/counter.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {9U, 0U};
static unsigned int ng4[] = {5U, 0U};
static unsigned int ng5[] = {0U, 0U};
static unsigned int ng6[] = {3U, 0U};
static int ng7[] = {5, 0};
static int ng8[] = {1, 0};
static unsigned int ng9[] = {2U, 0U};
static int ng10[] = {9, 0};



static void Always_50_0(char *t0)
{
    char t13[8];
    char t30[8];
    char t56[8];
    char t70[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
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
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t31;
    char *t32;
    unsigned int t33;
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
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t71;

LAB0:    t1 = (t0 + 3328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 3648);
    *((int *)t2) = 1;
    t3 = (t0 + 3360);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(50, ng0);

LAB5:    xsi_set_current_line(51, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB13;

LAB10:    if (t18 != 0)
        goto LAB12;

LAB11:    *((unsigned int *)t13) = 1;

LAB13:    t12 = (t13 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB49;

LAB46:    if (t18 != 0)
        goto LAB48;

LAB47:    *((unsigned int *)t13) = 1;

LAB49:    t12 = (t13 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB50;

LAB51:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng9)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB75;

LAB72:    if (t18 != 0)
        goto LAB74;

LAB73:    *((unsigned int *)t13) = 1;

LAB75:    t12 = (t13 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB76;

LAB77:
LAB78:
LAB52:
LAB16:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(52, ng0);

LAB9:    xsi_set_current_line(53, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 4, 0LL);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB8;

LAB12:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB13;

LAB14:    xsi_set_current_line(59, ng0);

LAB17:    xsi_set_current_line(60, ng0);
    t26 = (t0 + 1768);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = ((char*)((ng3)));
    memset(t30, 0, 8);
    t31 = (t28 + 4);
    t32 = (t29 + 4);
    t33 = *((unsigned int *)t28);
    t34 = *((unsigned int *)t29);
    t35 = (t33 ^ t34);
    t36 = *((unsigned int *)t31);
    t37 = *((unsigned int *)t32);
    t38 = (t36 ^ t37);
    t39 = (t35 | t38);
    t40 = *((unsigned int *)t31);
    t41 = *((unsigned int *)t32);
    t42 = (t40 | t41);
    t43 = (~(t42));
    t44 = (t39 & t43);
    if (t44 != 0)
        goto LAB21;

LAB18:    if (t42 != 0)
        goto LAB20;

LAB19:    *((unsigned int *)t30) = 1;

LAB21:    t46 = (t30 + 4);
    t47 = *((unsigned int *)t46);
    t48 = (~(t47));
    t49 = *((unsigned int *)t30);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB22;

LAB23:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 4, t5, 32);
    t11 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 4, 0LL);

LAB24:    goto LAB16;

LAB20:    t45 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB21;

LAB22:    xsi_set_current_line(61, ng0);

LAB25:    xsi_set_current_line(62, ng0);
    t52 = (t0 + 1928);
    t53 = (t52 + 56U);
    t54 = *((char **)t53);
    t55 = ((char*)((ng4)));
    memset(t56, 0, 8);
    t57 = (t54 + 4);
    if (*((unsigned int *)t57) != 0)
        goto LAB27;

LAB26:    t58 = (t55 + 4);
    if (*((unsigned int *)t58) != 0)
        goto LAB27;

LAB30:    if (*((unsigned int *)t54) < *((unsigned int *)t55))
        goto LAB28;

LAB29:    t60 = (t56 + 4);
    t61 = *((unsigned int *)t60);
    t62 = (~(t61));
    t63 = *((unsigned int *)t56);
    t64 = (t63 & t62);
    t65 = (t64 != 0);
    if (t65 > 0)
        goto LAB31;

LAB32:    xsi_set_current_line(69, ng0);

LAB35:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB37;

LAB36:    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB37;

LAB40:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB38;

LAB39:    t27 = (t13 + 4);
    t6 = *((unsigned int *)t27);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB41;

LAB42:    xsi_set_current_line(77, ng0);

LAB45:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 4, t5, 32);
    t11 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 4, 0LL);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB43:
LAB33:    goto LAB24;

LAB27:    t59 = (t56 + 4);
    *((unsigned int *)t56) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB29;

LAB28:    *((unsigned int *)t56) = 1;
    goto LAB29;

LAB31:    xsi_set_current_line(63, ng0);

LAB34:    xsi_set_current_line(64, ng0);
    t66 = (t0 + 1928);
    t67 = (t66 + 56U);
    t68 = *((char **)t67);
    t69 = ((char*)((ng2)));
    memset(t70, 0, 8);
    xsi_vlog_unsigned_add(t70, 32, t68, 4, t69, 32);
    t71 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t71, t70, 0, 0, 4, 0LL);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB33;

LAB37:    t26 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB39;

LAB38:    *((unsigned int *)t13) = 1;
    goto LAB39;

LAB41:    xsi_set_current_line(71, ng0);

LAB44:    xsi_set_current_line(72, ng0);
    t28 = (t0 + 2088);
    t29 = (t28 + 56U);
    t31 = *((char **)t29);
    t32 = ((char*)((ng2)));
    memset(t30, 0, 8);
    xsi_vlog_unsigned_add(t30, 32, t31, 4, t32, 32);
    t45 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t45, t30, 0, 0, 4, 0LL);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB43;

LAB48:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB49;

LAB50:    xsi_set_current_line(88, ng0);

LAB53:    xsi_set_current_line(89, ng0);
    t26 = (t0 + 1768);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = ((char*)((ng3)));
    memset(t30, 0, 8);
    t31 = (t28 + 4);
    t32 = (t29 + 4);
    t33 = *((unsigned int *)t28);
    t34 = *((unsigned int *)t29);
    t35 = (t33 ^ t34);
    t36 = *((unsigned int *)t31);
    t37 = *((unsigned int *)t32);
    t38 = (t36 ^ t37);
    t39 = (t35 | t38);
    t40 = *((unsigned int *)t31);
    t41 = *((unsigned int *)t32);
    t42 = (t40 | t41);
    t43 = (~(t42));
    t44 = (t39 & t43);
    if (t44 != 0)
        goto LAB57;

LAB54:    if (t42 != 0)
        goto LAB56;

LAB55:    *((unsigned int *)t30) = 1;

LAB57:    t46 = (t30 + 4);
    t47 = *((unsigned int *)t46);
    t48 = (~(t47));
    t49 = *((unsigned int *)t30);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB58;

LAB59:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng8)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 4, t5, 32);
    t11 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 4, 0LL);

LAB60:    goto LAB52;

LAB56:    t45 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB57;

LAB58:    xsi_set_current_line(90, ng0);

LAB61:    xsi_set_current_line(91, ng0);
    t52 = (t0 + 1928);
    t53 = (t52 + 56U);
    t54 = *((char **)t53);
    t55 = ((char*)((ng7)));
    memset(t56, 0, 8);
    t57 = (t54 + 4);
    if (*((unsigned int *)t57) != 0)
        goto LAB63;

LAB62:    t58 = (t55 + 4);
    if (*((unsigned int *)t58) != 0)
        goto LAB63;

LAB66:    if (*((unsigned int *)t54) < *((unsigned int *)t55))
        goto LAB64;

LAB65:    t60 = (t56 + 4);
    t61 = *((unsigned int *)t60);
    t62 = (~(t61));
    t63 = *((unsigned int *)t56);
    t64 = (t63 & t62);
    t65 = (t64 != 0);
    if (t65 > 0)
        goto LAB67;

LAB68:    xsi_set_current_line(97, ng0);

LAB71:    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB69:    goto LAB60;

LAB63:    t59 = (t56 + 4);
    *((unsigned int *)t56) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB65;

LAB64:    *((unsigned int *)t56) = 1;
    goto LAB65;

LAB67:    xsi_set_current_line(92, ng0);

LAB70:    xsi_set_current_line(93, ng0);
    t66 = (t0 + 1928);
    t67 = (t66 + 56U);
    t68 = *((char **)t67);
    t69 = ((char*)((ng8)));
    memset(t70, 0, 8);
    xsi_vlog_unsigned_add(t70, 32, t68, 4, t69, 32);
    t71 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t71, t70, 0, 0, 4, 0LL);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB69;

LAB74:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB75;

LAB76:    xsi_set_current_line(106, ng0);

LAB79:    xsi_set_current_line(107, ng0);
    t26 = (t0 + 2088);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = ((char*)((ng10)));
    memset(t30, 0, 8);
    t31 = (t28 + 4);
    t32 = (t29 + 4);
    t33 = *((unsigned int *)t28);
    t34 = *((unsigned int *)t29);
    t35 = (t33 ^ t34);
    t36 = *((unsigned int *)t31);
    t37 = *((unsigned int *)t32);
    t38 = (t36 ^ t37);
    t39 = (t35 | t38);
    t40 = *((unsigned int *)t31);
    t41 = *((unsigned int *)t32);
    t42 = (t40 | t41);
    t43 = (~(t42));
    t44 = (t39 & t43);
    if (t44 != 0)
        goto LAB83;

LAB80:    if (t42 != 0)
        goto LAB82;

LAB81:    *((unsigned int *)t30) = 1;

LAB83:    t46 = (t30 + 4);
    t47 = *((unsigned int *)t46);
    t48 = (~(t47));
    t49 = *((unsigned int *)t30);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB84;

LAB85:    xsi_set_current_line(121, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng8)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 4, t5, 32);
    t11 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 4, 0LL);

LAB86:    goto LAB78;

LAB82:    t45 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB83;

LAB84:    xsi_set_current_line(108, ng0);

LAB87:    xsi_set_current_line(109, ng0);
    t52 = (t0 + 2248);
    t53 = (t52 + 56U);
    t54 = *((char **)t53);
    t55 = ((char*)((ng10)));
    memset(t56, 0, 8);
    t57 = (t54 + 4);
    if (*((unsigned int *)t57) != 0)
        goto LAB89;

LAB88:    t58 = (t55 + 4);
    if (*((unsigned int *)t58) != 0)
        goto LAB89;

LAB92:    if (*((unsigned int *)t54) < *((unsigned int *)t55))
        goto LAB90;

LAB91:    t60 = (t56 + 4);
    t61 = *((unsigned int *)t60);
    t62 = (~(t61));
    t63 = *((unsigned int *)t56);
    t64 = (t63 & t62);
    t65 = (t64 != 0);
    if (t65 > 0)
        goto LAB93;

LAB94:    xsi_set_current_line(115, ng0);

LAB97:    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB95:    goto LAB86;

LAB89:    t59 = (t56 + 4);
    *((unsigned int *)t56) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB91;

LAB90:    *((unsigned int *)t56) = 1;
    goto LAB91;

LAB93:    xsi_set_current_line(110, ng0);

LAB96:    xsi_set_current_line(111, ng0);
    t66 = (t0 + 2248);
    t67 = (t66 + 56U);
    t68 = *((char **)t67);
    t69 = ((char*)((ng8)));
    memset(t70, 0, 8);
    xsi_vlog_unsigned_add(t70, 32, t68, 4, t69, 32);
    t71 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t71, t70, 0, 0, 4, 0LL);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB95;

}


extern void work_m_00000000003302885617_2582214024_init()
{
	static char *pe[] = {(void *)Always_50_0};
	xsi_register_didat("work_m_00000000003302885617_2582214024", "isim/tbmain_isim_beh.exe.sim/work/m_00000000003302885617_2582214024.didat");
	xsi_register_executes(pe);
}
