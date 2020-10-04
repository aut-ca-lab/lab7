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
static const char *ng0 = "E:/Education/CA/Lab/LAB_7/LAB_7/CAM.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

int ieee_p_1242562249_sub_1657552908_1035706684(char *, char *, char *);
char *ieee_p_1242562249_sub_180853171_1035706684(char *, char *, int , int );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_2334801931_1516540902_p_0(char *t0)
{
    char t23[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    int t6;
    int t7;
    char *t8;
    char *t9;
    unsigned char t10;
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
    unsigned int t22;
    char *t24;

LAB0:    xsi_set_current_line(59, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB12;

LAB13:
LAB3:    t1 = (t0 + 3912);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(60, ng0);
    t1 = (t0 + 6575);
    *((int *)t1) = 0;
    t5 = (t0 + 6579);
    *((int *)t5) = 3;
    t6 = 0;
    t7 = 3;

LAB5:    if (t6 <= t7)
        goto LAB6;

LAB8:    goto LAB3;

LAB6:    xsi_set_current_line(61, ng0);
    t8 = (t0 + 6583);
    t10 = (8U != 8U);
    if (t10 == 1)
        goto LAB9;

LAB10:    t11 = (t0 + 6575);
    t12 = *((int *)t11);
    t13 = (t12 - 3);
    t14 = (t13 * -1);
    t15 = (8U * t14);
    t16 = (0U + t15);
    t17 = (t0 + 3992);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t8, 8U);
    xsi_driver_first_trans_delta(t17, t16, 8U, 0LL);

LAB7:    t1 = (t0 + 6575);
    t6 = *((int *)t1);
    t2 = (t0 + 6579);
    t7 = *((int *)t2);
    if (t6 == t7)
        goto LAB8;

LAB11:    t12 = (t6 + 1);
    t6 = t12;
    t5 = (t0 + 6575);
    *((int *)t5) = t6;
    goto LAB5;

LAB9:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB10;

LAB12:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 2608U);
    t5 = *((char **)t2);
    t2 = (t5 + 0);
    *((unsigned char *)t2) = (unsigned char)2;
    xsi_set_current_line(66, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB14;

LAB16:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB53;

LAB54:
LAB15:    goto LAB3;

LAB14:    xsi_set_current_line(67, ng0);
    t1 = (t0 + 6591);
    *((int *)t1) = 0;
    t5 = (t0 + 6595);
    *((int *)t5) = 3;
    t6 = 0;
    t7 = 3;

LAB17:    if (t6 <= t7)
        goto LAB18;

LAB20:    xsi_set_current_line(75, ng0);
    t1 = (t0 + 2608U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB32;

LAB34:
LAB33:    goto LAB15;

LAB18:    xsi_set_current_line(68, ng0);
    t8 = (t0 + 2312U);
    t9 = *((char **)t8);
    t8 = (t0 + 6591);
    t12 = *((int *)t8);
    t13 = (t12 - 3);
    t14 = (t13 * -1);
    xsi_vhdl_check_range_of_index(3, 0, -1, *((int *)t8));
    t15 = (8U * t14);
    t16 = (0 + t15);
    t11 = (t9 + t16);
    t17 = (t0 + 1512U);
    t18 = *((char **)t17);
    t10 = 1;
    if (8U == 8U)
        goto LAB24;

LAB25:    t10 = 0;

LAB26:    if (t10 != 0)
        goto LAB21;

LAB23:
LAB22:
LAB19:    t1 = (t0 + 6591);
    t6 = *((int *)t1);
    t2 = (t0 + 6595);
    t7 = *((int *)t2);
    if (t6 == t7)
        goto LAB20;

LAB31:    t12 = (t6 + 1);
    t6 = t12;
    t5 = (t0 + 6591);
    *((int *)t5) = t6;
    goto LAB17;

LAB21:    xsi_set_current_line(69, ng0);
    t20 = (t0 + 2608U);
    t21 = *((char **)t20);
    t20 = (t21 + 0);
    *((unsigned char *)t20) = (unsigned char)3;
    xsi_set_current_line(70, ng0);
    t1 = (t0 + 6591);
    t2 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t23, *((int *)t1), 2);
    t5 = (t0 + 4056);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    t11 = (t9 + 56U);
    t17 = *((char **)t11);
    memcpy(t17, t2, 2U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(71, ng0);
    goto LAB20;

LAB24:    t22 = 0;

LAB27:    if (t22 < 8U)
        goto LAB28;
    else
        goto LAB26;

LAB28:    t17 = (t11 + t22);
    t19 = (t18 + t22);
    if (*((unsigned char *)t17) != *((unsigned char *)t19))
        goto LAB25;

LAB29:    t22 = (t22 + 1);
    goto LAB27;

LAB30:    goto LAB22;

LAB32:    xsi_set_current_line(76, ng0);
    t1 = (t0 + 6599);
    *((int *)t1) = 0;
    t5 = (t0 + 6603);
    *((int *)t5) = 3;
    t6 = 0;
    t7 = 3;

LAB35:    if (t6 <= t7)
        goto LAB36;

LAB38:    xsi_set_current_line(86, ng0);
    t1 = (t0 + 2608U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB50;

LAB52:
LAB51:    goto LAB33;

LAB36:    xsi_set_current_line(77, ng0);
    t8 = (t0 + 2312U);
    t9 = *((char **)t8);
    t8 = (t0 + 6599);
    t12 = *((int *)t8);
    t13 = (t12 - 3);
    t14 = (t13 * -1);
    xsi_vhdl_check_range_of_index(3, 0, -1, *((int *)t8));
    t15 = (8U * t14);
    t16 = (0 + t15);
    t11 = (t9 + t16);
    t17 = (t0 + 6607);
    t10 = 1;
    if (8U == 8U)
        goto LAB42;

LAB43:    t10 = 0;

LAB44:    if (t10 != 0)
        goto LAB39;

LAB41:
LAB40:
LAB37:    t1 = (t0 + 6599);
    t6 = *((int *)t1);
    t2 = (t0 + 6603);
    t7 = *((int *)t2);
    if (t6 == t7)
        goto LAB38;

LAB49:    t12 = (t6 + 1);
    t6 = t12;
    t5 = (t0 + 6599);
    *((int *)t5) = t6;
    goto LAB35;

LAB39:    xsi_set_current_line(78, ng0);
    t21 = (t0 + 2608U);
    t24 = *((char **)t21);
    t21 = (t24 + 0);
    *((unsigned char *)t21) = (unsigned char)3;
    xsi_set_current_line(79, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 6599);
    t12 = *((int *)t1);
    t13 = (t12 - 3);
    t14 = (t13 * -1);
    t15 = (8U * t14);
    t16 = (0U + t15);
    t5 = (t0 + 3992);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    t11 = (t9 + 56U);
    t17 = *((char **)t11);
    memcpy(t17, t2, 8U);
    xsi_driver_first_trans_delta(t5, t16, 8U, 0LL);
    xsi_set_current_line(80, ng0);
    t1 = (t0 + 6599);
    t2 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t23, *((int *)t1), 2);
    t5 = (t0 + 4056);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    t11 = (t9 + 56U);
    t17 = *((char **)t11);
    memcpy(t17, t2, 2U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(81, ng0);
    t1 = (t0 + 4120);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(82, ng0);
    goto LAB38;

LAB42:    t22 = 0;

LAB45:    if (t22 < 8U)
        goto LAB46;
    else
        goto LAB44;

LAB46:    t19 = (t11 + t22);
    t20 = (t17 + t22);
    if (*((unsigned char *)t19) != *((unsigned char *)t20))
        goto LAB43;

LAB47:    t22 = (t22 + 1);
    goto LAB45;

LAB48:    goto LAB40;

LAB50:    xsi_set_current_line(87, ng0);
    t1 = (t0 + 1512U);
    t5 = *((char **)t1);
    t1 = (t0 + 1672U);
    t8 = *((char **)t1);
    t1 = (t0 + 6456U);
    t6 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t8, t1);
    t7 = (t6 - 3);
    t14 = (t7 * -1);
    t15 = (8U * t14);
    t16 = (0U + t15);
    t9 = (t0 + 3992);
    t11 = (t9 + 56U);
    t17 = *((char **)t11);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t5, 8U);
    xsi_driver_first_trans_delta(t9, t16, 8U, 0LL);
    xsi_set_current_line(88, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 4056);
    t5 = (t1 + 56U);
    t8 = *((char **)t5);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t2, 2U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(89, ng0);
    t1 = (t0 + 4120);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB51;

LAB53:    xsi_set_current_line(94, ng0);
    t1 = (t0 + 6615);
    *((int *)t1) = 0;
    t5 = (t0 + 6619);
    *((int *)t5) = 3;
    t6 = 0;
    t7 = 3;

LAB55:    if (t6 <= t7)
        goto LAB56;

LAB58:    xsi_set_current_line(102, ng0);
    t1 = (t0 + 2608U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB70;

LAB72:
LAB71:    xsi_set_current_line(105, ng0);
    t1 = (t0 + 2608U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)2;
    goto LAB15;

LAB56:    xsi_set_current_line(95, ng0);
    t8 = (t0 + 2312U);
    t9 = *((char **)t8);
    t8 = (t0 + 6615);
    t12 = *((int *)t8);
    t13 = (t12 - 3);
    t14 = (t13 * -1);
    xsi_vhdl_check_range_of_index(3, 0, -1, *((int *)t8));
    t15 = (8U * t14);
    t16 = (0 + t15);
    t11 = (t9 + t16);
    t17 = (t0 + 1512U);
    t18 = *((char **)t17);
    t10 = 1;
    if (8U == 8U)
        goto LAB62;

LAB63:    t10 = 0;

LAB64:    if (t10 != 0)
        goto LAB59;

LAB61:
LAB60:
LAB57:    t1 = (t0 + 6615);
    t6 = *((int *)t1);
    t2 = (t0 + 6619);
    t7 = *((int *)t2);
    if (t6 == t7)
        goto LAB58;

LAB69:    t12 = (t6 + 1);
    t6 = t12;
    t5 = (t0 + 6615);
    *((int *)t5) = t6;
    goto LAB55;

LAB59:    xsi_set_current_line(96, ng0);
    t20 = (t0 + 2608U);
    t21 = *((char **)t20);
    t20 = (t21 + 0);
    *((unsigned char *)t20) = (unsigned char)3;
    xsi_set_current_line(97, ng0);
    t1 = (t0 + 6615);
    t2 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t23, *((int *)t1), 2);
    t5 = (t0 + 4056);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    t11 = (t9 + 56U);
    t17 = *((char **)t11);
    memcpy(t17, t2, 2U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(98, ng0);
    t1 = (t0 + 4120);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(99, ng0);
    goto LAB58;

LAB62:    t22 = 0;

LAB65:    if (t22 < 8U)
        goto LAB66;
    else
        goto LAB64;

LAB66:    t17 = (t11 + t22);
    t19 = (t18 + t22);
    if (*((unsigned char *)t17) != *((unsigned char *)t19))
        goto LAB63;

LAB67:    t22 = (t22 + 1);
    goto LAB65;

LAB68:    goto LAB60;

LAB70:    xsi_set_current_line(103, ng0);
    t1 = (t0 + 4120);
    t5 = (t1 + 56U);
    t8 = *((char **)t5);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB71;

}


extern void work_a_2334801931_1516540902_init()
{
	static char *pe[] = {(void *)work_a_2334801931_1516540902_p_0};
	xsi_register_didat("work_a_2334801931_1516540902", "isim/uut_cam_isim_beh.exe.sim/work/a_2334801931_1516540902.didat");
	xsi_register_executes(pe);
}
