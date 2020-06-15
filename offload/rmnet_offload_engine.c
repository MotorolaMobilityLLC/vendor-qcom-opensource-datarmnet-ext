/* Copyright (c) 2018-2020, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#include <linux/log2.h>
#include <linux/list.h>
#include <linux/hashtable.h>
#include "rmnet_descriptor.h"
#include "rmnet_offload_state.h"
#include "rmnet_offload_engine.h"
#include "rmnet_offload_main.h"
#include "rmnet_offload_tcp.h"
#include "rmnet_offload_udp.h"
#include "rmnet_offload_stats.h"
#include "rmnet_offload_knob.h"
#define DATARMNET644a5e11da \
	(const_ilog2(DATARMNET78d9393ac8))
static DEFINE_HASHTABLE(DATARMNET4791268d67,DATARMNET644a5e11da);static u32 
DATARMNET1993bae165(u8 DATARMNET06d2413ad2){struct DATARMNETd7c9631acd*
DATARMNET7c382e536d;int DATARMNETae0201901a;u32 DATARMNET737bbd41c3=
(0xd2d+202-0xdf7);hash_for_each(DATARMNET4791268d67,DATARMNETae0201901a,
DATARMNET7c382e536d,DATARMNETbd5d7d96d8){if(DATARMNET7c382e536d->
DATARMNET1db11fa85e&&DATARMNET7c382e536d->DATARMNET550ca047ee==
DATARMNET06d2413ad2){DATARMNET737bbd41c3++;DATARMNETa3055c21f2(
DATARMNET7c382e536d);}}return DATARMNET737bbd41c3;}static bool 
DATARMNET2013036d80(u8 DATARMNET06d2413ad2){u64 DATARMNET3924f3f9e3;
DATARMNET3924f3f9e3=DATARMNETf1d1b8287f(DATARMNET6d2ed4b822);if(
DATARMNET3924f3f9e3==DATARMNET2d89680280)return true;if(DATARMNET3924f3f9e3==
DATARMNET03daf91a60&&DATARMNET06d2413ad2==DATARMNETfd5c3d30e5)return true;if(
DATARMNET3924f3f9e3==DATARMNET88a9920663&&DATARMNET06d2413ad2==
DATARMNETa656f324b2)return true;return false;}static bool DATARMNET5a0f9fc3a2(
struct DATARMNETd7c9631acd*DATARMNETaa568481cf,struct DATARMNETd812bcdbb5*
DATARMNET5fe4c722a8){if(!DATARMNETaa568481cf->DATARMNET1db11fa85e)return false;
if(DATARMNET5fe4c722a8->DATARMNETaebe0581f2==(0xd11+230-0xdf3)){struct 
DATARMNET308c06fca6*DATARMNET699c2c62cd,*DATARMNET8814564ab9;DATARMNET699c2c62cd
=DATARMNETaa568481cf->DATARMNETc1529262df;DATARMNET8814564ab9=
DATARMNET5fe4c722a8->DATARMNET1469d7a840;if(DATARMNET699c2c62cd->
DATARMNET1eb6c27583^DATARMNET8814564ab9->DATARMNET1eb6c27583||
DATARMNET699c2c62cd->DATARMNET03e081f69f^DATARMNET8814564ab9->
DATARMNET03e081f69f||DATARMNET699c2c62cd->DATARMNET2c091223da^
DATARMNET8814564ab9->DATARMNET2c091223da||DATARMNET699c2c62cd->
DATARMNET610d06a887^DATARMNET8814564ab9->DATARMNET610d06a887)return true;}else 
if(DATARMNET5fe4c722a8->DATARMNETaebe0581f2==(0xd03+244-0xdf1)){__be32 
DATARMNET25ffacbec5,DATARMNETb351dd927f;__be32 DATARMNET9422f16113;
DATARMNET25ffacbec5=DATARMNETaa568481cf->DATARMNET6f0af6e7b3->
DATARMNET0687f7ecdc;DATARMNETb351dd927f=DATARMNET5fe4c722a8->DATARMNET5559b05582
->DATARMNET0687f7ecdc;DATARMNET9422f16113=DATARMNET25ffacbec5^
DATARMNETb351dd927f;if(DATARMNET9422f16113&htonl(267386880))return true;}return 
false;}static bool DATARMNET6895620058(struct DATARMNETd7c9631acd*
DATARMNETaa568481cf,struct DATARMNETd812bcdbb5*DATARMNET5fe4c722a8){__be16 
DATARMNETe085e1d838,DATARMNET487536824f,DATARMNETa664f6ed60,DATARMNET49b96367a2;
if(!DATARMNETaa568481cf->DATARMNET1db11fa85e)return DATARMNETaa568481cf->
DATARMNET381f1cadc4==DATARMNET5fe4c722a8->DATARMNET645e8912b8;if(
DATARMNETaa568481cf->DATARMNET550ca047ee!=DATARMNET5fe4c722a8->
DATARMNET098910da0f)return false;DATARMNETe085e1d838=DATARMNETaa568481cf->
DATARMNET8600531f31->DATARMNET1b1c406ae9;DATARMNETa664f6ed60=DATARMNETaa568481cf
->DATARMNET8600531f31->DATARMNETdf0e8545ee;DATARMNET487536824f=
DATARMNET5fe4c722a8->DATARMNET0da3c8035d->DATARMNET1b1c406ae9;
DATARMNET49b96367a2=DATARMNET5fe4c722a8->DATARMNET0da3c8035d->
DATARMNETdf0e8545ee;if(DATARMNETe085e1d838^DATARMNET487536824f||
DATARMNETa664f6ed60^DATARMNET49b96367a2)return false;if(DATARMNET5fe4c722a8->
DATARMNETaebe0581f2==(0xd11+230-0xdf3)){struct DATARMNET308c06fca6*
DATARMNET699c2c62cd,*DATARMNET8814564ab9;DATARMNET699c2c62cd=DATARMNETaa568481cf
->DATARMNETc1529262df;DATARMNET8814564ab9=DATARMNET5fe4c722a8->
DATARMNET1469d7a840;if(DATARMNET699c2c62cd->DATARMNET9bbd2ca483^
DATARMNET8814564ab9->DATARMNET9bbd2ca483||DATARMNET699c2c62cd->
DATARMNET11ef55b2bb^DATARMNET8814564ab9->DATARMNET11ef55b2bb)return false;}else 
if(DATARMNET5fe4c722a8->DATARMNETaebe0581f2==(0xd03+244-0xdf1)){struct 
DATARMNET64bb8f616e*DATARMNET699c2c62cd,*DATARMNET8814564ab9;DATARMNET699c2c62cd
=DATARMNETaa568481cf->DATARMNET6f0af6e7b3;DATARMNET8814564ab9=
DATARMNET5fe4c722a8->DATARMNET5559b05582;if(memcmp(DATARMNET699c2c62cd->
DATARMNET31202449fc,DATARMNET8814564ab9->DATARMNET31202449fc,sizeof(
DATARMNET8814564ab9->DATARMNET31202449fc))||memcmp(DATARMNET699c2c62cd->
DATARMNETc657c0a139,DATARMNET8814564ab9->DATARMNETc657c0a139,sizeof(
DATARMNET8814564ab9->DATARMNETc657c0a139)))return false;}else{return false;}
return true;}static struct DATARMNETd7c9631acd*DATARMNETd41def0046(void){struct 
DATARMNET70f3b87b5d*DATARMNETe05748b000=DATARMNETc2a630b113();struct 
DATARMNET907d58c807*DATARMNETa6f73cbe10;struct DATARMNETd7c9631acd*
DATARMNET6745427f98;DATARMNETa6f73cbe10=&DATARMNETe05748b000->
DATARMNETebb45c8d86;if(DATARMNETa6f73cbe10->DATARMNET8dfc11cccd<
DATARMNET78d9393ac8){DATARMNET6745427f98=&DATARMNETa6f73cbe10->
DATARMNET2846a01cce[DATARMNETa6f73cbe10->DATARMNET8dfc11cccd];
DATARMNETa6f73cbe10->DATARMNET8dfc11cccd++;return DATARMNET6745427f98;}
DATARMNET6745427f98=&DATARMNETa6f73cbe10->DATARMNET2846a01cce[
DATARMNETa6f73cbe10->DATARMNET57d435b225];DATARMNETa6f73cbe10->
DATARMNET57d435b225++;DATARMNETa6f73cbe10->DATARMNET57d435b225%=
DATARMNET78d9393ac8;hash_del(&DATARMNET6745427f98->DATARMNETbd5d7d96d8);if(
DATARMNET6745427f98->DATARMNET1db11fa85e){DATARMNETa00cda79d0(
DATARMNETf3f92fc0b9);DATARMNETa3055c21f2(DATARMNET6745427f98);}return 
DATARMNET6745427f98;}static void DATARMNETbe30d096c6(void){DATARMNET664568fcd0()
;if(DATARMNETae70636c90())DATARMNETa00cda79d0(DATARMNET5727f095ec);
DATARMNET6a76048590();}void DATARMNETd4230b6bfe(void){rcu_assign_pointer(
rmnet_perf_chain_end,DATARMNETbe30d096c6);}void DATARMNET560e127137(void){
rcu_assign_pointer(rmnet_perf_chain_end,NULL);}int DATARMNET241493ab9a(u64 
DATARMNET0470698d6c,u64 DATARMNETfeff65e096){u32 DATARMNET737bbd41c3=
(0xd2d+202-0xdf7);if(DATARMNET0470698d6c==DATARMNET5fe3af8828||
DATARMNETfeff65e096==DATARMNET2d89680280)return(0xd2d+202-0xdf7);switch(
DATARMNETfeff65e096){case DATARMNET03daf91a60:DATARMNET737bbd41c3=
DATARMNET1993bae165(DATARMNETa656f324b2);break;case DATARMNET88a9920663:
DATARMNET737bbd41c3=DATARMNET1993bae165(DATARMNETfd5c3d30e5);break;case 
DATARMNET5fe3af8828:DATARMNET737bbd41c3=DATARMNETae70636c90();break;}
DATARMNETbad3b5165e(DATARMNETddf572458d,DATARMNET737bbd41c3);return
(0xd2d+202-0xdf7);}void DATARMNETa3055c21f2(struct DATARMNETd7c9631acd*
DATARMNETaa568481cf){struct DATARMNET70f3b87b5d*DATARMNETe05748b000=
DATARMNETc2a630b113();struct rmnet_frag_descriptor*DATARMNETd74aeaa49a,*
DATARMNETa1625e27e2,*DATARMNET0386f6f82a;u32 DATARMNETf333d55b33=
DATARMNETaa568481cf->DATARMNETcf28ae376b+DATARMNETaa568481cf->
DATARMNETac72629d22+DATARMNETaa568481cf->DATARMNET3f4e88ab44;if(!
DATARMNETaa568481cf->DATARMNET1db11fa85e)return;DATARMNETd74aeaa49a=
list_first_entry(&DATARMNETaa568481cf->DATARMNETb76b79d0d5,struct 
rmnet_frag_descriptor,list);if(!DATARMNETd74aeaa49a->gso_segs)
DATARMNETd74aeaa49a->gso_segs=(0xd26+209-0xdf6);DATARMNETd74aeaa49a->gso_size=
DATARMNETaa568481cf->DATARMNET1978d5d8de;DATARMNETa1625e27e2=DATARMNETd74aeaa49a
;list_for_each_entry_safe_continue(DATARMNETa1625e27e2,DATARMNET0386f6f82a,&
DATARMNETaa568481cf->DATARMNETb76b79d0d5,list){if(DATARMNETa1625e27e2->hdr_ptr==
rmnet_frag_data_ptr(DATARMNETa1625e27e2)){if(!rmnet_frag_pull(
DATARMNETa1625e27e2,DATARMNETe05748b000->DATARMNET403589239f,DATARMNETaa568481cf
->DATARMNETac72629d22+DATARMNETaa568481cf->DATARMNET3f4e88ab44))continue;}
list_del(&DATARMNETa1625e27e2->list);list_add_tail(&DATARMNETa1625e27e2->list,&
DATARMNETd74aeaa49a->sub_frags);DATARMNETd74aeaa49a->gso_segs+=(
DATARMNETa1625e27e2->gso_segs)?:(0xd26+209-0xdf6);}DATARMNETd74aeaa49a->hash=
DATARMNETaa568481cf->DATARMNET381f1cadc4;DATARMNET58a244b2fe(DATARMNETd74aeaa49a
,DATARMNETf333d55b33);DATARMNETaa568481cf->DATARMNET1db11fa85e=(0xd2d+202-0xdf7)
;DATARMNETaa568481cf->DATARMNETcf28ae376b=(0xd2d+202-0xdf7);}void 
DATARMNETc38c135c9f(u32 DATARMNET3f8cc6fc24){struct DATARMNETd7c9631acd*
DATARMNETaa568481cf;hash_for_each_possible(DATARMNET4791268d67,
DATARMNETaa568481cf,DATARMNETbd5d7d96d8,DATARMNET3f8cc6fc24){if(
DATARMNETaa568481cf->DATARMNET381f1cadc4==DATARMNET3f8cc6fc24&&
DATARMNETaa568481cf->DATARMNET1db11fa85e)DATARMNETa3055c21f2(DATARMNETaa568481cf
);}}u32 DATARMNETae70636c90(void){struct DATARMNETd7c9631acd*DATARMNETaa568481cf
;int DATARMNETae0201901a;u32 DATARMNET737bbd41c3=(0xd2d+202-0xdf7);hash_for_each
(DATARMNET4791268d67,DATARMNETae0201901a,DATARMNETaa568481cf,DATARMNETbd5d7d96d8
){if(DATARMNETaa568481cf->DATARMNET1db11fa85e){DATARMNET737bbd41c3++;
DATARMNETa3055c21f2(DATARMNETaa568481cf);}}return DATARMNET737bbd41c3;}void 
DATARMNET33aa5df9ef(struct DATARMNETd7c9631acd*DATARMNETaa568481cf,struct 
DATARMNETd812bcdbb5*DATARMNET5fe4c722a8){if(DATARMNET5fe4c722a8->
DATARMNETf1b6b0a6cc){DATARMNETaa568481cf->DATARMNET7e15783110=
DATARMNET5fe4c722a8->DATARMNETaebe0581f2;DATARMNETaa568481cf->
DATARMNETac72629d22=DATARMNET5fe4c722a8->DATARMNETbecebb23ac;DATARMNETaa568481cf
->DATARMNETc1529262df=DATARMNET5fe4c722a8->DATARMNET1469d7a840;
DATARMNETaa568481cf->DATARMNET550ca047ee=DATARMNET5fe4c722a8->
DATARMNET098910da0f;DATARMNETaa568481cf->DATARMNET3f4e88ab44=DATARMNET5fe4c722a8
->DATARMNET0ab9b2ce3b;DATARMNETaa568481cf->DATARMNET8cd2f78e4f=
DATARMNET5fe4c722a8->DATARMNET96c6c71653;DATARMNETaa568481cf->
DATARMNET381f1cadc4=DATARMNET5fe4c722a8->DATARMNET645e8912b8;DATARMNETaa568481cf
->DATARMNET1978d5d8de=(DATARMNET5fe4c722a8->DATARMNET719f68fb88->gso_size)?:
DATARMNET5fe4c722a8->DATARMNET1ef22e4c76;if(DATARMNET5fe4c722a8->
DATARMNET098910da0f==DATARMNETfd5c3d30e5){__be32 DATARMNET0849981c7c;if(
DATARMNET5fe4c722a8->DATARMNET719f68fb88->tcp_seq_set)DATARMNET0849981c7c=
DATARMNET5fe4c722a8->DATARMNET719f68fb88->tcp_seq;else DATARMNET0849981c7c=
DATARMNET5fe4c722a8->DATARMNET96c6c71653->DATARMNETb3e70104e0;
DATARMNETaa568481cf->DATARMNETd3a1a2b9b5=ntohl(DATARMNET0849981c7c);}}if(
DATARMNET5fe4c722a8->DATARMNET098910da0f==DATARMNETfd5c3d30e5)
DATARMNETaa568481cf->DATARMNETd3a1a2b9b5+=DATARMNET5fe4c722a8->
DATARMNET1ef22e4c76;list_add_tail(&DATARMNET5fe4c722a8->DATARMNET719f68fb88->
list,&DATARMNETaa568481cf->DATARMNETb76b79d0d5);DATARMNETaa568481cf->
DATARMNET1db11fa85e++;DATARMNETaa568481cf->DATARMNETcf28ae376b+=
DATARMNET5fe4c722a8->DATARMNET1ef22e4c76;}bool DATARMNETfbf5798e15(struct 
DATARMNETd812bcdbb5*DATARMNET5fe4c722a8){struct DATARMNETd7c9631acd*
DATARMNETaa568481cf;bool DATARMNET885970f252=false;if(!DATARMNET2013036d80(
DATARMNET5fe4c722a8->DATARMNET098910da0f)){DATARMNETa00cda79d0(
DATARMNET6a894ab63d);return false;}hash_for_each_possible(DATARMNET4791268d67,
DATARMNETaa568481cf,DATARMNETbd5d7d96d8,DATARMNET5fe4c722a8->DATARMNET645e8912b8
){bool DATARMNET2dd83daa1c;if(!DATARMNET6895620058(DATARMNETaa568481cf,
DATARMNET5fe4c722a8))continue;DATARMNETc6f994577c:DATARMNET2dd83daa1c=
DATARMNET5a0f9fc3a2(DATARMNETaa568481cf,DATARMNET5fe4c722a8);DATARMNET5fe4c722a8
->DATARMNETf1b6b0a6cc=true;DATARMNET885970f252=true;switch(DATARMNET5fe4c722a8->
DATARMNET098910da0f){case DATARMNETfd5c3d30e5:return DATARMNET4c7cdc25b7(
DATARMNETaa568481cf,DATARMNET5fe4c722a8,DATARMNET2dd83daa1c);case 
DATARMNETa656f324b2:return DATARMNET8dc47eb7af(DATARMNETaa568481cf,
DATARMNET5fe4c722a8,DATARMNET2dd83daa1c);default:return false;}}if(!
DATARMNET885970f252){DATARMNETaa568481cf=DATARMNETd41def0046();
DATARMNETaa568481cf->DATARMNET381f1cadc4=DATARMNET5fe4c722a8->
DATARMNET645e8912b8;hash_add(DATARMNET4791268d67,&DATARMNETaa568481cf->
DATARMNETbd5d7d96d8,DATARMNETaa568481cf->DATARMNET381f1cadc4);goto 
DATARMNETc6f994577c;}return false;}void DATARMNETb98b78b8e3(void){struct 
DATARMNETd7c9631acd*DATARMNETaa568481cf;struct hlist_node*DATARMNET0386f6f82a;
int DATARMNETae0201901a;hash_for_each_safe(DATARMNET4791268d67,
DATARMNETae0201901a,DATARMNET0386f6f82a,DATARMNETaa568481cf,DATARMNETbd5d7d96d8)
hash_del(&DATARMNETaa568481cf->DATARMNETbd5d7d96d8);}int DATARMNETdbcaf01255(
void){struct DATARMNET70f3b87b5d*DATARMNETe05748b000=DATARMNETc2a630b113();u8 
DATARMNETefc9df3df2;for(DATARMNETefc9df3df2=(0xd2d+202-0xdf7);
DATARMNETefc9df3df2<DATARMNET78d9393ac8;DATARMNETefc9df3df2++){struct 
DATARMNETd7c9631acd*DATARMNETaa568481cf;DATARMNETaa568481cf=&DATARMNETe05748b000
->DATARMNETebb45c8d86.DATARMNET2846a01cce[DATARMNETefc9df3df2];INIT_LIST_HEAD(&
DATARMNETaa568481cf->DATARMNETb76b79d0d5);INIT_HLIST_NODE(&DATARMNETaa568481cf->
DATARMNETbd5d7d96d8);}return DATARMNET0529bb9c4e;}