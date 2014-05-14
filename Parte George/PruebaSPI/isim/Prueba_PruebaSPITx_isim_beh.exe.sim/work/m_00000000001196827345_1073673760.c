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
static const char *ng0 = "C:/Users/GSejas/Dropbox/Lab digitales/New/PruebaSPI/ShiftRegPISOIzq.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};



static void Always_11_0(char *t0)
{
    char t13[8];
    char t20[8];
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
    char *t21;
    char *t22;
    char *t23;

LAB0:    t1 = (t0 + 3304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(11, ng0);
    t2 = (t0 + 3624);
    *((int *)t2) = 1;
    t3 = (t0 + 3336);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(13, ng0);
    t4 = (t0 + 1344U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(15, ng0);
    t2 = (t0 + 1664U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB8;

LAB9:    xsi_set_current_line(20, ng0);
    t2 = (t0 + 1504U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 2224);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2224);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);

LAB14:
LAB10:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(14, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2224);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    goto LAB7;

LAB8:    xsi_set_current_line(16, ng0);

LAB11:    xsi_set_current_line(17, ng0);
    t4 = (t0 + 1824U);
    t5 = *((char **)t4);
    memset(t13, 0, 8);
    t4 = (t13 + 4);
    t11 = (t5 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (t14 >> 0);
    *((unsigned int *)t13) = t15;
    t16 = *((unsigned int *)t11);
    t17 = (t16 >> 0);
    *((unsigned int *)t4) = t17;
    t18 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t18 & 127U);
    t19 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t19 & 127U);
    t12 = (t0 + 2384);
    xsi_vlogvar_wait_assign_value(t12, t13, 0, 0, 7, 0LL);
    xsi_set_current_line(18, ng0);
    t2 = (t0 + 1824U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 7);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 7);
    t14 = (t10 & 1);
    *((unsigned int *)t2) = t14;
    t5 = (t0 + 2224);
    xsi_vlogvar_wait_assign_value(t5, t13, 0, 0, 1, 0LL);
    goto LAB10;

LAB12:    xsi_set_current_line(21, ng0);

LAB15:    xsi_set_current_line(22, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 2384);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    memset(t20, 0, 8);
    t21 = (t20 + 4);
    t22 = (t12 + 4);
    t14 = *((unsigned int *)t12);
    t15 = (t14 >> 0);
    *((unsigned int *)t20) = t15;
    t16 = *((unsigned int *)t22);
    t17 = (t16 >> 0);
    *((unsigned int *)t21) = t17;
    t18 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t18 & 63U);
    t19 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t19 & 63U);
    xsi_vlogtype_concat(t13, 7, 7, 2U, t20, 6, t4, 1);
    t23 = (t0 + 2384);
    xsi_vlogvar_wait_assign_value(t23, t13, 0, 0, 7, 0LL);
    xsi_set_current_line(23, ng0);
    t2 = (t0 + 2384);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 6);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 6);
    t14 = (t10 & 1);
    *((unsigned int *)t5) = t14;
    t12 = (t0 + 2224);
    xsi_vlogvar_wait_assign_value(t12, t13, 0, 0, 1, 0LL);
    goto LAB14;

}


extern void work_m_00000000001196827345_1073673760_init()
{
	static char *pe[] = {(void *)Always_11_0};
	xsi_register_didat("work_m_00000000001196827345_1073673760", "isim/Prueba_PruebaSPITx_isim_beh.exe.sim/work/m_00000000001196827345_1073673760.didat");
	xsi_register_executes(pe);
}
