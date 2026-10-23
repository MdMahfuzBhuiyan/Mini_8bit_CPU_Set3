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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/mahfuz/Mini_8bit_CPU_Set3/Mini_8bit_CPU_Set3/tb_cpu.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_1941380655_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;

LAB0:    t1 = (t0 + 2824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);

LAB4:    if ((unsigned char)1 != 0)
        goto LAB5;

LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 3584);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(40, ng0);
    t7 = (5 * 1000LL);
    t2 = (t0 + 2632);
    xsi_process_wait(t2, t7);

LAB10:    *((char **)t1) = &&LAB11;

LAB1:    return;
LAB6:;
LAB8:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 3584);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(43, ng0);
    t7 = (5 * 1000LL);
    t2 = (t0 + 2632);
    xsi_process_wait(t2, t7);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    goto LAB4;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

}

static void work_a_1941380655_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned char t7;
    int64 t8;
    unsigned int t9;
    char *t10;
    unsigned char t12;

LAB0:    t1 = (t0 + 3072U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 3648);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(51, ng0);

LAB6:    t2 = (t0 + 3392);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t4 = (t0 + 3392);
    *((int *)t4) = 0;
    xsi_set_current_line(52, ng0);
    t8 = (1 * 1000LL);
    t2 = (t0 + 2880);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    t3 = (t0 + 992U);
    t7 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t7 == 1)
        goto LAB4;
    else
        goto LAB6;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 5847);
    t7 = 1;
    if (8U == 8U)
        goto LAB14;

LAB15:    t7 = 0;

LAB16:    if (t7 == 0)
        goto LAB12;

LAB13:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t7 = *((unsigned char *)t3);
    t12 = (t7 == (unsigned char)3);
    if (t12 == 0)
        goto LAB20;

LAB21:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 5892);
    t7 = 1;
    if (4U == 4U)
        goto LAB24;

LAB25:    t7 = 0;

LAB26:    if (t7 == 0)
        goto LAB22;

LAB23:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 3648);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(67, ng0);

LAB32:    t2 = (t0 + 3408);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB33;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    t10 = (t0 + 5855);
    xsi_report(t10, 20U, (unsigned char)2);
    goto LAB13;

LAB14:    t9 = 0;

LAB17:    if (t9 < 8U)
        goto LAB18;
    else
        goto LAB16;

LAB18:    t5 = (t3 + t9);
    t6 = (t2 + t9);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB15;

LAB19:    t9 = (t9 + 1);
    goto LAB17;

LAB20:    t2 = (t0 + 5875);
    xsi_report(t2, 17U, (unsigned char)2);
    goto LAB21;

LAB22:    t10 = (t0 + 5896);
    xsi_report(t10, 18U, (unsigned char)2);
    goto LAB23;

LAB24:    t9 = 0;

LAB27:    if (t9 < 4U)
        goto LAB28;
    else
        goto LAB26;

LAB28:    t5 = (t3 + t9);
    t6 = (t2 + t9);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB25;

LAB29:    t9 = (t9 + 1);
    goto LAB27;

LAB30:    t4 = (t0 + 3408);
    *((int *)t4) = 0;
    xsi_set_current_line(68, ng0);
    t8 = (1 * 1000LL);
    t2 = (t0 + 2880);
    xsi_process_wait(t2, t8);

LAB36:    *((char **)t1) = &&LAB37;
    goto LAB1;

LAB31:    t3 = (t0 + 992U);
    t7 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t7 == 1)
        goto LAB30;
    else
        goto LAB32;

LAB33:    goto LAB31;

LAB34:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 5914);
    t7 = 1;
    if (8U == 8U)
        goto LAB40;

LAB41:    t7 = 0;

LAB42:    if (t7 == 0)
        goto LAB38;

LAB39:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t7 = *((unsigned char *)t3);
    t12 = (t7 == (unsigned char)2);
    if (t12 == 0)
        goto LAB46;

LAB47:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 5947);
    t7 = 1;
    if (4U == 4U)
        goto LAB50;

LAB51:    t7 = 0;

LAB52:    if (t7 == 0)
        goto LAB48;

LAB49:    xsi_set_current_line(82, ng0);

LAB58:    t2 = (t0 + 3424);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB59;
    goto LAB1;

LAB35:    goto LAB34;

LAB37:    goto LAB35;

LAB38:    t10 = (t0 + 5922);
    xsi_report(t10, 10U, (unsigned char)2);
    goto LAB39;

LAB40:    t9 = 0;

LAB43:    if (t9 < 8U)
        goto LAB44;
    else
        goto LAB42;

LAB44:    t5 = (t3 + t9);
    t6 = (t2 + t9);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB41;

LAB45:    t9 = (t9 + 1);
    goto LAB43;

LAB46:    t2 = (t0 + 5932);
    xsi_report(t2, 15U, (unsigned char)2);
    goto LAB47;

LAB48:    t10 = (t0 + 5951);
    xsi_report(t10, 16U, (unsigned char)2);
    goto LAB49;

LAB50:    t9 = 0;

LAB53:    if (t9 < 4U)
        goto LAB54;
    else
        goto LAB52;

LAB54:    t5 = (t3 + t9);
    t6 = (t2 + t9);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB51;

LAB55:    t9 = (t9 + 1);
    goto LAB53;

LAB56:    t4 = (t0 + 3424);
    *((int *)t4) = 0;
    xsi_set_current_line(83, ng0);
    t8 = (1 * 1000LL);
    t2 = (t0 + 2880);
    xsi_process_wait(t2, t8);

LAB62:    *((char **)t1) = &&LAB63;
    goto LAB1;

LAB57:    t3 = (t0 + 992U);
    t7 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t7 == 1)
        goto LAB56;
    else
        goto LAB58;

LAB59:    goto LAB57;

LAB60:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 5967);
    t7 = 1;
    if (8U == 8U)
        goto LAB66;

LAB67:    t7 = 0;

LAB68:    if (t7 == 0)
        goto LAB64;

LAB65:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 5985);
    t7 = 1;
    if (4U == 4U)
        goto LAB74;

LAB75:    t7 = 0;

LAB76:    if (t7 == 0)
        goto LAB72;

LAB73:    xsi_set_current_line(93, ng0);

LAB82:    t2 = (t0 + 3440);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB83;
    goto LAB1;

LAB61:    goto LAB60;

LAB63:    goto LAB61;

LAB64:    t10 = (t0 + 5975);
    xsi_report(t10, 10U, (unsigned char)2);
    goto LAB65;

LAB66:    t9 = 0;

LAB69:    if (t9 < 8U)
        goto LAB70;
    else
        goto LAB68;

LAB70:    t5 = (t3 + t9);
    t6 = (t2 + t9);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB67;

LAB71:    t9 = (t9 + 1);
    goto LAB69;

LAB72:    t10 = (t0 + 5989);
    xsi_report(t10, 16U, (unsigned char)2);
    goto LAB73;

LAB74:    t9 = 0;

LAB77:    if (t9 < 4U)
        goto LAB78;
    else
        goto LAB76;

LAB78:    t5 = (t3 + t9);
    t6 = (t2 + t9);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB75;

LAB79:    t9 = (t9 + 1);
    goto LAB77;

LAB80:    t4 = (t0 + 3440);
    *((int *)t4) = 0;
    xsi_set_current_line(94, ng0);
    t8 = (1 * 1000LL);
    t2 = (t0 + 2880);
    xsi_process_wait(t2, t8);

LAB86:    *((char **)t1) = &&LAB87;
    goto LAB1;

LAB81:    t3 = (t0 + 992U);
    t7 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t7 == 1)
        goto LAB80;
    else
        goto LAB82;

LAB83:    goto LAB81;

LAB84:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 6005);
    t7 = 1;
    if (8U == 8U)
        goto LAB90;

LAB91:    t7 = 0;

LAB92:    if (t7 == 0)
        goto LAB88;

LAB89:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 6023);
    t7 = 1;
    if (4U == 4U)
        goto LAB98;

LAB99:    t7 = 0;

LAB100:    if (t7 == 0)
        goto LAB96;

LAB97:    xsi_set_current_line(104, ng0);

LAB106:    t2 = (t0 + 3456);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB107;
    goto LAB1;

LAB85:    goto LAB84;

LAB87:    goto LAB85;

LAB88:    t10 = (t0 + 6013);
    xsi_report(t10, 10U, (unsigned char)2);
    goto LAB89;

LAB90:    t9 = 0;

LAB93:    if (t9 < 8U)
        goto LAB94;
    else
        goto LAB92;

LAB94:    t5 = (t3 + t9);
    t6 = (t2 + t9);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB91;

LAB95:    t9 = (t9 + 1);
    goto LAB93;

LAB96:    t10 = (t0 + 6027);
    xsi_report(t10, 16U, (unsigned char)2);
    goto LAB97;

LAB98:    t9 = 0;

LAB101:    if (t9 < 4U)
        goto LAB102;
    else
        goto LAB100;

LAB102:    t5 = (t3 + t9);
    t6 = (t2 + t9);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB99;

LAB103:    t9 = (t9 + 1);
    goto LAB101;

LAB104:    t4 = (t0 + 3456);
    *((int *)t4) = 0;
    xsi_set_current_line(105, ng0);
    t8 = (1 * 1000LL);
    t2 = (t0 + 2880);
    xsi_process_wait(t2, t8);

LAB110:    *((char **)t1) = &&LAB111;
    goto LAB1;

LAB105:    t3 = (t0 + 992U);
    t7 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t7 == 1)
        goto LAB104;
    else
        goto LAB106;

LAB107:    goto LAB105;

LAB108:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 6043);
    t7 = 1;
    if (8U == 8U)
        goto LAB114;

LAB115:    t7 = 0;

LAB116:    if (t7 == 0)
        goto LAB112;

LAB113:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 6061);
    t7 = 1;
    if (4U == 4U)
        goto LAB122;

LAB123:    t7 = 0;

LAB124:    if (t7 == 0)
        goto LAB120;

LAB121:    xsi_set_current_line(115, ng0);

LAB130:    t2 = (t0 + 3472);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB131;
    goto LAB1;

LAB109:    goto LAB108;

LAB111:    goto LAB109;

LAB112:    t10 = (t0 + 6051);
    xsi_report(t10, 10U, (unsigned char)2);
    goto LAB113;

LAB114:    t9 = 0;

LAB117:    if (t9 < 8U)
        goto LAB118;
    else
        goto LAB116;

LAB118:    t5 = (t3 + t9);
    t6 = (t2 + t9);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB115;

LAB119:    t9 = (t9 + 1);
    goto LAB117;

LAB120:    t10 = (t0 + 6065);
    xsi_report(t10, 16U, (unsigned char)2);
    goto LAB121;

LAB122:    t9 = 0;

LAB125:    if (t9 < 4U)
        goto LAB126;
    else
        goto LAB124;

LAB126:    t5 = (t3 + t9);
    t6 = (t2 + t9);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB123;

LAB127:    t9 = (t9 + 1);
    goto LAB125;

LAB128:    t4 = (t0 + 3472);
    *((int *)t4) = 0;
    xsi_set_current_line(116, ng0);
    t8 = (1 * 1000LL);
    t2 = (t0 + 2880);
    xsi_process_wait(t2, t8);

LAB134:    *((char **)t1) = &&LAB135;
    goto LAB1;

LAB129:    t3 = (t0 + 992U);
    t7 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t7 == 1)
        goto LAB128;
    else
        goto LAB130;

LAB131:    goto LAB129;

LAB132:    xsi_set_current_line(118, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 6081);
    t7 = 1;
    if (8U == 8U)
        goto LAB138;

LAB139:    t7 = 0;

LAB140:    if (t7 == 0)
        goto LAB136;

LAB137:    xsi_set_current_line(122, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t7 = *((unsigned char *)t3);
    t12 = (t7 == (unsigned char)3);
    if (t12 == 0)
        goto LAB144;

LAB145:    xsi_set_current_line(126, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 6114);
    t7 = 1;
    if (4U == 4U)
        goto LAB148;

LAB149:    t7 = 0;

LAB150:    if (t7 == 0)
        goto LAB146;

LAB147:    xsi_set_current_line(130, ng0);

LAB156:    t2 = (t0 + 3488);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB157;
    goto LAB1;

LAB133:    goto LAB132;

LAB135:    goto LAB133;

LAB136:    t10 = (t0 + 6089);
    xsi_report(t10, 10U, (unsigned char)2);
    goto LAB137;

LAB138:    t9 = 0;

LAB141:    if (t9 < 8U)
        goto LAB142;
    else
        goto LAB140;

LAB142:    t5 = (t3 + t9);
    t6 = (t2 + t9);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB139;

LAB143:    t9 = (t9 + 1);
    goto LAB141;

LAB144:    t2 = (t0 + 6099);
    xsi_report(t2, 15U, (unsigned char)2);
    goto LAB145;

LAB146:    t10 = (t0 + 6118);
    xsi_report(t10, 16U, (unsigned char)2);
    goto LAB147;

LAB148:    t9 = 0;

LAB151:    if (t9 < 4U)
        goto LAB152;
    else
        goto LAB150;

LAB152:    t5 = (t3 + t9);
    t6 = (t2 + t9);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB149;

LAB153:    t9 = (t9 + 1);
    goto LAB151;

LAB154:    t4 = (t0 + 3488);
    *((int *)t4) = 0;
    xsi_set_current_line(131, ng0);
    t8 = (1 * 1000LL);
    t2 = (t0 + 2880);
    xsi_process_wait(t2, t8);

LAB160:    *((char **)t1) = &&LAB161;
    goto LAB1;

LAB155:    t3 = (t0 + 992U);
    t7 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t7 == 1)
        goto LAB154;
    else
        goto LAB156;

LAB157:    goto LAB155;

LAB158:    xsi_set_current_line(133, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 6134);
    t7 = 1;
    if (8U == 8U)
        goto LAB164;

LAB165:    t7 = 0;

LAB166:    if (t7 == 0)
        goto LAB162;

LAB163:    xsi_set_current_line(137, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t7 = *((unsigned char *)t3);
    t12 = (t7 == (unsigned char)2);
    if (t12 == 0)
        goto LAB170;

LAB171:    xsi_set_current_line(141, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 6181);
    t7 = 1;
    if (4U == 4U)
        goto LAB174;

LAB175:    t7 = 0;

LAB176:    if (t7 == 0)
        goto LAB172;

LAB173:    xsi_set_current_line(145, ng0);

LAB182:    t2 = (t0 + 3504);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB183;
    goto LAB1;

LAB159:    goto LAB158;

LAB161:    goto LAB159;

LAB162:    t10 = (t0 + 6142);
    xsi_report(t10, 17U, (unsigned char)2);
    goto LAB163;

LAB164:    t9 = 0;

LAB167:    if (t9 < 8U)
        goto LAB168;
    else
        goto LAB166;

LAB168:    t5 = (t3 + t9);
    t6 = (t2 + t9);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB165;

LAB169:    t9 = (t9 + 1);
    goto LAB167;

LAB170:    t2 = (t0 + 6159);
    xsi_report(t2, 22U, (unsigned char)2);
    goto LAB171;

LAB172:    t10 = (t0 + 6185);
    xsi_report(t10, 23U, (unsigned char)2);
    goto LAB173;

LAB174:    t9 = 0;

LAB177:    if (t9 < 4U)
        goto LAB178;
    else
        goto LAB176;

LAB178:    t5 = (t3 + t9);
    t6 = (t2 + t9);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB175;

LAB179:    t9 = (t9 + 1);
    goto LAB177;

LAB180:    t4 = (t0 + 3504);
    *((int *)t4) = 0;
    xsi_set_current_line(146, ng0);
    t8 = (1 * 1000LL);
    t2 = (t0 + 2880);
    xsi_process_wait(t2, t8);

LAB186:    *((char **)t1) = &&LAB187;
    goto LAB1;

LAB181:    t3 = (t0 + 992U);
    t7 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t7 == 1)
        goto LAB180;
    else
        goto LAB182;

LAB183:    goto LAB181;

LAB184:    xsi_set_current_line(148, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 6208);
    t7 = 1;
    if (8U == 8U)
        goto LAB190;

LAB191:    t7 = 0;

LAB192:    if (t7 == 0)
        goto LAB188;

LAB189:    xsi_set_current_line(152, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 6233);
    t7 = 1;
    if (4U == 4U)
        goto LAB198;

LAB199:    t7 = 0;

LAB200:    if (t7 == 0)
        goto LAB196;

LAB197:    xsi_set_current_line(156, ng0);
    t2 = (t0 + 6260);
    xsi_report(t2, 26U, (unsigned char)0);
    xsi_set_current_line(159, ng0);

LAB206:    *((char **)t1) = &&LAB207;
    goto LAB1;

LAB185:    goto LAB184;

LAB187:    goto LAB185;

LAB188:    t10 = (t0 + 6216);
    xsi_report(t10, 17U, (unsigned char)2);
    goto LAB189;

LAB190:    t9 = 0;

LAB193:    if (t9 < 8U)
        goto LAB194;
    else
        goto LAB192;

LAB194:    t5 = (t3 + t9);
    t6 = (t2 + t9);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB191;

LAB195:    t9 = (t9 + 1);
    goto LAB193;

LAB196:    t10 = (t0 + 6237);
    xsi_report(t10, 23U, (unsigned char)2);
    goto LAB197;

LAB198:    t9 = 0;

LAB201:    if (t9 < 4U)
        goto LAB202;
    else
        goto LAB200;

LAB202:    t5 = (t3 + t9);
    t6 = (t2 + t9);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB199;

LAB203:    t9 = (t9 + 1);
    goto LAB201;

LAB204:    goto LAB2;

LAB205:    goto LAB204;

LAB207:    goto LAB205;

}


extern void work_a_1941380655_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1941380655_3212880686_p_0,(void *)work_a_1941380655_3212880686_p_1};
	xsi_register_didat("work_a_1941380655_3212880686", "isim/tb_cpu_isim_beh.exe.sim/work/a_1941380655_3212880686.didat");
	xsi_register_executes(pe);
}
