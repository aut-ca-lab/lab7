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
static const char *ng0 = "E:/Education/CA/Lab/LAB_7/LAB_7/dual_port_ram.vhd";
extern char *IEEE_P_1242562249;
extern char *IEEE_P_2592010699;

int ieee_p_1242562249_sub_1657552908_1035706684(char *, char *, char *);
char *ieee_p_1242562249_sub_180853171_1035706684(char *, char *, int , int );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_2845203386_1516540902_p_0(char *t0)
{
    char t8[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    int t6;
    int t7;
    char *t9;
    char *t10;
    char *t11;
    int t12;
    int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned char t22;
    unsigned char t23;
    unsigned char t24;
    unsigned char t25;
    unsigned char t26;
    unsigned char t27;
    unsigned char t28;
    unsigned char t29;
    unsigned char t30;
    unsigned char t31;
    char *t32;
    char *t33;

LAB0:    xsi_set_current_line(64, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(70, ng0);
    t1 = (t0 + 2272U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB10;

LAB12:
LAB11:    t1 = (t0 + 4432);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(65, ng0);
    t1 = (t0 + 7390);
    *((int *)t1) = 0;
    t5 = (t0 + 7394);
    *((int *)t5) = 3;
    t6 = 0;
    t7 = 3;

LAB5:    if (t6 <= t7)
        goto LAB6;

LAB8:    goto LAB3;

LAB6:    xsi_set_current_line(66, ng0);
    t9 = (t0 + 7390);
    t10 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t8, *((int *)t9), 8);
    t11 = (t0 + 7390);
    t12 = *((int *)t11);
    t13 = (t12 - 3);
    t14 = (t13 * -1);
    t15 = (8U * t14);
    t16 = (0U + t15);
    t17 = (t0 + 4512);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t10, 8U);
    xsi_driver_first_trans_delta(t17, t16, 8U, 0LL);

LAB7:    t1 = (t0 + 7390);
    t6 = *((int *)t1);
    t2 = (t0 + 7394);
    t7 = *((int *)t2);
    if (t6 == t7)
        goto LAB8;

LAB9:    t12 = (t6 + 1);
    t6 = t12;
    t5 = (t0 + 7390);
    *((int *)t5) = t6;
    goto LAB5;

LAB10:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 1672U);
    t5 = *((char **)t2);
    t24 = *((unsigned char *)t5);
    t25 = (t24 == (unsigned char)3);
    if (t25 == 1)
        goto LAB22;

LAB23:    t23 = (unsigned char)0;

LAB24:    if (t23 == 1)
        goto LAB19;

LAB20:    t22 = (unsigned char)0;

LAB21:    if (t22 == 1)
        goto LAB16;

LAB17:    t4 = (unsigned char)0;

LAB18:    if (t4 != 0)
        goto LAB13;

LAB15:    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t23 = *((unsigned char *)t2);
    t24 = (t23 == (unsigned char)2);
    if (t24 == 1)
        goto LAB33;

LAB34:    t22 = (unsigned char)0;

LAB35:    if (t22 == 1)
        goto LAB30;

LAB31:    t4 = (unsigned char)0;

LAB32:    if (t4 == 1)
        goto LAB27;

LAB28:    t3 = (unsigned char)0;

LAB29:    if (t3 != 0)
        goto LAB25;

LAB26:    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t23 = *((unsigned char *)t2);
    t24 = (t23 == (unsigned char)2);
    if (t24 == 1)
        goto LAB44;

LAB45:    t22 = (unsigned char)0;

LAB46:    if (t22 == 1)
        goto LAB41;

LAB42:    t4 = (unsigned char)0;

LAB43:    if (t4 == 1)
        goto LAB38;

LAB39:    t3 = (unsigned char)0;

LAB40:    if (t3 != 0)
        goto LAB36;

LAB37:    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t23 = *((unsigned char *)t2);
    t24 = (t23 == (unsigned char)2);
    if (t24 == 1)
        goto LAB55;

LAB56:    t22 = (unsigned char)0;

LAB57:    if (t22 == 1)
        goto LAB52;

LAB53:    t4 = (unsigned char)0;

LAB54:    if (t4 == 1)
        goto LAB49;

LAB50:    t3 = (unsigned char)0;

LAB51:    if (t3 != 0)
        goto LAB47;

LAB48:
LAB14:    goto LAB11;

LAB13:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 1032U);
    t17 = *((char **)t2);
    t2 = (t0 + 1352U);
    t18 = *((char **)t2);
    t2 = (t0 + 7228U);
    t6 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t18, t2);
    t7 = (t6 - 3);
    t14 = (t7 * -1);
    t15 = (8U * t14);
    t16 = (0U + t15);
    t19 = (t0 + 4512);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t32 = (t21 + 56U);
    t33 = *((char **)t32);
    memcpy(t33, t17, 8U);
    xsi_driver_first_trans_delta(t19, t16, 8U, 0LL);
    goto LAB14;

LAB16:    t2 = (t0 + 2152U);
    t11 = *((char **)t2);
    t30 = *((unsigned char *)t11);
    t31 = (t30 == (unsigned char)2);
    t4 = t31;
    goto LAB18;

LAB19:    t2 = (t0 + 1992U);
    t10 = *((char **)t2);
    t28 = *((unsigned char *)t10);
    t29 = (t28 == (unsigned char)2);
    t22 = t29;
    goto LAB21;

LAB22:    t2 = (t0 + 1832U);
    t9 = *((char **)t2);
    t26 = *((unsigned char *)t9);
    t27 = (t26 == (unsigned char)2);
    t23 = t27;
    goto LAB24;

LAB25:    xsi_set_current_line(76, ng0);
    t1 = (t0 + 2952U);
    t11 = *((char **)t1);
    t1 = (t0 + 1352U);
    t17 = *((char **)t1);
    t1 = (t0 + 7228U);
    t6 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t17, t1);
    t7 = (t6 - 3);
    t14 = (t7 * -1);
    xsi_vhdl_check_range_of_index(3, 0, -1, t6);
    t15 = (8U * t14);
    t16 = (0 + t15);
    t18 = (t11 + t16);
    t19 = (t0 + 4576);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t32 = (t21 + 56U);
    t33 = *((char **)t32);
    memcpy(t33, t18, 8U);
    xsi_driver_first_trans_fast_port(t19);
    goto LAB14;

LAB27:    t1 = (t0 + 2152U);
    t10 = *((char **)t1);
    t29 = *((unsigned char *)t10);
    t30 = (t29 == (unsigned char)2);
    t3 = t30;
    goto LAB29;

LAB30:    t1 = (t0 + 1992U);
    t9 = *((char **)t1);
    t27 = *((unsigned char *)t9);
    t28 = (t27 == (unsigned char)2);
    t4 = t28;
    goto LAB32;

LAB33:    t1 = (t0 + 1832U);
    t5 = *((char **)t1);
    t25 = *((unsigned char *)t5);
    t26 = (t25 == (unsigned char)3);
    t22 = t26;
    goto LAB35;

LAB36:    xsi_set_current_line(79, ng0);
    t1 = (t0 + 1192U);
    t11 = *((char **)t1);
    t1 = (t0 + 1512U);
    t17 = *((char **)t1);
    t1 = (t0 + 7244U);
    t6 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t17, t1);
    t7 = (t6 - 3);
    t14 = (t7 * -1);
    t15 = (8U * t14);
    t16 = (0U + t15);
    t18 = (t0 + 4512);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t32 = *((char **)t21);
    memcpy(t32, t11, 8U);
    xsi_driver_first_trans_delta(t18, t16, 8U, 0LL);
    goto LAB14;

LAB38:    t1 = (t0 + 2152U);
    t10 = *((char **)t1);
    t29 = *((unsigned char *)t10);
    t30 = (t29 == (unsigned char)2);
    t3 = t30;
    goto LAB40;

LAB41:    t1 = (t0 + 1992U);
    t9 = *((char **)t1);
    t27 = *((unsigned char *)t9);
    t28 = (t27 == (unsigned char)3);
    t4 = t28;
    goto LAB43;

LAB44:    t1 = (t0 + 1832U);
    t5 = *((char **)t1);
    t25 = *((unsigned char *)t5);
    t26 = (t25 == (unsigned char)2);
    t22 = t26;
    goto LAB46;

LAB47:    xsi_set_current_line(82, ng0);
    t1 = (t0 + 2952U);
    t11 = *((char **)t1);
    t1 = (t0 + 1512U);
    t17 = *((char **)t1);
    t1 = (t0 + 7244U);
    t6 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t17, t1);
    t7 = (t6 - 3);
    t14 = (t7 * -1);
    xsi_vhdl_check_range_of_index(3, 0, -1, t6);
    t15 = (8U * t14);
    t16 = (0 + t15);
    t18 = (t11 + t16);
    t19 = (t0 + 4640);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t32 = (t21 + 56U);
    t33 = *((char **)t32);
    memcpy(t33, t18, 8U);
    xsi_driver_first_trans_fast_port(t19);
    goto LAB14;

LAB49:    t1 = (t0 + 2152U);
    t10 = *((char **)t1);
    t29 = *((unsigned char *)t10);
    t30 = (t29 == (unsigned char)3);
    t3 = t30;
    goto LAB51;

LAB52:    t1 = (t0 + 1992U);
    t9 = *((char **)t1);
    t27 = *((unsigned char *)t9);
    t28 = (t27 == (unsigned char)2);
    t4 = t28;
    goto LAB54;

LAB55:    t1 = (t0 + 1832U);
    t5 = *((char **)t1);
    t25 = *((unsigned char *)t5);
    t26 = (t25 == (unsigned char)2);
    t22 = t26;
    goto LAB57;

}


extern void work_a_2845203386_1516540902_init()
{
	static char *pe[] = {(void *)work_a_2845203386_1516540902_p_0};
	xsi_register_didat("work_a_2845203386_1516540902", "isim/uut_dual_port_ram_isim_beh.exe.sim/work/a_2845203386_1516540902.didat");
	xsi_register_executes(pe);
}
