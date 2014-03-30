/****************************************************************************
*
*     Copyright (c) 2009 Broadcom Corporation
*
*   Unless you and Broadcom execute a separate written software license 
*   agreement governing use of this software, this software is licensed to you 
*   under the terms of the GNU General Public License version 2, available 
*    at http://www.gnu.org/licenses/old-licenses/gpl-2.0.html (the "GPL"). 
*
*   Notwithstanding the above, under no circumstances may you combine this 
*   software in any way with any other Broadcom software provided under a license 
*   other than the GPL, without Broadcom's express prior written consent.
*
****************************************************************************/

#ifndef _BCM_KPDP_MAIN_H
#define _BCM_KPDP_MAIN_H

typedef struct _kpdp_command_t {
    struct list_head list;
    int fd;
    int CmdID;
    unsigned char tid;
    //struct timeval timeout;
	void  (*func)(void);
} Kpdp_cmd;

#endif //_BCM_KPDP_MAIN_H
