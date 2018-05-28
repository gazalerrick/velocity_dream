/*
 * Author: andip71, 01.09.2017
 *
 * Version 1.1.0
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#define BOEFFLA_WL_BLOCKER_VERSION	"1.1.0"

#define LIST_WL_DEFAULT				"bbd_wake_lock;ssp_sensorhub_wake_lock;wlan_rx_wake;wlan_wake;wlan_ctrl_wake;NETLINK;wlan_txfl_wake;bluetooth_timer;BT_bt_wake;BT_host_wake;ssp_wake_lock;mmc0_detect;ssp_comm_wake_lock"

#define LENGTH_LIST_WL				2048
#define LENGTH_LIST_WL_DEFAULT		225
#define LENGTH_LIST_WL_SEARCH		LENGTH_LIST_WL + LENGTH_LIST_WL_DEFAULT + 5
