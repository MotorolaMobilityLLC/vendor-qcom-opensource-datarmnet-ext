// SPDX-License-Identifier: GPL-2.0-only
/* Copyright (c) 2021, The Linux Foundation. All rights reserved.
 * Copyright (c) 2022 Qualcomm Innovation Center, Inc. All rights reserved.
 *
 * RMNET WLAN handler framework
 *
 */

#include <linux/types.h>
#include <linux/skbuff.h>
#include <net/genetlink.h>
#include <net/netlink.h>
#include <net/ip.h>
#include <net/ipv6.h>
#include <net/tcp.h>
#include <linux/rcupdate.h>
#include <linux/list.h>
#include <linux/rculist.h>
#include <linux/mutex.h>
#include <linux/hashtable.h>
#include <linux/log2.h>
#include <linux/netdevice.h>
#include "rmnet_wlan_genl.h"
#include "rmnet_wlan.h"
#include "rmnet_wlan_stats.h"
#include "rmnet_wlan_fragment.h"
#include "rmnet_wlan_connection.h"
#define DATARMNETaf49b04806 ((0xeb7+1158-0x132d))
#define DATARMNET6b4ac8224c (const_ilog2(DATARMNETaf49b04806))
struct DATARMNET745f724205{struct hlist_node DATARMNETe8608dd267;struct rcu_head
 DATARMNET28bfe9e6ad;struct DATARMNETb89ecedefc DATARMNET54338da2ff;};struct 
DATARMNET41b426061d{struct hlist_node DATARMNETe8608dd267;struct rcu_head 
DATARMNET28bfe9e6ad;struct notifier_block DATARMNET272c159b3c;char 
DATARMNET852d4d00e2[IFNAMSIZ];struct DATARMNET8d3c2559ca DATARMNET7ed5754a5c;};
struct DATARMNETda06413d0d{struct hlist_node DATARMNETe8608dd267;struct rcu_head
 DATARMNET28bfe9e6ad;__be16 DATARMNETf0d9de7e2f;};static DEFINE_MUTEX(
DATARMNET63a2b7773e);static DEFINE_HASHTABLE(DATARMNET1903907456,
DATARMNET6b4ac8224c);static DEFINE_MUTEX(DATARMNETf46fb02ac6);static 
DEFINE_HASHTABLE(DATARMNET78ed39f13b,DATARMNET6b4ac8224c);static DEFINE_MUTEX(
DATARMNET954bef55d0);static DEFINE_HASHTABLE(DATARMNET133502ca0e,
DATARMNET6b4ac8224c);static DEFINE_HASHTABLE(DATARMNET665d2f133f,
DATARMNET6b4ac8224c);static char DATARMNET30500ba48c[IFNAMSIZ];static bool 
DATARMNET1e31b22eff(struct DATARMNETb89ecedefc*DATARMNETae0905b0b3,struct 
DATARMNETb89ecedefc*DATARMNETdb49f21565){if(DATARMNETae0905b0b3->
DATARMNET0d956cc77a!=DATARMNETdb49f21565->DATARMNET0d956cc77a||
DATARMNETae0905b0b3->DATARMNET4924e79411!=DATARMNETdb49f21565->
DATARMNET4924e79411)return false;if(DATARMNETae0905b0b3->DATARMNET0d956cc77a==
IPPROTO_ESP)return DATARMNETae0905b0b3->DATARMNET906b2ee561==DATARMNETdb49f21565
->DATARMNET906b2ee561;return DATARMNETae0905b0b3->DATARMNETf0d9de7e2f==
DATARMNETdb49f21565->DATARMNETf0d9de7e2f;}static int DATARMNET0b72d312f9(struct 
DATARMNETb89ecedefc*DATARMNET3396919a68,struct genl_info*DATARMNET54338da2ff)
__must_hold(&DATARMNET63a2b7773e){struct DATARMNET745f724205*DATARMNET63b1a086d5
;rcu_read_lock();if(DATARMNET4eafcdee07(DATARMNET3396919a68)){rcu_read_unlock();
GENL_SET_ERR_MSG(DATARMNET54338da2ff,
"\x54\x75\x70\x6c\x65\x20\x61\x6c\x72\x65\x61\x64\x79\x20\x70\x72\x65\x73\x65\x6e\x74"
);return-EEXIST;}rcu_read_unlock();DATARMNET63b1a086d5=kzalloc(sizeof(*
DATARMNET63b1a086d5),GFP_KERNEL);if(!DATARMNET63b1a086d5){GENL_SET_ERR_MSG(
DATARMNET54338da2ff,
"\x43\x61\x6e\x6e\x6f\x74\x20\x61\x6c\x6c\x6f\x63\x61\x74\x65\x20\x74\x75\x70\x6c\x65\x20\x6d\x65\x6d\x6f\x72\x79"
);return-ENOMEM;}memcpy(&DATARMNET63b1a086d5->DATARMNET54338da2ff,
DATARMNET3396919a68,sizeof(*DATARMNET3396919a68));INIT_HLIST_NODE(&
DATARMNET63b1a086d5->DATARMNETe8608dd267);hash_add_rcu(DATARMNET1903907456,&
DATARMNET63b1a086d5->DATARMNETe8608dd267,DATARMNET3396919a68->
DATARMNETf0d9de7e2f);DATARMNET5ca94dbc3c(DATARMNET12d881921a);return
(0xd2d+202-0xdf7);}static int DATARMNET79343e3135(struct DATARMNETb89ecedefc*
DATARMNET3396919a68,struct genl_info*DATARMNET54338da2ff)__must_hold(&
DATARMNET63a2b7773e){struct DATARMNET745f724205*DATARMNET63b1a086d5;struct 
hlist_node*DATARMNET0386f6f82a;hash_for_each_possible_safe(DATARMNET1903907456,
DATARMNET63b1a086d5,DATARMNET0386f6f82a,DATARMNETe8608dd267,DATARMNET3396919a68
->DATARMNETf0d9de7e2f){if(DATARMNET1e31b22eff(&DATARMNET63b1a086d5->
DATARMNET54338da2ff,DATARMNET3396919a68)){hash_del_rcu(&DATARMNET63b1a086d5->
DATARMNETe8608dd267);kfree_rcu(DATARMNET63b1a086d5,DATARMNET28bfe9e6ad);
DATARMNET5ca94dbc3c(DATARMNET9f24b86462);return(0xd2d+202-0xdf7);}}
GENL_SET_ERR_MSG(DATARMNET54338da2ff,
"\x4e\x6f\x20\x73\x75\x63\x68\x20\x74\x75\x70\x6c\x65");return-ESRCH;}static 
void DATARMNETad43e44c7e(void){struct DATARMNET745f724205*DATARMNET63b1a086d5;
struct hlist_node*DATARMNET0386f6f82a;int DATARMNET5c2fd31d7b;mutex_lock(&
DATARMNET63a2b7773e);hash_for_each_safe(DATARMNET1903907456,DATARMNET5c2fd31d7b,
DATARMNET0386f6f82a,DATARMNET63b1a086d5,DATARMNETe8608dd267){hash_del_rcu(&
DATARMNET63b1a086d5->DATARMNETe8608dd267);kfree_rcu(DATARMNET63b1a086d5,
DATARMNET28bfe9e6ad);}mutex_unlock(&DATARMNET63a2b7773e);}static bool 
DATARMNET55aac1386b(struct DATARMNET8d3c2559ca*DATARMNET1476c48228,struct 
DATARMNET8d3c2559ca*DATARMNET57a0f36a25){struct in6_addr DATARMNET4c8c2ca74e={.
s6_addr32={4294967295,4294967295,(0xd2d+202-0xdf7),(0xd2d+202-0xdf7)},};if(
DATARMNET1476c48228->DATARMNET0d956cc77a!=DATARMNET57a0f36a25->
DATARMNET0d956cc77a)return false;if(DATARMNET1476c48228->DATARMNET0d956cc77a==
(0xd11+230-0xdf3))return DATARMNET1476c48228->DATARMNET0dc14167a1==
DATARMNET57a0f36a25->DATARMNET0dc14167a1;return!ipv6_masked_addr_cmp(&
DATARMNET1476c48228->DATARMNET5700daac01,&DATARMNET4c8c2ca74e,&
DATARMNET57a0f36a25->DATARMNET5700daac01);}static struct DATARMNET41b426061d*
DATARMNETcc0a01df2a(struct DATARMNET8d3c2559ca*DATARMNET54338da2ff)__must_hold(
RCU){struct DATARMNET41b426061d*DATARMNET63b1a086d5;hash_for_each_possible_rcu(
DATARMNET78ed39f13b,DATARMNET63b1a086d5,DATARMNETe8608dd267,DATARMNET54338da2ff
->DATARMNET0dc14167a1){if(DATARMNET55aac1386b(&DATARMNET63b1a086d5->
DATARMNET7ed5754a5c,DATARMNET54338da2ff))return DATARMNET63b1a086d5;}return NULL
;}static int DATARMNETe98553a8fc(struct notifier_block*DATARMNET272c159b3c,
unsigned long DATARMNET7f045a1e6e,void*data){struct net_device*
DATARMNET00dcb79bc4=netdev_notifier_info_to_dev(data);struct DATARMNET41b426061d
*DATARMNET2d4b4cfc9e;DATARMNET2d4b4cfc9e=container_of(DATARMNET272c159b3c,struct
 DATARMNET41b426061d,DATARMNET272c159b3c);if(!DATARMNET00dcb79bc4||strncmp(
DATARMNET00dcb79bc4->name,DATARMNET2d4b4cfc9e->DATARMNET852d4d00e2,IFNAMSIZ))
return NOTIFY_DONE;switch(DATARMNET7f045a1e6e){case NETDEV_UNREGISTER:if(
DATARMNET2d4b4cfc9e->DATARMNET7ed5754a5c.DATARMNET57656f6f2f){dev_put(
DATARMNET2d4b4cfc9e->DATARMNET7ed5754a5c.DATARMNET57656f6f2f);WRITE_ONCE(
DATARMNET2d4b4cfc9e->DATARMNET7ed5754a5c.DATARMNET57656f6f2f,NULL);}break;case 
NETDEV_REGISTER:if(!DATARMNET2d4b4cfc9e->DATARMNET7ed5754a5c.DATARMNET57656f6f2f
){dev_hold(DATARMNET00dcb79bc4);WRITE_ONCE(DATARMNET2d4b4cfc9e->
DATARMNET7ed5754a5c.DATARMNET57656f6f2f,DATARMNET00dcb79bc4);}break;default:
break;}return NOTIFY_DONE;}static int DATARMNET1ac13d5a2a(struct 
DATARMNET8d3c2559ca*DATARMNET7ed5754a5c,struct genl_info*DATARMNET54338da2ff)
__must_hold(&DATARMNETf46fb02ac6){struct DATARMNET41b426061d*DATARMNET2d4b4cfc9e
;int DATARMNET268a8314cf;rcu_read_lock();DATARMNET2d4b4cfc9e=DATARMNETcc0a01df2a
(DATARMNET7ed5754a5c);if(DATARMNET2d4b4cfc9e){GENL_SET_ERR_MSG(
DATARMNET54338da2ff,
"\x46\x57\x44\x20\x69\x6e\x66\x6f\x72\x6d\x61\x74\x69\x6f\x6e\x20\x61\x6c\x72\x65\x61\x64\x79\x20\x70\x72\x65\x73\x65\x6e\x74"
);rcu_read_unlock();return-EEXIST;}rcu_read_unlock();DATARMNET2d4b4cfc9e=kzalloc
(sizeof(*DATARMNET2d4b4cfc9e),GFP_KERNEL);if(!DATARMNET2d4b4cfc9e){
GENL_SET_ERR_MSG(DATARMNET54338da2ff,
"\x43\x61\x6e\x6e\x6f\x74\x20\x61\x6c\x6c\x6f\x63\x61\x74\x65\x20\x46\x57\x44\x20\x63\x6f\x6e\x74\x65\x78\x74"
);return-ENOMEM;}memcpy(&DATARMNET2d4b4cfc9e->DATARMNET7ed5754a5c,
DATARMNET7ed5754a5c,sizeof(*DATARMNET7ed5754a5c));DATARMNET2d4b4cfc9e->
DATARMNET7ed5754a5c.DATARMNET57656f6f2f=NULL;strlcpy(DATARMNET2d4b4cfc9e->
DATARMNET852d4d00e2,DATARMNET7ed5754a5c->DATARMNET57656f6f2f->name,IFNAMSIZ);
DATARMNET2d4b4cfc9e->DATARMNET272c159b3c.notifier_call=DATARMNETe98553a8fc;
DATARMNET268a8314cf=register_netdevice_notifier(&DATARMNET2d4b4cfc9e->
DATARMNET272c159b3c);if(DATARMNET268a8314cf){GENL_SET_ERR_MSG(
DATARMNET54338da2ff,
"\x52\x65\x67\x69\x73\x74\x65\x72\x69\x6e\x67\x20\x46\x57\x44\x20\x6e\x6f\x74\x69\x66\x69\x65\x72\x20\x66\x61\x69\x6c\x65\x64"
);kfree(DATARMNET2d4b4cfc9e);return DATARMNET268a8314cf;}INIT_HLIST_NODE(&
DATARMNET2d4b4cfc9e->DATARMNETe8608dd267);hash_add_rcu(DATARMNET78ed39f13b,&
DATARMNET2d4b4cfc9e->DATARMNETe8608dd267,DATARMNET7ed5754a5c->
DATARMNET0dc14167a1);return(0xd2d+202-0xdf7);}static int DATARMNET6518a28641(
struct DATARMNET41b426061d*DATARMNET2d4b4cfc9e)__must_hold(&DATARMNETf46fb02ac6)
{int DATARMNET268a8314cf;DATARMNET268a8314cf=unregister_netdevice_notifier(&
DATARMNET2d4b4cfc9e->DATARMNET272c159b3c);if(DATARMNET268a8314cf)return 
DATARMNET268a8314cf;hash_del_rcu(&DATARMNET2d4b4cfc9e->DATARMNETe8608dd267);
DATARMNETedae8262e1(&DATARMNET2d4b4cfc9e->DATARMNET7ed5754a5c);kfree_rcu(
DATARMNET2d4b4cfc9e,DATARMNET28bfe9e6ad);return DATARMNET268a8314cf;}static int 
DATARMNET6b6be8e27f(struct DATARMNET8d3c2559ca*DATARMNET7ed5754a5c,struct 
genl_info*DATARMNET54338da2ff)__must_hold(&DATARMNETf46fb02ac6){struct 
DATARMNET41b426061d*DATARMNET2d4b4cfc9e;int DATARMNET268a8314cf;rcu_read_lock();
DATARMNET2d4b4cfc9e=DATARMNETcc0a01df2a(DATARMNET7ed5754a5c);rcu_read_unlock();
if(!DATARMNET2d4b4cfc9e){GENL_SET_ERR_MSG(DATARMNET54338da2ff,
"\x4e\x6f\x20\x73\x75\x63\x68\x20\x46\x57\x44\x20\x69\x6e\x66\x6f\x72\x6d\x61\x74\x69\x6f\x6e"
);return-ESRCH;}if(strncmp(DATARMNET2d4b4cfc9e->DATARMNET852d4d00e2,
DATARMNET7ed5754a5c->DATARMNET57656f6f2f->name,IFNAMSIZ)){GENL_SET_ERR_MSG(
DATARMNET54338da2ff,
"\x49\x6e\x63\x6f\x72\x72\x65\x63\x74\x20\x46\x57\x44\x20\x64\x65\x76\x69\x63\x65"
);return-ENODEV;}DATARMNET268a8314cf=DATARMNET6518a28641(DATARMNET2d4b4cfc9e);if
(DATARMNET268a8314cf){GENL_SET_ERR_MSG(DATARMNET54338da2ff,
"\x55\x6e\x72\x65\x67\x69\x73\x74\x65\x72\x69\x6e\x67\x20\x6e\x6f\x74\x69\x66\x69\x65\x72\x20\x66\x61\x69\x6c\x65\x64"
);return DATARMNET268a8314cf;}return DATARMNET268a8314cf;}static void 
DATARMNETe5b03fe375(void){struct DATARMNET41b426061d*DATARMNET54338da2ff;struct 
hlist_node*DATARMNET0386f6f82a;int DATARMNET5c2fd31d7b;mutex_lock(&
DATARMNETf46fb02ac6);hash_for_each_safe(DATARMNET78ed39f13b,DATARMNET5c2fd31d7b,
DATARMNET0386f6f82a,DATARMNET54338da2ff,DATARMNETe8608dd267)DATARMNET6518a28641(
DATARMNET54338da2ff);mutex_unlock(&DATARMNETf46fb02ac6);}static bool 
DATARMNET7490934ea9(__be16 DATARMNETf0d9de7e2f)__must_hold(RCU){struct 
DATARMNETda06413d0d*DATARMNET63b1a086d5;hash_for_each_possible_rcu(
DATARMNET133502ca0e,DATARMNET63b1a086d5,DATARMNETe8608dd267,DATARMNETf0d9de7e2f)
{if(DATARMNET63b1a086d5->DATARMNETf0d9de7e2f==DATARMNETf0d9de7e2f)return true;}
return false;}static int DATARMNET3b10d1c14b(__be16 DATARMNETf0d9de7e2f,struct 
genl_info*DATARMNET54338da2ff)__must_hold(&DATARMNET954bef55d0){struct 
DATARMNETda06413d0d*DATARMNET63b1a086d5;rcu_read_lock();if(DATARMNET7490934ea9(
DATARMNETf0d9de7e2f)){rcu_read_unlock();GENL_SET_ERR_MSG(DATARMNET54338da2ff,
"\x45\x6e\x63\x61\x70\x20\x70\x6f\x72\x74\x20\x61\x6c\x72\x65\x61\x64\x79\x20\x70\x72\x65\x73\x65\x6e\x74"
);return-EEXIST;}rcu_read_unlock();DATARMNET63b1a086d5=kzalloc(sizeof(*
DATARMNET63b1a086d5),GFP_KERNEL);if(!DATARMNET63b1a086d5){GENL_SET_ERR_MSG(
DATARMNET54338da2ff,
"\x43\x61\x6e\x6e\x6f\x74\x20\x61\x6c\x6c\x6f\x63\x61\x74\x65\x20\x65\x6e\x63\x61\x70\x20\x70\x6f\x72\x74\x20\x6d\x65\x6d\x6f\x72\x79"
);return-ENOMEM;}DATARMNET63b1a086d5->DATARMNETf0d9de7e2f=DATARMNETf0d9de7e2f;
INIT_HLIST_NODE(&DATARMNET63b1a086d5->DATARMNETe8608dd267);hash_add_rcu(
DATARMNET133502ca0e,&DATARMNET63b1a086d5->DATARMNETe8608dd267,
DATARMNETf0d9de7e2f);DATARMNET5ca94dbc3c(DATARMNET90782e08cf);return
(0xd2d+202-0xdf7);}static int DATARMNETc023021120(__be16 DATARMNETf0d9de7e2f,
struct genl_info*DATARMNET54338da2ff)__must_hold(&DATARMNET954bef55d0){struct 
DATARMNETda06413d0d*DATARMNET63b1a086d5;struct hlist_node*DATARMNET0386f6f82a;
hash_for_each_possible_safe(DATARMNET133502ca0e,DATARMNET63b1a086d5,
DATARMNET0386f6f82a,DATARMNETe8608dd267,DATARMNETf0d9de7e2f){if(
DATARMNET63b1a086d5->DATARMNETf0d9de7e2f==DATARMNETf0d9de7e2f){hash_del_rcu(&
DATARMNET63b1a086d5->DATARMNETe8608dd267);kfree_rcu(DATARMNET63b1a086d5,
DATARMNET28bfe9e6ad);DATARMNET5ca94dbc3c(DATARMNETb7c9f010b2);return
(0xd2d+202-0xdf7);}}GENL_SET_ERR_MSG(DATARMNET54338da2ff,
"\x4e\x6f\x20\x73\x75\x63\x68\x20\x70\x6f\x72\x74\x20\x76\x61\x6c\x75\x65");
return-ESRCH;}static bool DATARMNETa96214b53c(__be16 DATARMNETf0d9de7e2f)
__must_hold(RCU){struct DATARMNETda06413d0d*DATARMNET63b1a086d5;
hash_for_each_possible_rcu(DATARMNET665d2f133f,DATARMNET63b1a086d5,
DATARMNETe8608dd267,DATARMNETf0d9de7e2f){if(DATARMNET63b1a086d5->
DATARMNETf0d9de7e2f==DATARMNETf0d9de7e2f)return true;}return false;}int 
DATARMNET59b8376224(__be16 DATARMNETf0d9de7e2f,struct genl_info*
DATARMNET54338da2ff)__must_hold(&DATARMNET954bef55d0){struct DATARMNETda06413d0d
*DATARMNET63b1a086d5;struct hlist_node*DATARMNET0386f6f82a;
hash_for_each_possible_safe(DATARMNET665d2f133f,DATARMNET63b1a086d5,
DATARMNET0386f6f82a,DATARMNETe8608dd267,DATARMNETf0d9de7e2f){if(
DATARMNET63b1a086d5->DATARMNETf0d9de7e2f==DATARMNETf0d9de7e2f){hash_del_rcu(&
DATARMNET63b1a086d5->DATARMNETe8608dd267);kfree_rcu(DATARMNET63b1a086d5,
DATARMNET28bfe9e6ad);DATARMNET5ca94dbc3c(DATARMNETa726eebea4);return
(0xd2d+202-0xdf7);}}return(0xd2d+202-0xdf7);}int DATARMNET0b12e969c5(__be16 
DATARMNETf0d9de7e2f,struct genl_info*DATARMNET54338da2ff)__must_hold(&
DATARMNET954bef55d0){struct DATARMNETda06413d0d*DATARMNET63b1a086d5;
rcu_read_lock();if(DATARMNETa96214b53c(DATARMNETf0d9de7e2f)){rcu_read_unlock();
GENL_SET_ERR_MSG(DATARMNET54338da2ff,
"\x45\x6e\x63\x61\x70\x20\x70\x6f\x72\x74\x20\x61\x6c\x72\x65\x61\x64\x79\x20\x70\x72\x65\x73\x65\x6e\x74"
);return-EEXIST;}rcu_read_unlock();DATARMNET63b1a086d5=kzalloc(sizeof(*
DATARMNET63b1a086d5),GFP_KERNEL);if(!DATARMNET63b1a086d5){GENL_SET_ERR_MSG(
DATARMNET54338da2ff,
"\x43\x61\x6e\x6e\x6f\x74\x20\x61\x6c\x6c\x6f\x63\x61\x74\x65\x20\x65\x6e\x63\x61\x70\x20\x70\x6f\x72\x74\x20\x6d\x65\x6d\x6f\x72\x79"
);return-ENOMEM;}DATARMNET63b1a086d5->DATARMNETf0d9de7e2f=DATARMNETf0d9de7e2f;
INIT_HLIST_NODE(&DATARMNET63b1a086d5->DATARMNETe8608dd267);hash_add_rcu(
DATARMNET665d2f133f,&DATARMNET63b1a086d5->DATARMNETe8608dd267,
DATARMNETf0d9de7e2f);DATARMNET5ca94dbc3c(DATARMNET990edaea89);return
(0xd2d+202-0xdf7);}static void DATARMNET1f36d4813c(void){struct 
DATARMNETda06413d0d*DATARMNET63b1a086d5;struct hlist_node*DATARMNET0386f6f82a;
int DATARMNET5c2fd31d7b;mutex_lock(&DATARMNET954bef55d0);hash_for_each_safe(
DATARMNET133502ca0e,DATARMNET5c2fd31d7b,DATARMNET0386f6f82a,DATARMNET63b1a086d5,
DATARMNETe8608dd267){hash_del_rcu(&DATARMNET63b1a086d5->DATARMNETe8608dd267);
kfree_rcu(DATARMNET63b1a086d5,DATARMNET28bfe9e6ad);}mutex_unlock(&
DATARMNET954bef55d0);}static rx_handler_result_t DATARMNET37a92021f9(struct 
sk_buff**DATARMNET89946cec52){struct DATARMNET0ca9d8ead7 DATARMNETa76763310b={};
struct DATARMNETb89ecedefc DATARMNET3396919a68={};struct DATARMNET41b426061d*
DATARMNET72f0eefdce;struct DATARMNET8d3c2559ca*DATARMNET2d4b4cfc9e,
DATARMNET54338da2ff;struct sk_buff*DATARMNET543491eb0f=*DATARMNET89946cec52;
rx_handler_result_t DATARMNET1dec89a127=RX_HANDLER_PASS;int DATARMNET611d08d671;
if(!DATARMNET543491eb0f||DATARMNET543491eb0f->pkt_type==PACKET_LOOPBACK)return 
DATARMNET1dec89a127;rcu_read_lock();DATARMNET5ca94dbc3c(DATARMNET735bb8578c);if(
DATARMNET543491eb0f->protocol==htons(ETH_P_IP)){struct iphdr*DATARMNET86f1f2cdc9
=ip_hdr(DATARMNET543491eb0f);if(DATARMNET86f1f2cdc9->protocol==IPPROTO_ICMP){
DATARMNETa76763310b.DATARMNETdfe430c2d6=DATARMNET86f1f2cdc9->daddr;
DATARMNETa76763310b.DATARMNET2cb607d686=DATARMNET86f1f2cdc9->saddr;
DATARMNETa76763310b.DATARMNET0d956cc77a=(0xd11+230-0xdf3);DATARMNET2d4b4cfc9e=
DATARMNET07f0e0f286(&DATARMNETa76763310b);if(DATARMNET2d4b4cfc9e)goto 
DATARMNET1e5291b369;}DATARMNET54338da2ff.DATARMNET0dc14167a1=DATARMNET86f1f2cdc9
->daddr;DATARMNET54338da2ff.DATARMNET0d956cc77a=(0xd11+230-0xdf3);
DATARMNET72f0eefdce=DATARMNETcc0a01df2a(&DATARMNET54338da2ff);if(!
DATARMNET72f0eefdce)goto DATARMNETbf4095f79e;DATARMNET2d4b4cfc9e=&
DATARMNET72f0eefdce->DATARMNET7ed5754a5c;DATARMNET3396919a68.DATARMNET0d956cc77a
=(0xd11+230-0xdf3);DATARMNET3396919a68.DATARMNET4924e79411=DATARMNET86f1f2cdc9->
protocol;DATARMNET611d08d671=DATARMNET86f1f2cdc9->ihl*(0xd11+230-0xdf3);if(
ip_is_fragment(DATARMNET86f1f2cdc9)){if(!DATARMNET579f75aa50(DATARMNET543491eb0f
,DATARMNET611d08d671,&DATARMNET3396919a68,DATARMNET2d4b4cfc9e))
DATARMNET1dec89a127=RX_HANDLER_CONSUMED;goto DATARMNETbf4095f79e;}}else if(
DATARMNET543491eb0f->protocol==htons(ETH_P_IPV6)){struct ipv6hdr*
DATARMNETbf55123e5b=ipv6_hdr(DATARMNET543491eb0f);__be16 frag_off;u8 
DATARMNET65293f17c4;DATARMNET65293f17c4=DATARMNETbf55123e5b->nexthdr;
DATARMNET611d08d671=ipv6_skip_exthdr(DATARMNET543491eb0f,sizeof(*
DATARMNETbf55123e5b),&DATARMNET65293f17c4,&frag_off);if(DATARMNET611d08d671<
(0xd2d+202-0xdf7))goto DATARMNETbf4095f79e;if(DATARMNET65293f17c4==
IPPROTO_ICMPV6){memcpy(&DATARMNETa76763310b.DATARMNET815cbb4bf5,&
DATARMNETbf55123e5b->daddr,sizeof(DATARMNETa76763310b.DATARMNET815cbb4bf5));
memcpy(&DATARMNETa76763310b.DATARMNETc3f31215b7,&DATARMNETbf55123e5b->saddr,
sizeof(DATARMNETa76763310b.DATARMNETc3f31215b7));DATARMNETa76763310b.
DATARMNET0d956cc77a=(0xd03+244-0xdf1);DATARMNET2d4b4cfc9e=DATARMNET07f0e0f286(&
DATARMNETa76763310b);if(DATARMNET2d4b4cfc9e)goto DATARMNET1e5291b369;}memcpy(&
DATARMNET54338da2ff.DATARMNET5700daac01,&DATARMNETbf55123e5b->daddr,sizeof(
DATARMNET54338da2ff.DATARMNET5700daac01));DATARMNET54338da2ff.
DATARMNET0d956cc77a=(0xd03+244-0xdf1);DATARMNET72f0eefdce=DATARMNETcc0a01df2a(&
DATARMNET54338da2ff);if(!DATARMNET72f0eefdce)goto DATARMNETbf4095f79e;
DATARMNET2d4b4cfc9e=&DATARMNET72f0eefdce->DATARMNET7ed5754a5c;
DATARMNET3396919a68.DATARMNET0d956cc77a=(0xd03+244-0xdf1);DATARMNET3396919a68.
DATARMNET4924e79411=DATARMNET65293f17c4;if(frag_off){if(!DATARMNETaca8ca54ed(
DATARMNET543491eb0f,DATARMNET611d08d671,&DATARMNET3396919a68,DATARMNET2d4b4cfc9e
))DATARMNET1dec89a127=RX_HANDLER_CONSUMED;goto DATARMNETbf4095f79e;}}else{goto 
DATARMNETbf4095f79e;}if(DATARMNET3396919a68.DATARMNET4924e79411==IPPROTO_TCP||
DATARMNET3396919a68.DATARMNET4924e79411==IPPROTO_UDP){struct udphdr*
DATARMNET75be5f3406=(struct udphdr*)(DATARMNET543491eb0f->data+
DATARMNET611d08d671);DATARMNET3396919a68.DATARMNETf0d9de7e2f=DATARMNET75be5f3406
->dest;if(DATARMNETa8b2566e6a(DATARMNET543491eb0f,&DATARMNET3396919a68,
DATARMNET611d08d671)){if(DATARMNET0a4704e5e0(&DATARMNET3396919a68)){kfree_skb(
DATARMNET543491eb0f);DATARMNET1dec89a127=RX_HANDLER_CONSUMED;DATARMNET5ca94dbc3c
(DATARMNET0981317411);goto DATARMNETbf4095f79e;}DATARMNET5ca94dbc3c(
DATARMNETd1ad664d00);goto DATARMNETbf4095f79e;}}else if(DATARMNET3396919a68.
DATARMNET4924e79411==IPPROTO_ESP){struct ip_esp_hdr*DATARMNET73ee6a7020=(struct 
ip_esp_hdr*)(DATARMNET543491eb0f->data+DATARMNET611d08d671);DATARMNET3396919a68.
DATARMNET906b2ee561=DATARMNET73ee6a7020->spi;}else{goto DATARMNETbf4095f79e;}if(
DATARMNET4eafcdee07(&DATARMNET3396919a68))goto DATARMNET1e5291b369;goto 
DATARMNETbf4095f79e;DATARMNET1e5291b369:if(!DATARMNET4899053671(
DATARMNET543491eb0f,DATARMNET2d4b4cfc9e))DATARMNET1dec89a127=RX_HANDLER_CONSUMED
;DATARMNETbf4095f79e:rcu_read_unlock();return DATARMNET1dec89a127;}static int 
DATARMNET0ed065ddb7(struct notifier_block*DATARMNET272c159b3c,unsigned long 
DATARMNET7f045a1e6e,void*data){struct net_device*DATARMNET00dcb79bc4=
netdev_notifier_info_to_dev(data);if(!DATARMNET00dcb79bc4||strncmp(
DATARMNET00dcb79bc4->name,DATARMNET30500ba48c,IFNAMSIZ))return NOTIFY_DONE;
switch(DATARMNET7f045a1e6e){case NETDEV_UNREGISTER:netdev_rx_handler_unregister(
DATARMNET00dcb79bc4);break;case NETDEV_REGISTER:if(netdev_rx_handler_register(
DATARMNET00dcb79bc4,DATARMNET37a92021f9,NULL))pr_err(
"\x25\x73\x28\x29\x3a\x20\x52\x65\x67\x69\x73\x74\x65\x72\x69\x6e\x67\x20\x68\x61\x6e\x64\x6c\x65\x72\x20\x66\x61\x69\x6c\x65\x64" "\n"
,__func__);break;default:break;}return NOTIFY_DONE;}static struct notifier_block
 DATARMNETa1726000d8={.notifier_call=DATARMNET0ed065ddb7,};static int 
DATARMNET116f9a46aa(void){int DATARMNET268a8314cf;if(!DATARMNET30500ba48c[
(0xd2d+202-0xdf7)])return(0xd2d+202-0xdf7);DATARMNET268a8314cf=
unregister_netdevice_notifier(&DATARMNETa1726000d8);if(!DATARMNET268a8314cf)
DATARMNET30500ba48c[(0xd2d+202-0xdf7)]=(0xd2d+202-0xdf7);return 
DATARMNET268a8314cf;}static void DATARMNETbb4efa5b3d(void){DATARMNET116f9a46aa()
;DATARMNET1f36d4813c();DATARMNET8c0e010dfb();DATARMNETe5b03fe375();
DATARMNETad43e44c7e();}static int DATARMNET38ebe8f319(struct sk_buff*
DATARMNET543491eb0f,int DATARMNET1faf88208b){if(!pskb_may_pull(
DATARMNET543491eb0f,DATARMNET1faf88208b))return-ENOMEM;if(!skb_cloned(
DATARMNET543491eb0f)||skb_clone_writable(DATARMNET543491eb0f,DATARMNET1faf88208b
))return(0xd2d+202-0xdf7);return pskb_expand_head(DATARMNET543491eb0f,
(0xd2d+202-0xdf7),(0xd2d+202-0xdf7),GFP_ATOMIC);}static void DATARMNET9a8d756527
(__sum16*DATARMNETc2284e5688,struct sk_buff*DATARMNET543491eb0f,__be32 
DATARMNET9080427d4e,__be32 DATARMNETc0e620c987,bool DATARMNETcb0345b337){if(
DATARMNET543491eb0f->ip_summed!=CHECKSUM_PARTIAL){csum_replace4(
DATARMNETc2284e5688,DATARMNET9080427d4e,DATARMNETc0e620c987);if(
DATARMNET543491eb0f->ip_summed==CHECKSUM_COMPLETE&&DATARMNETcb0345b337){
DATARMNET543491eb0f->csum=csum_sub(~(DATARMNET543491eb0f->csum),(__wsum)
DATARMNET9080427d4e);DATARMNET543491eb0f->csum=~csum_add(DATARMNET543491eb0f->
csum,(__wsum)DATARMNETc0e620c987);}}else if(DATARMNETcb0345b337){__wsum 
DATARMNET0386f6f82a=csum_unfold(*DATARMNETc2284e5688);DATARMNET0386f6f82a=
csum_sub(DATARMNET0386f6f82a,(__wsum)DATARMNET9080427d4e);DATARMNET0386f6f82a=
csum_add(DATARMNET0386f6f82a,(__wsum)DATARMNETc0e620c987);*DATARMNETc2284e5688=~
csum_fold(DATARMNET0386f6f82a);}}static void DATARMNETc03853e26d(__sum16*
DATARMNETc2284e5688,struct sk_buff*DATARMNET543491eb0f,__be16 
DATARMNET9080427d4e,__be16 DATARMNETc0e620c987,bool DATARMNETcb0345b337){
DATARMNET9a8d756527(DATARMNETc2284e5688,DATARMNET543491eb0f,(__be32)
DATARMNET9080427d4e,(__be32)DATARMNETc0e620c987,DATARMNETcb0345b337);}static 
unsigned int DATARMNET7060ca9a47(u8*DATARMNET54fdee4fda,unsigned int 
DATARMNET6396f657b3){if(DATARMNET54fdee4fda[DATARMNET6396f657b3]==TCPOPT_EOL||
DATARMNET54fdee4fda[DATARMNET6396f657b3]==TCPOPT_NOP||!DATARMNET54fdee4fda[
DATARMNET6396f657b3+(0xd26+209-0xdf6)])return(0xd26+209-0xdf6);return 
DATARMNET54fdee4fda[DATARMNET6396f657b3+(0xd26+209-0xdf6)];}void 
DATARMNET7ca470d54b(struct sk_buff*DATARMNET543491eb0f,u32 DATARMNET1464100e7a){
struct tcphdr*DATARMNET668416551c;u8 DATARMNET630b15102e[(0xf07+1090-0x130d)];u8
*DATARMNET54fdee4fda;__be16 DATARMNETdda9f3dd51=htons((0xef7+3481-0x181c));u16 
DATARMNET611d08d671;u16 DATARMNET7fa3427233;unsigned int DATARMNETefc9df3df2;
__be32 DATARMNET572f0d1999;u8 DATARMNET0d956cc77a;if(DATARMNET543491eb0f->
protocol==htons(ETH_P_IP)){struct iphdr*DATARMNET86f1f2cdc9,DATARMNETbf6548198e;
DATARMNET0d956cc77a=(0xd11+230-0xdf3);DATARMNET86f1f2cdc9=skb_header_pointer(
DATARMNET543491eb0f,(0xd2d+202-0xdf7),sizeof(*DATARMNET86f1f2cdc9),&
DATARMNETbf6548198e);if(!DATARMNET86f1f2cdc9)goto DATARMNET268a8314cf;if(
DATARMNET86f1f2cdc9->protocol!=IPPROTO_TCP)goto DATARMNETed6aa0a77f;
DATARMNET611d08d671=DATARMNET86f1f2cdc9->ihl*(0xd11+230-0xdf3);}else if(
DATARMNET543491eb0f->protocol==htons(ETH_P_IPV6)){struct ipv6hdr*
DATARMNETbf55123e5b,DATARMNETcf1d9e2c1e;__be16 frag_off;u8 DATARMNETa8d8445982;
DATARMNET0d956cc77a=(0xd03+244-0xdf1);DATARMNETbf55123e5b=skb_header_pointer(
DATARMNET543491eb0f,(0xd2d+202-0xdf7),sizeof(*DATARMNETbf55123e5b),&
DATARMNETcf1d9e2c1e);if(!DATARMNETbf55123e5b)goto DATARMNET268a8314cf;
DATARMNETa8d8445982=DATARMNETbf55123e5b->nexthdr;DATARMNET611d08d671=
ipv6_skip_exthdr(DATARMNET543491eb0f,sizeof(*DATARMNETbf55123e5b),&
DATARMNETa8d8445982,&frag_off);if(DATARMNET611d08d671<(0xd2d+202-0xdf7))goto 
DATARMNET268a8314cf;if(DATARMNETa8d8445982!=IPPROTO_TCP)goto DATARMNETed6aa0a77f
;}else{goto DATARMNET268a8314cf;}DATARMNET668416551c=skb_header_pointer(
DATARMNET543491eb0f,DATARMNET611d08d671,sizeof(*DATARMNET668416551c),&
DATARMNET630b15102e);if(!DATARMNET668416551c)goto DATARMNET268a8314cf;if(!(
tcp_flag_word(DATARMNET668416551c)&DATARMNET1464100e7a))goto DATARMNETed6aa0a77f
;DATARMNET7fa3427233=DATARMNET668416551c->doff*(0xd11+230-0xdf3);if(
DATARMNET38ebe8f319(DATARMNET543491eb0f,DATARMNET611d08d671+DATARMNET7fa3427233)
)goto DATARMNET268a8314cf;DATARMNET668416551c=skb_header_pointer(
DATARMNET543491eb0f,DATARMNET611d08d671,DATARMNET7fa3427233,&DATARMNET630b15102e
);if(!DATARMNET668416551c)goto DATARMNET268a8314cf;DATARMNET54fdee4fda=(u8*)
DATARMNET668416551c;for(DATARMNETefc9df3df2=sizeof(*DATARMNET668416551c);
DATARMNETefc9df3df2<DATARMNET7fa3427233;DATARMNETefc9df3df2+=DATARMNET7060ca9a47
(DATARMNET54fdee4fda,DATARMNETefc9df3df2)){__be16*DATARMNETb3032fac16;if(
DATARMNET54fdee4fda[DATARMNETefc9df3df2]!=TCPOPT_MSS||DATARMNET54fdee4fda[
DATARMNETefc9df3df2+(0xd26+209-0xdf6)]!=TCPOLEN_MSS)continue;DATARMNETb3032fac16
=(__be16*)(&DATARMNET54fdee4fda[DATARMNETefc9df3df2+(0xd1f+216-0xdf5)]);if(*
DATARMNETb3032fac16<=DATARMNETdda9f3dd51)goto DATARMNETed6aa0a77f;
DATARMNETc03853e26d(&DATARMNET668416551c->check,DATARMNET543491eb0f,*
DATARMNETb3032fac16,DATARMNETdda9f3dd51,false);*DATARMNETb3032fac16=
DATARMNETdda9f3dd51;DATARMNET5ca94dbc3c(DATARMNETef2af4f071);return;}if(
DATARMNET543491eb0f->len>DATARMNET611d08d671+DATARMNET7fa3427233||
DATARMNET7fa3427233>=(0xf07+1090-0x130d))goto DATARMNETed6aa0a77f;if(
skb_tailroom(DATARMNET543491eb0f)<TCPOLEN_MSS){if(pskb_expand_head(
DATARMNET543491eb0f,(0xd2d+202-0xdf7),TCPOLEN_MSS-skb_tailroom(
DATARMNET543491eb0f),GFP_ATOMIC))goto DATARMNET268a8314cf;DATARMNET668416551c=
skb_header_pointer(DATARMNET543491eb0f,DATARMNET611d08d671,DATARMNET7fa3427233,&
DATARMNET630b15102e);if(!DATARMNET668416551c)goto DATARMNET268a8314cf;}
DATARMNETc03853e26d(&DATARMNET668416551c->check,DATARMNET543491eb0f,htons(
DATARMNET543491eb0f->len-DATARMNET611d08d671),htons(DATARMNET543491eb0f->len-
DATARMNET611d08d671+TCPOLEN_MSS),true);DATARMNET54fdee4fda=skb_put(
DATARMNET543491eb0f,TCPOLEN_MSS);if(DATARMNET0d956cc77a==(0xd11+230-0xdf3))
DATARMNETdda9f3dd51=htons(min_t(u16,ntohs(DATARMNETdda9f3dd51),
(0x545+2434-0xcaf)));else DATARMNETdda9f3dd51=htons(min_t(u16,ntohs(
DATARMNETdda9f3dd51),(0xbf7+4058-0x170d)));DATARMNET54fdee4fda[(0xd2d+202-0xdf7)
]=TCPOPT_MSS;DATARMNET54fdee4fda[(0xd26+209-0xdf6)]=TCPOLEN_MSS;*((__be16*)(
DATARMNET54fdee4fda+(0xd1f+216-0xdf5)))=DATARMNETdda9f3dd51;DATARMNET9a8d756527(
&DATARMNET668416551c->check,DATARMNET543491eb0f,(0xd2d+202-0xdf7),*((__be32*)
DATARMNET54fdee4fda),false);DATARMNET572f0d1999=tcp_flag_word(
DATARMNET668416551c);DATARMNET668416551c->doff++;DATARMNET9a8d756527(&
DATARMNET668416551c->check,DATARMNET543491eb0f,DATARMNET572f0d1999,tcp_flag_word
(DATARMNET668416551c),false);if(DATARMNET0d956cc77a==(0xd11+230-0xdf3)){struct 
iphdr*DATARMNET86f1f2cdc9=ip_hdr(DATARMNET543491eb0f);csum_replace2(&
DATARMNET86f1f2cdc9->check,DATARMNET86f1f2cdc9->tot_len,htons(
DATARMNET543491eb0f->len));DATARMNET86f1f2cdc9->tot_len=htons(
DATARMNET543491eb0f->len);}else{struct ipv6hdr*DATARMNETbf55123e5b=ipv6_hdr(
DATARMNET543491eb0f);DATARMNETbf55123e5b->payload_len=htons(ntohs(
DATARMNETbf55123e5b->payload_len)+TCPOLEN_MSS);}DATARMNET5ca94dbc3c(
DATARMNETef2af4f071);return;DATARMNETed6aa0a77f:DATARMNET5ca94dbc3c(
DATARMNETebc1b87b7d);return;DATARMNET268a8314cf:DATARMNET5ca94dbc3c(
DATARMNET21bdbe6a27);return;}int DATARMNET4899053671(struct sk_buff*
DATARMNET543491eb0f,struct DATARMNET8d3c2559ca*DATARMNET54338da2ff){struct 
net_device*DATARMNET00dcb79bc4;DATARMNET00dcb79bc4=READ_ONCE(DATARMNET54338da2ff
->DATARMNET57656f6f2f);if(!DATARMNET00dcb79bc4){DATARMNET5ca94dbc3c(
DATARMNET591885a019);return-ENODEV;}DATARMNET7ca470d54b(DATARMNET543491eb0f,
TCP_FLAG_SYN|TCP_FLAG_ACK);DATARMNET543491eb0f->dev=DATARMNET00dcb79bc4;
dev_queue_xmit(DATARMNET543491eb0f);DATARMNET5ca94dbc3c(DATARMNETf4c2a83526);
return(0xd2d+202-0xdf7);}bool DATARMNET4eafcdee07(struct DATARMNETb89ecedefc*
DATARMNET3396919a68)__must_hold(RCU){struct DATARMNET745f724205*
DATARMNET63b1a086d5;hash_for_each_possible_rcu(DATARMNET1903907456,
DATARMNET63b1a086d5,DATARMNETe8608dd267,DATARMNET3396919a68->DATARMNETf0d9de7e2f
){if(DATARMNET1e31b22eff(&DATARMNET63b1a086d5->DATARMNET54338da2ff,
DATARMNET3396919a68))return true;}return false;}int DATARMNET53f12a0f7d(struct 
DATARMNETb89ecedefc*DATARMNETcadc2ef9aa,u32 DATARMNETef77661260,struct genl_info
*DATARMNET54338da2ff){int DATARMNET268a8314cf=(0xd2d+202-0xdf7);u32 
DATARMNETefc9df3df2;mutex_lock(&DATARMNET63a2b7773e);for(DATARMNETefc9df3df2=
(0xd2d+202-0xdf7);DATARMNETefc9df3df2<DATARMNETef77661260;DATARMNETefc9df3df2++)
{DATARMNET268a8314cf=DATARMNET0b72d312f9(&DATARMNETcadc2ef9aa[
DATARMNETefc9df3df2],DATARMNET54338da2ff);if(DATARMNET268a8314cf){if(
DATARMNET268a8314cf==-EEXIST)DATARMNET268a8314cf=(0xd2d+202-0xdf7);else break;}}
mutex_unlock(&DATARMNET63a2b7773e);return DATARMNET268a8314cf;}int 
DATARMNET07f6485c9b(struct DATARMNETb89ecedefc*DATARMNETcadc2ef9aa,u32 
DATARMNETef77661260,struct genl_info*DATARMNET54338da2ff){int 
DATARMNET268a8314cf=(0xd2d+202-0xdf7);u32 DATARMNETefc9df3df2;mutex_lock(&
DATARMNET63a2b7773e);for(DATARMNETefc9df3df2=(0xd2d+202-0xdf7);
DATARMNETefc9df3df2<DATARMNETef77661260;DATARMNETefc9df3df2++){
DATARMNET268a8314cf=DATARMNET79343e3135(&DATARMNETcadc2ef9aa[DATARMNETefc9df3df2
],DATARMNET54338da2ff);if(DATARMNET268a8314cf){if(DATARMNET268a8314cf==-ESRCH)
DATARMNET268a8314cf=(0xd2d+202-0xdf7);else break;}}mutex_unlock(&
DATARMNET63a2b7773e);return DATARMNET268a8314cf;}int DATARMNET97b2388e63(char*
DATARMNET852d4d00e2,struct genl_info*DATARMNET54338da2ff){int 
DATARMNET268a8314cf;if(!strncmp(DATARMNET30500ba48c,DATARMNET852d4d00e2,IFNAMSIZ
)){GENL_SET_ERR_MSG(DATARMNET54338da2ff,
"\x44\x65\x76\x69\x63\x65\x20\x69\x73\x20\x61\x6c\x72\x65\x61\x64\x79\x20\x73\x65\x74"
);return(0xd2d+202-0xdf7);}DATARMNET268a8314cf=DATARMNET116f9a46aa();if(
DATARMNET268a8314cf){GENL_SET_ERR_MSG(DATARMNET54338da2ff,
"\x4b\x65\x72\x6e\x65\x6c\x20\x65\x72\x72\x6f\x72\x2c\x20\x6e\x6f\x74\x69\x66\x69\x65\x72\x20\x75\x6e\x72\x65\x67\x69\x73\x74\x65\x72\x20\x66\x61\x69\x6c\x65\x64"
);return DATARMNET268a8314cf;}strlcpy(DATARMNET30500ba48c,DATARMNET852d4d00e2,
IFNAMSIZ);DATARMNET268a8314cf=register_netdevice_notifier(&DATARMNETa1726000d8);
if(DATARMNET268a8314cf){GENL_SET_ERR_MSG(DATARMNET54338da2ff,
"\x4b\x65\x72\x6e\x65\x6c\x20\x65\x72\x72\x6f\x72\x2c\x20\x6e\x6f\x74\x69\x66\x69\x65\x72\x20\x66\x61\x69\x6c\x65\x64"
);DATARMNET30500ba48c[(0xd2d+202-0xdf7)]=(0xd2d+202-0xdf7);}return 
DATARMNET268a8314cf;}int DATARMNETa903cd5994(char*DATARMNET852d4d00e2,struct 
genl_info*DATARMNET54338da2ff){return DATARMNET116f9a46aa();}int 
DATARMNET947eb110d2(struct DATARMNET8d3c2559ca*DATARMNET2d4b4cfc9e,struct 
genl_info*DATARMNET54338da2ff){int DATARMNET268a8314cf;mutex_lock(&
DATARMNETf46fb02ac6);DATARMNET268a8314cf=DATARMNET1ac13d5a2a(DATARMNET2d4b4cfc9e
,DATARMNET54338da2ff);mutex_unlock(&DATARMNETf46fb02ac6);return 
DATARMNET268a8314cf;}int DATARMNETb8b35fdc18(struct DATARMNET8d3c2559ca*
DATARMNET2d4b4cfc9e,struct genl_info*DATARMNET54338da2ff){int 
DATARMNET268a8314cf;mutex_lock(&DATARMNETf46fb02ac6);DATARMNET268a8314cf=
DATARMNET6b6be8e27f(DATARMNET2d4b4cfc9e,DATARMNET54338da2ff);mutex_unlock(&
DATARMNETf46fb02ac6);return DATARMNET268a8314cf;}int DATARMNET8d5a5a7047(__be16 
DATARMNETf0d9de7e2f,struct genl_info*DATARMNET54338da2ff){int 
DATARMNET268a8314cf;mutex_lock(&DATARMNET954bef55d0);DATARMNET268a8314cf=
DATARMNET3b10d1c14b(DATARMNETf0d9de7e2f,DATARMNET54338da2ff);mutex_unlock(&
DATARMNET954bef55d0);return DATARMNET268a8314cf;}int DATARMNETc97c6a4265(__be16 
DATARMNETf0d9de7e2f,struct genl_info*DATARMNET54338da2ff){int 
DATARMNET268a8314cf;mutex_lock(&DATARMNET954bef55d0);DATARMNET268a8314cf=
DATARMNETc023021120(DATARMNETf0d9de7e2f,DATARMNET54338da2ff);mutex_unlock(&
DATARMNET954bef55d0);return DATARMNET268a8314cf;}bool DATARMNETa8b2566e6a(struct
 sk_buff*DATARMNET543491eb0f,struct DATARMNETb89ecedefc*DATARMNET3396919a68,int 
DATARMNET611d08d671){struct udphdr*DATARMNET75be5f3406,DATARMNETc82d2f4e16;
__be32*DATARMNETdf2dbc641f,DATARMNET6c56902362;if(DATARMNET3396919a68->
DATARMNET4924e79411!=IPPROTO_UDP||!DATARMNET7490934ea9(DATARMNET3396919a68->
DATARMNETf0d9de7e2f))return false;DATARMNET75be5f3406=skb_header_pointer(
DATARMNET543491eb0f,DATARMNET611d08d671,sizeof(*DATARMNET75be5f3406),&
DATARMNETc82d2f4e16);if(!DATARMNET75be5f3406)return false;if(DATARMNET75be5f3406
->source==htons((0xdf7+6169-0x241c)))return false;DATARMNETdf2dbc641f=
skb_header_pointer(DATARMNET543491eb0f,DATARMNET611d08d671+sizeof(*
DATARMNET75be5f3406),sizeof(*DATARMNETdf2dbc641f),&DATARMNET6c56902362);if(!
DATARMNETdf2dbc641f)return false;return!!(*DATARMNETdf2dbc641f);}bool 
DATARMNET0a4704e5e0(struct DATARMNETb89ecedefc*DATARMNET3396919a68){return 
DATARMNETa96214b53c(DATARMNET3396919a68->DATARMNETf0d9de7e2f);}int 
DATARMNET078f6bd384(void){DATARMNETbb4efa5b3d();return(0xd2d+202-0xdf7);}void 
DATARMNETfae36afa03(void){DATARMNETbb4efa5b3d();}char*DATARMNET934406764d(void){
return DATARMNET30500ba48c;}
