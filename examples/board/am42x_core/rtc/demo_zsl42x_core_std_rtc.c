/*******************************************************************************
*                                 AMetal
*                       ----------------------------
*                       innovating embedded platform
*
* Copyright (c) 2001-2019 Guangzhou ZHIYUAN Electronics Co., Ltd.
* All rights reserved.
*
* Contact information:
* web site:    http://www.zlg.cn/
*******************************************************************************/

/**
 * \file
 * \brief RTC ���̣�ͨ����׼�ӿں��м������㺯��ʵ��
 *
 * - ʵ������
 *   1. ÿ1�뷢��һ���жϣ����ڲ���ӡ����ǰʱ����Ϣ��
 *
 * \note
 *    ����۲촮�ڴ�ӡ�ĵ�����Ϣ����Ҫ�� PIOA_10 �������� PC ���ڵ� TXD��
 *    PIOA_9 �������� PC ���ڵ� RXD��
 *
 * \par Դ����
 * \snippet demo_zsl42x_core_std_rtc.c src_zsl42x_core_std_rtc
 *
 * \internal
 * \par Modification history
 * - 1.00 19-10-17  zp, first implementation
 * \endinternal
 */

/**
 * \addtogroup demo_if_zsl42x_core_std_rtc
 * \copydoc demo_zsl42x_core_std_rtc.c
 */

/** [src_zsl42x_core_std_rtc] */
#include "ametal.h"
#include "am_vdebug.h"
#include "demo_std_entries.h"
#include "am_zsl42x_inst_init.h"
#include "demo_am42x_core_entries.h"

/**
 * \brief �������
 */
void demo_zsl42x_core_std_rtc_entry (void)
{
    AM_DBG_INFO("demo am42x_core std rtc!\r\n");

    demo_std_rtc_entry(am_zsl42x_rtc_inst_init());
}
/** [src_zsl42x_core_std_rtc] */

/* end of file */