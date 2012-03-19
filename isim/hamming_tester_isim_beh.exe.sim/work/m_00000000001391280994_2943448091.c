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

/* This file is designed for use with ISim build 0xcb73ee62 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Donkey/Documents/My Dropbox/Homework/Classes 11(5) Spring/RBT433/Lab 4 - Seq. Detector - Hamming Code/Hamming Decoder/Hamming_Detector/top_module.v";
static int ng1[] = {0, 0};
static int ng2[] = {7, 0};
static unsigned int ng3[] = {120U, 0U};
static int ng4[] = {2, 0};
static unsigned int ng5[] = {102U, 0U};
static int ng6[] = {1, 0};
static unsigned int ng7[] = {85U, 0U};
static unsigned int ng8[] = {0U, 0U};
static unsigned int ng9[] = {1U, 0U};
static unsigned int ng10[] = {2U, 0U};
static unsigned int ng11[] = {3U, 0U};
static unsigned int ng12[] = {4U, 0U};
static int ng13[] = {3, 0};
static unsigned int ng14[] = {5U, 0U};
static int ng15[] = {4, 0};
static unsigned int ng16[] = {6U, 0U};
static int ng17[] = {5, 0};
static unsigned int ng18[] = {7U, 0U};
static int ng19[] = {6, 0};



static void Always_38_0(char *t0)
{
    char t6[8];
    char t16[8];
    char t48[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    unsigned int t53;
    int t54;

LAB0:    t1 = (t0 + 2144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 2340);
    *((int *)t2) = 1;
    t3 = (t0 + 2172);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(39, ng0);

LAB5:    xsi_set_current_line(40, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1620);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1024U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    if (*((unsigned int *)t4) != 0)
        goto LAB7;

LAB6:    t5 = (t2 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t3) < *((unsigned int *)t2))
        goto LAB8;

LAB9:    t8 = (t6 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(45, ng0);

LAB16:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1344);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 & t10);
    *((unsigned int *)t16) = t11;
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t14 = (t16 + 4);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t22 = (t12 | t13);
    *((unsigned int *)t14) = t22;
    t24 = *((unsigned int *)t14);
    t25 = (t24 != 0);
    if (t25 == 1)
        goto LAB17;

LAB18:
LAB19:    memset(t6, 0, 8);
    t18 = (t16 + 4);
    t43 = *((unsigned int *)t16);
    t44 = *((unsigned int *)t16);
    t44 = (t44 & 1);
    if (*((unsigned int *)t18) != 0)
        goto LAB20;

LAB21:    t45 = 1;

LAB23:    t46 = (t45 <= 6);
    if (t46 == 1)
        goto LAB24;

LAB25:    *((unsigned int *)t6) = t44;

LAB22:    t20 = (t0 + 1436);
    t21 = (t0 + 1436);
    t49 = (t21 + 44U);
    t50 = *((char **)t49);
    t51 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t48, t50, 2, t51, 32, 1);
    t52 = (t48 + 4);
    t53 = *((unsigned int *)t52);
    t54 = (!(t53));
    if (t54 == 1)
        goto LAB27;

LAB28:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1344);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 & t10);
    *((unsigned int *)t16) = t11;
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t14 = (t16 + 4);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t22 = (t12 | t13);
    *((unsigned int *)t14) = t22;
    t24 = *((unsigned int *)t14);
    t25 = (t24 != 0);
    if (t25 == 1)
        goto LAB29;

LAB30:
LAB31:    memset(t6, 0, 8);
    t18 = (t16 + 4);
    t43 = *((unsigned int *)t16);
    t44 = *((unsigned int *)t16);
    t44 = (t44 & 1);
    if (*((unsigned int *)t18) != 0)
        goto LAB32;

LAB33:    t45 = 1;

LAB35:    t46 = (t45 <= 6);
    if (t46 == 1)
        goto LAB36;

LAB37:    *((unsigned int *)t6) = t44;

LAB34:    t20 = (t0 + 1436);
    t21 = (t0 + 1436);
    t49 = (t21 + 44U);
    t50 = *((char **)t49);
    t51 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t48, t50, 2, t51, 32, 1);
    t52 = (t48 + 4);
    t53 = *((unsigned int *)t52);
    t54 = (!(t53));
    if (t54 == 1)
        goto LAB39;

LAB40:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1344);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 & t10);
    *((unsigned int *)t16) = t11;
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t14 = (t16 + 4);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t22 = (t12 | t13);
    *((unsigned int *)t14) = t22;
    t24 = *((unsigned int *)t14);
    t25 = (t24 != 0);
    if (t25 == 1)
        goto LAB41;

LAB42:
LAB43:    memset(t6, 0, 8);
    t18 = (t16 + 4);
    t43 = *((unsigned int *)t16);
    t44 = *((unsigned int *)t16);
    t44 = (t44 & 1);
    if (*((unsigned int *)t18) != 0)
        goto LAB44;

LAB45:    t45 = 1;

LAB47:    t46 = (t45 <= 6);
    if (t46 == 1)
        goto LAB48;

LAB49:    *((unsigned int *)t6) = t44;

LAB46:    t20 = (t0 + 1436);
    t21 = (t0 + 1436);
    t49 = (t21 + 44U);
    t50 = *((char **)t49);
    t51 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t48, t50, 2, t51, 32, 1);
    t52 = (t48 + 4);
    t53 = *((unsigned int *)t52);
    t54 = (!(t53));
    if (t54 == 1)
        goto LAB51;

LAB52:    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1436);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);

LAB53:    t5 = ((char*)((ng8)));
    t23 = xsi_vlog_unsigned_case_compare(t4, 3, t5, 3);
    if (t23 == 1)
        goto LAB54;

LAB55:    t2 = ((char*)((ng9)));
    t23 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t23 == 1)
        goto LAB56;

LAB57:    t2 = ((char*)((ng10)));
    t23 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t23 == 1)
        goto LAB58;

LAB59:    t2 = ((char*)((ng11)));
    t23 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t23 == 1)
        goto LAB60;

LAB61:    t2 = ((char*)((ng12)));
    t23 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t23 == 1)
        goto LAB62;

LAB63:    t2 = ((char*)((ng14)));
    t23 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t23 == 1)
        goto LAB64;

LAB65:    t2 = ((char*)((ng16)));
    t23 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t23 == 1)
        goto LAB66;

LAB67:    t2 = ((char*)((ng18)));
    t23 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t23 == 1)
        goto LAB68;

LAB69:
LAB71:
LAB70:    xsi_set_current_line(61, ng0);

LAB129:    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1344);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1436);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB72:    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1620);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB13:    goto LAB2;

LAB7:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB9;

LAB8:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB11:    xsi_set_current_line(42, ng0);
    t14 = (t0 + 840U);
    t15 = *((char **)t14);
    t14 = (t0 + 1344);
    t17 = (t0 + 1344);
    t18 = (t17 + 44U);
    t19 = *((char **)t18);
    t20 = (t0 + 1024U);
    t21 = *((char **)t20);
    xsi_vlog_generic_convert_bit_index(t16, t19, 2, t21, 32, 2);
    t20 = (t16 + 4);
    t22 = *((unsigned int *)t20);
    t23 = (!(t22));
    if (t23 == 1)
        goto LAB14;

LAB15:    goto LAB13;

LAB14:    xsi_vlogvar_assign_value(t14, t15, 0, *((unsigned int *)t16), 1);
    goto LAB15;

LAB17:    t26 = *((unsigned int *)t16);
    t27 = *((unsigned int *)t14);
    *((unsigned int *)t16) = (t26 | t27);
    t15 = (t4 + 4);
    t17 = (t5 + 4);
    t28 = *((unsigned int *)t4);
    t29 = (~(t28));
    t30 = *((unsigned int *)t15);
    t31 = (~(t30));
    t32 = *((unsigned int *)t5);
    t33 = (~(t32));
    t34 = *((unsigned int *)t17);
    t35 = (~(t34));
    t23 = (t29 & t31);
    t36 = (t33 & t35);
    t37 = (~(t23));
    t38 = (~(t36));
    t39 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t39 & t37);
    t40 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t40 & t38);
    t41 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t41 & t37);
    t42 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t42 & t38);
    goto LAB19;

LAB20:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB22;

LAB24:    t43 = (t43 >> 1);
    t47 = (t43 & 1);
    t44 = (t44 ^ t47);

LAB26:    t45 = (t45 + 1);
    goto LAB23;

LAB27:    xsi_vlogvar_assign_value(t20, t6, 0, *((unsigned int *)t48), 1);
    goto LAB28;

LAB29:    t26 = *((unsigned int *)t16);
    t27 = *((unsigned int *)t14);
    *((unsigned int *)t16) = (t26 | t27);
    t15 = (t4 + 4);
    t17 = (t5 + 4);
    t28 = *((unsigned int *)t4);
    t29 = (~(t28));
    t30 = *((unsigned int *)t15);
    t31 = (~(t30));
    t32 = *((unsigned int *)t5);
    t33 = (~(t32));
    t34 = *((unsigned int *)t17);
    t35 = (~(t34));
    t23 = (t29 & t31);
    t36 = (t33 & t35);
    t37 = (~(t23));
    t38 = (~(t36));
    t39 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t39 & t37);
    t40 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t40 & t38);
    t41 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t41 & t37);
    t42 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t42 & t38);
    goto LAB31;

LAB32:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB34;

LAB36:    t43 = (t43 >> 1);
    t47 = (t43 & 1);
    t44 = (t44 ^ t47);

LAB38:    t45 = (t45 + 1);
    goto LAB35;

LAB39:    xsi_vlogvar_assign_value(t20, t6, 0, *((unsigned int *)t48), 1);
    goto LAB40;

LAB41:    t26 = *((unsigned int *)t16);
    t27 = *((unsigned int *)t14);
    *((unsigned int *)t16) = (t26 | t27);
    t15 = (t4 + 4);
    t17 = (t5 + 4);
    t28 = *((unsigned int *)t4);
    t29 = (~(t28));
    t30 = *((unsigned int *)t15);
    t31 = (~(t30));
    t32 = *((unsigned int *)t5);
    t33 = (~(t32));
    t34 = *((unsigned int *)t17);
    t35 = (~(t34));
    t23 = (t29 & t31);
    t36 = (t33 & t35);
    t37 = (~(t23));
    t38 = (~(t36));
    t39 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t39 & t37);
    t40 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t40 & t38);
    t41 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t41 & t37);
    t42 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t42 & t38);
    goto LAB43;

LAB44:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB46;

LAB48:    t43 = (t43 >> 1);
    t47 = (t43 & 1);
    t44 = (t44 ^ t47);

LAB50:    t45 = (t45 + 1);
    goto LAB47;

LAB51:    xsi_vlogvar_assign_value(t20, t6, 0, *((unsigned int *)t48), 1);
    goto LAB52;

LAB54:    xsi_set_current_line(52, ng0);
    t7 = ((char*)((ng1)));
    t8 = (t0 + 1528);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 1);
    goto LAB72;

LAB56:    xsi_set_current_line(53, ng0);
    t3 = (t0 + 1344);
    t5 = (t3 + 36U);
    t7 = *((char **)t5);
    memset(t16, 0, 8);
    t8 = (t16 + 4);
    t14 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 0);
    t11 = (t10 & 1);
    *((unsigned int *)t16) = t11;
    t12 = *((unsigned int *)t14);
    t13 = (t12 >> 0);
    t22 = (t13 & 1);
    *((unsigned int *)t8) = t22;
    memset(t6, 0, 8);
    t15 = (t16 + 4);
    t24 = *((unsigned int *)t15);
    t25 = (~(t24));
    t26 = *((unsigned int *)t16);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB76;

LAB74:    if (*((unsigned int *)t15) == 0)
        goto LAB73;

LAB75:    t17 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t17) = 1;

LAB76:    t18 = (t6 + 4);
    t19 = (t16 + 4);
    t29 = *((unsigned int *)t16);
    t30 = (~(t29));
    *((unsigned int *)t6) = t30;
    *((unsigned int *)t18) = 0;
    if (*((unsigned int *)t19) != 0)
        goto LAB78;

LAB77:    t35 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t35 & 1U);
    t37 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t37 & 1U);
    t20 = (t0 + 1344);
    t21 = (t0 + 1344);
    t49 = (t21 + 44U);
    t50 = *((char **)t49);
    t51 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t48, t50, 2, t51, 32, 1);
    t52 = (t48 + 4);
    t38 = *((unsigned int *)t52);
    t36 = (!(t38));
    if (t36 == 1)
        goto LAB79;

LAB80:    goto LAB72;

LAB58:    xsi_set_current_line(54, ng0);
    t3 = (t0 + 1344);
    t5 = (t3 + 36U);
    t7 = *((char **)t5);
    memset(t16, 0, 8);
    t8 = (t16 + 4);
    t14 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 1);
    t11 = (t10 & 1);
    *((unsigned int *)t16) = t11;
    t12 = *((unsigned int *)t14);
    t13 = (t12 >> 1);
    t22 = (t13 & 1);
    *((unsigned int *)t8) = t22;
    memset(t6, 0, 8);
    t15 = (t16 + 4);
    t24 = *((unsigned int *)t15);
    t25 = (~(t24));
    t26 = *((unsigned int *)t16);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB84;

LAB82:    if (*((unsigned int *)t15) == 0)
        goto LAB81;

LAB83:    t17 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t17) = 1;

LAB84:    t18 = (t6 + 4);
    t19 = (t16 + 4);
    t29 = *((unsigned int *)t16);
    t30 = (~(t29));
    *((unsigned int *)t6) = t30;
    *((unsigned int *)t18) = 0;
    if (*((unsigned int *)t19) != 0)
        goto LAB86;

LAB85:    t35 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t35 & 1U);
    t37 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t37 & 1U);
    t20 = (t0 + 1344);
    t21 = (t0 + 1344);
    t49 = (t21 + 44U);
    t50 = *((char **)t49);
    t51 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t48, t50, 2, t51, 32, 1);
    t52 = (t48 + 4);
    t38 = *((unsigned int *)t52);
    t36 = (!(t38));
    if (t36 == 1)
        goto LAB87;

LAB88:    goto LAB72;

LAB60:    xsi_set_current_line(55, ng0);
    t3 = (t0 + 1344);
    t5 = (t3 + 36U);
    t7 = *((char **)t5);
    memset(t16, 0, 8);
    t8 = (t16 + 4);
    t14 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 2);
    t11 = (t10 & 1);
    *((unsigned int *)t16) = t11;
    t12 = *((unsigned int *)t14);
    t13 = (t12 >> 2);
    t22 = (t13 & 1);
    *((unsigned int *)t8) = t22;
    memset(t6, 0, 8);
    t15 = (t16 + 4);
    t24 = *((unsigned int *)t15);
    t25 = (~(t24));
    t26 = *((unsigned int *)t16);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB92;

LAB90:    if (*((unsigned int *)t15) == 0)
        goto LAB89;

LAB91:    t17 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t17) = 1;

LAB92:    t18 = (t6 + 4);
    t19 = (t16 + 4);
    t29 = *((unsigned int *)t16);
    t30 = (~(t29));
    *((unsigned int *)t6) = t30;
    *((unsigned int *)t18) = 0;
    if (*((unsigned int *)t19) != 0)
        goto LAB94;

LAB93:    t35 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t35 & 1U);
    t37 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t37 & 1U);
    t20 = (t0 + 1344);
    t21 = (t0 + 1344);
    t49 = (t21 + 44U);
    t50 = *((char **)t49);
    t51 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t48, t50, 2, t51, 32, 1);
    t52 = (t48 + 4);
    t38 = *((unsigned int *)t52);
    t36 = (!(t38));
    if (t36 == 1)
        goto LAB95;

LAB96:    goto LAB72;

LAB62:    xsi_set_current_line(56, ng0);
    t3 = (t0 + 1344);
    t5 = (t3 + 36U);
    t7 = *((char **)t5);
    memset(t16, 0, 8);
    t8 = (t16 + 4);
    t14 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 3);
    t11 = (t10 & 1);
    *((unsigned int *)t16) = t11;
    t12 = *((unsigned int *)t14);
    t13 = (t12 >> 3);
    t22 = (t13 & 1);
    *((unsigned int *)t8) = t22;
    memset(t6, 0, 8);
    t15 = (t16 + 4);
    t24 = *((unsigned int *)t15);
    t25 = (~(t24));
    t26 = *((unsigned int *)t16);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB100;

LAB98:    if (*((unsigned int *)t15) == 0)
        goto LAB97;

LAB99:    t17 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t17) = 1;

LAB100:    t18 = (t6 + 4);
    t19 = (t16 + 4);
    t29 = *((unsigned int *)t16);
    t30 = (~(t29));
    *((unsigned int *)t6) = t30;
    *((unsigned int *)t18) = 0;
    if (*((unsigned int *)t19) != 0)
        goto LAB102;

LAB101:    t35 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t35 & 1U);
    t37 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t37 & 1U);
    t20 = (t0 + 1344);
    t21 = (t0 + 1344);
    t49 = (t21 + 44U);
    t50 = *((char **)t49);
    t51 = ((char*)((ng13)));
    xsi_vlog_generic_convert_bit_index(t48, t50, 2, t51, 32, 1);
    t52 = (t48 + 4);
    t38 = *((unsigned int *)t52);
    t36 = (!(t38));
    if (t36 == 1)
        goto LAB103;

LAB104:    goto LAB72;

LAB64:    xsi_set_current_line(57, ng0);
    t3 = (t0 + 1344);
    t5 = (t3 + 36U);
    t7 = *((char **)t5);
    memset(t16, 0, 8);
    t8 = (t16 + 4);
    t14 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 4);
    t11 = (t10 & 1);
    *((unsigned int *)t16) = t11;
    t12 = *((unsigned int *)t14);
    t13 = (t12 >> 4);
    t22 = (t13 & 1);
    *((unsigned int *)t8) = t22;
    memset(t6, 0, 8);
    t15 = (t16 + 4);
    t24 = *((unsigned int *)t15);
    t25 = (~(t24));
    t26 = *((unsigned int *)t16);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB108;

LAB106:    if (*((unsigned int *)t15) == 0)
        goto LAB105;

LAB107:    t17 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t17) = 1;

LAB108:    t18 = (t6 + 4);
    t19 = (t16 + 4);
    t29 = *((unsigned int *)t16);
    t30 = (~(t29));
    *((unsigned int *)t6) = t30;
    *((unsigned int *)t18) = 0;
    if (*((unsigned int *)t19) != 0)
        goto LAB110;

LAB109:    t35 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t35 & 1U);
    t37 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t37 & 1U);
    t20 = (t0 + 1344);
    t21 = (t0 + 1344);
    t49 = (t21 + 44U);
    t50 = *((char **)t49);
    t51 = ((char*)((ng15)));
    xsi_vlog_generic_convert_bit_index(t48, t50, 2, t51, 32, 1);
    t52 = (t48 + 4);
    t38 = *((unsigned int *)t52);
    t36 = (!(t38));
    if (t36 == 1)
        goto LAB111;

LAB112:    goto LAB72;

LAB66:    xsi_set_current_line(58, ng0);
    t3 = (t0 + 1344);
    t5 = (t3 + 36U);
    t7 = *((char **)t5);
    memset(t16, 0, 8);
    t8 = (t16 + 4);
    t14 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 5);
    t11 = (t10 & 1);
    *((unsigned int *)t16) = t11;
    t12 = *((unsigned int *)t14);
    t13 = (t12 >> 5);
    t22 = (t13 & 1);
    *((unsigned int *)t8) = t22;
    memset(t6, 0, 8);
    t15 = (t16 + 4);
    t24 = *((unsigned int *)t15);
    t25 = (~(t24));
    t26 = *((unsigned int *)t16);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB116;

LAB114:    if (*((unsigned int *)t15) == 0)
        goto LAB113;

LAB115:    t17 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t17) = 1;

LAB116:    t18 = (t6 + 4);
    t19 = (t16 + 4);
    t29 = *((unsigned int *)t16);
    t30 = (~(t29));
    *((unsigned int *)t6) = t30;
    *((unsigned int *)t18) = 0;
    if (*((unsigned int *)t19) != 0)
        goto LAB118;

LAB117:    t35 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t35 & 1U);
    t37 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t37 & 1U);
    t20 = (t0 + 1344);
    t21 = (t0 + 1344);
    t49 = (t21 + 44U);
    t50 = *((char **)t49);
    t51 = ((char*)((ng17)));
    xsi_vlog_generic_convert_bit_index(t48, t50, 2, t51, 32, 1);
    t52 = (t48 + 4);
    t38 = *((unsigned int *)t52);
    t36 = (!(t38));
    if (t36 == 1)
        goto LAB119;

LAB120:    goto LAB72;

LAB68:    xsi_set_current_line(59, ng0);
    t3 = (t0 + 1344);
    t5 = (t3 + 36U);
    t7 = *((char **)t5);
    memset(t16, 0, 8);
    t8 = (t16 + 4);
    t14 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 6);
    t11 = (t10 & 1);
    *((unsigned int *)t16) = t11;
    t12 = *((unsigned int *)t14);
    t13 = (t12 >> 6);
    t22 = (t13 & 1);
    *((unsigned int *)t8) = t22;
    memset(t6, 0, 8);
    t15 = (t16 + 4);
    t24 = *((unsigned int *)t15);
    t25 = (~(t24));
    t26 = *((unsigned int *)t16);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB124;

LAB122:    if (*((unsigned int *)t15) == 0)
        goto LAB121;

LAB123:    t17 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t17) = 1;

LAB124:    t18 = (t6 + 4);
    t19 = (t16 + 4);
    t29 = *((unsigned int *)t16);
    t30 = (~(t29));
    *((unsigned int *)t6) = t30;
    *((unsigned int *)t18) = 0;
    if (*((unsigned int *)t19) != 0)
        goto LAB126;

LAB125:    t35 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t35 & 1U);
    t37 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t37 & 1U);
    t20 = (t0 + 1344);
    t21 = (t0 + 1344);
    t49 = (t21 + 44U);
    t50 = *((char **)t49);
    t51 = ((char*)((ng19)));
    xsi_vlog_generic_convert_bit_index(t48, t50, 2, t51, 32, 1);
    t52 = (t48 + 4);
    t38 = *((unsigned int *)t52);
    t36 = (!(t38));
    if (t36 == 1)
        goto LAB127;

LAB128:    goto LAB72;

LAB73:    *((unsigned int *)t6) = 1;
    goto LAB76;

LAB78:    t31 = *((unsigned int *)t6);
    t32 = *((unsigned int *)t19);
    *((unsigned int *)t6) = (t31 | t32);
    t33 = *((unsigned int *)t18);
    t34 = *((unsigned int *)t19);
    *((unsigned int *)t18) = (t33 | t34);
    goto LAB77;

LAB79:    xsi_vlogvar_assign_value(t20, t6, 0, *((unsigned int *)t48), 1);
    goto LAB80;

LAB81:    *((unsigned int *)t6) = 1;
    goto LAB84;

LAB86:    t31 = *((unsigned int *)t6);
    t32 = *((unsigned int *)t19);
    *((unsigned int *)t6) = (t31 | t32);
    t33 = *((unsigned int *)t18);
    t34 = *((unsigned int *)t19);
    *((unsigned int *)t18) = (t33 | t34);
    goto LAB85;

LAB87:    xsi_vlogvar_assign_value(t20, t6, 0, *((unsigned int *)t48), 1);
    goto LAB88;

LAB89:    *((unsigned int *)t6) = 1;
    goto LAB92;

LAB94:    t31 = *((unsigned int *)t6);
    t32 = *((unsigned int *)t19);
    *((unsigned int *)t6) = (t31 | t32);
    t33 = *((unsigned int *)t18);
    t34 = *((unsigned int *)t19);
    *((unsigned int *)t18) = (t33 | t34);
    goto LAB93;

LAB95:    xsi_vlogvar_assign_value(t20, t6, 0, *((unsigned int *)t48), 1);
    goto LAB96;

LAB97:    *((unsigned int *)t6) = 1;
    goto LAB100;

LAB102:    t31 = *((unsigned int *)t6);
    t32 = *((unsigned int *)t19);
    *((unsigned int *)t6) = (t31 | t32);
    t33 = *((unsigned int *)t18);
    t34 = *((unsigned int *)t19);
    *((unsigned int *)t18) = (t33 | t34);
    goto LAB101;

LAB103:    xsi_vlogvar_assign_value(t20, t6, 0, *((unsigned int *)t48), 1);
    goto LAB104;

LAB105:    *((unsigned int *)t6) = 1;
    goto LAB108;

LAB110:    t31 = *((unsigned int *)t6);
    t32 = *((unsigned int *)t19);
    *((unsigned int *)t6) = (t31 | t32);
    t33 = *((unsigned int *)t18);
    t34 = *((unsigned int *)t19);
    *((unsigned int *)t18) = (t33 | t34);
    goto LAB109;

LAB111:    xsi_vlogvar_assign_value(t20, t6, 0, *((unsigned int *)t48), 1);
    goto LAB112;

LAB113:    *((unsigned int *)t6) = 1;
    goto LAB116;

LAB118:    t31 = *((unsigned int *)t6);
    t32 = *((unsigned int *)t19);
    *((unsigned int *)t6) = (t31 | t32);
    t33 = *((unsigned int *)t18);
    t34 = *((unsigned int *)t19);
    *((unsigned int *)t18) = (t33 | t34);
    goto LAB117;

LAB119:    xsi_vlogvar_assign_value(t20, t6, 0, *((unsigned int *)t48), 1);
    goto LAB120;

LAB121:    *((unsigned int *)t6) = 1;
    goto LAB124;

LAB126:    t31 = *((unsigned int *)t6);
    t32 = *((unsigned int *)t19);
    *((unsigned int *)t6) = (t31 | t32);
    t33 = *((unsigned int *)t18);
    t34 = *((unsigned int *)t19);
    *((unsigned int *)t18) = (t33 | t34);
    goto LAB125;

LAB127:    xsi_vlogvar_assign_value(t20, t6, 0, *((unsigned int *)t48), 1);
    goto LAB128;

}


extern void work_m_00000000001391280994_2943448091_init()
{
	static char *pe[] = {(void *)Always_38_0};
	xsi_register_didat("work_m_00000000001391280994_2943448091", "isim/hamming_tester_isim_beh.exe.sim/work/m_00000000001391280994_2943448091.didat");
	xsi_register_executes(pe);
}
