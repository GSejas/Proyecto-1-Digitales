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
static const char *ng0 = "C:/Users/GSejas/Dropbox/Lab digitales/Proyecto 1/PIDterminado/controldelPID.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {4U, 0U};
static unsigned int ng7[] = {5U, 0U};
static unsigned int ng8[] = {6U, 0U};
static unsigned int ng9[] = {7U, 0U};
static int ng10[] = {1, 0};
static unsigned int ng11[] = {504U, 0U};
static unsigned int ng12[] = {493U, 0U};
static unsigned int ng13[] = {436U, 0U};
static unsigned int ng14[] = {18U, 0U};
static unsigned int ng15[] = {150U, 0U};



static void Always_19_0(char *t0)
{
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

LAB0:    t1 = (t0 + 5536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(19, ng0);
    t2 = (t0 + 6352);
    *((int *)t2) = 1;
    t3 = (t0 + 5568);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(20, ng0);
    t4 = (t0 + 2456U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(23, ng0);
    t2 = (t0 + 4616);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4456);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);

LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(21, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 4456);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 3);
    goto LAB7;

}

static void Always_25_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 5784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 6368);
    *((int *)t2) = 1;
    t3 = (t0 + 5816);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(26, ng0);
    t4 = (t0 + 4456);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB5:    t7 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t7, 3);
    if (t8 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB20;

LAB21:
LAB22:    goto LAB2;

LAB6:    xsi_set_current_line(27, ng0);
    t9 = ((char*)((ng3)));
    t10 = (t0 + 4616);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 3);
    goto LAB22;

LAB8:    xsi_set_current_line(28, ng0);
    t3 = (t0 + 2616U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB23;

LAB24:    xsi_set_current_line(31, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4616);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB25:    goto LAB22;

LAB10:    xsi_set_current_line(32, ng0);
    t3 = (t0 + 2616U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4616);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB28:    goto LAB22;

LAB12:    xsi_set_current_line(36, ng0);
    t3 = (t0 + 2616U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB29;

LAB30:    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4616);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB31:    goto LAB22;

LAB14:    xsi_set_current_line(40, ng0);
    t3 = (t0 + 2616U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB32;

LAB33:    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4616);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB34:    goto LAB22;

LAB16:    xsi_set_current_line(44, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 4616);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB22;

LAB18:    xsi_set_current_line(45, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 4616);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB22;

LAB20:    xsi_set_current_line(46, ng0);
    t3 = (t0 + 2296U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB35;

LAB36:    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 4616);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB37:    goto LAB22;

LAB23:    xsi_set_current_line(29, ng0);
    t5 = ((char*)((ng4)));
    t7 = (t0 + 4616);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 3);
    goto LAB25;

LAB26:    xsi_set_current_line(33, ng0);
    t5 = ((char*)((ng5)));
    t7 = (t0 + 4616);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 3);
    goto LAB28;

LAB29:    xsi_set_current_line(37, ng0);
    t5 = ((char*)((ng6)));
    t7 = (t0 + 4616);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 3);
    goto LAB31;

LAB32:    xsi_set_current_line(41, ng0);
    t5 = ((char*)((ng7)));
    t7 = (t0 + 4616);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 3);
    goto LAB34;

LAB35:    xsi_set_current_line(47, ng0);
    t5 = ((char*)((ng2)));
    t7 = (t0 + 4616);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 3);
    goto LAB37;

}

static void Always_53_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 6032U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 6384);
    *((int *)t2) = 1;
    t3 = (t0 + 6064);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(54, ng0);
    t4 = (t0 + 4456);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB5:    t7 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t7, 3);
    if (t8 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB20;

LAB21:
LAB22:    goto LAB2;

LAB6:    xsi_set_current_line(55, ng0);

LAB23:    xsi_set_current_line(56, ng0);
    t9 = ((char*)((ng1)));
    t10 = (t0 + 3016);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 1);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3336);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 3976);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 4136);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 4296);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB22;

LAB8:    xsi_set_current_line(65, ng0);

LAB24:    xsi_set_current_line(66, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 3016);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3336);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 3976);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 4136);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4296);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB22;

LAB10:    xsi_set_current_line(75, ng0);

LAB25:    xsi_set_current_line(76, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 3016);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3336);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 3976);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 4136);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4296);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB22;

LAB12:    xsi_set_current_line(85, ng0);

LAB26:    xsi_set_current_line(86, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 3016);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3336);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 3976);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);
    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 4136);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);
    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4296);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB22;

LAB14:    xsi_set_current_line(95, ng0);

LAB27:    xsi_set_current_line(96, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 3016);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3336);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 3976);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);
    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 4136);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);
    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4296);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);
    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB22;

LAB16:    xsi_set_current_line(105, ng0);

LAB28:    xsi_set_current_line(106, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 3016);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3336);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 3976);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);
    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 4136);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);
    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4296);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB22;

LAB18:    xsi_set_current_line(115, ng0);

LAB29:    xsi_set_current_line(116, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 3016);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3336);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 3976);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);
    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 4136);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4296);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);
    xsi_set_current_line(122, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(123, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(124, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB22;

LAB20:    xsi_set_current_line(125, ng0);

LAB30:    xsi_set_current_line(126, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 3016);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(127, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3336);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(129, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 3976);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);
    xsi_set_current_line(130, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 4136);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);
    xsi_set_current_line(131, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4296);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);
    xsi_set_current_line(132, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(133, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(134, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB22;

}


extern void work_m_00000000001496497215_1202348065_init()
{
	static char *pe[] = {(void *)Always_19_0,(void *)Always_25_1,(void *)Always_53_2};
	xsi_register_didat("work_m_00000000001496497215_1202348065", "isim/prueba_isim_beh.exe.sim/work/m_00000000001496497215_1202348065.didat");
	xsi_register_executes(pe);
}
