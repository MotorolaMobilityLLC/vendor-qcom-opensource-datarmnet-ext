// SPDX-License-Identifier: GPL-2.0-only
/* Copyright (c) 2021, The Linux Foundation. All rights reserved.
 *
 * RMNET WLAN Generic Netlink
 *
 */

#include <net/genetlink.h>
#include <net/netlink.h>
#include <linux/module.h>
#include <linux/if.h>
#include <linux/inet.h>
#include <linux/netdevice.h>
#include "rmnet_wlan_genl.h"
#include "rmnet_wlan.h"
static struct nla_policy DATARMNET19c5fce390[DATARMNETf6bbad94a5+
(0xd26+209-0xdf6)]={[DATARMNET8c062d7709]=NLA_POLICY_EXACT_LEN(sizeof(struct 
DATARMNETb89ecedefc)),};static struct nla_policy DATARMNET0381a65e93[
DATARMNETebcc30fe04+(0xd26+209-0xdf6)]={[DATARMNET4e9cd7b8bf]=
NLA_POLICY_NESTED_ARRAY(DATARMNET19c5fce390),[DATARMNETb8afde4a5a]={.type=
NLA_NUL_STRING,.len=IFNAMSIZ-(0xd26+209-0xdf6),},[DATARMNETea4b56dc2b]={.type=
NLA_NUL_STRING,.len=INET6_ADDRSTRLEN,},[DATARMNET8bf80e4b66]={.type=
NLA_NUL_STRING,.len=IFNAMSIZ-(0xd26+209-0xdf6),},[DATARMNET44a9a789aa]={.type=
NLA_U16,},};
#define DATARMNET58eca5265b(DATARMNET5aeb0ef9bc, DATARMNETbd9859b58e) \
	{ \
		.cmd = DATARMNET5aeb0ef9bc, \
		.doit = DATARMNETbd9859b58e, \
	}
static int DATARMNET72501635c8(struct sk_buff*DATARMNET543491eb0f,struct 
genl_info*DATARMNET54338da2ff){struct nlattr*DATARMNET759bcdbf61[
DATARMNETf6bbad94a5+(0xd26+209-0xdf6)];struct DATARMNETb89ecedefc*
DATARMNETcadc2ef9aa;struct nlattr*DATARMNETef7cdd7b6b;u32 DATARMNETef77661260=
(0xd2d+202-0xdf7);int DATARMNET4b119c4ff3;int DATARMNETb14e52a504=
(0xd2d+202-0xdf7);if(!DATARMNET54338da2ff->attrs[DATARMNET4e9cd7b8bf]){
GENL_SET_ERR_MSG(DATARMNET54338da2ff,
"\x4d\x75\x73\x74\x20\x73\x75\x70\x70\x6c\x79\x20\x74\x75\x70\x6c\x65\x20\x69\x6e\x66\x6f"
);return-EINVAL;}nla_for_each_nested(DATARMNETef7cdd7b6b,DATARMNET54338da2ff->
attrs[DATARMNET4e9cd7b8bf],DATARMNET4b119c4ff3)DATARMNETef77661260++;
DATARMNETcadc2ef9aa=kcalloc(DATARMNETef77661260,sizeof(*DATARMNETcadc2ef9aa),
GFP_KERNEL);if(!DATARMNETcadc2ef9aa){GENL_SET_ERR_MSG(DATARMNET54338da2ff,
"\x4b\x65\x72\x6e\x65\x6c\x20\x4f\x4f\x4d");return-ENOMEM;}DATARMNETef77661260=
(0xd2d+202-0xdf7);nla_for_each_nested(DATARMNETef7cdd7b6b,DATARMNET54338da2ff->
attrs[DATARMNET4e9cd7b8bf],DATARMNET4b119c4ff3){struct DATARMNETb89ecedefc*
DATARMNET3396919a68;DATARMNETb14e52a504=nla_parse_nested(DATARMNET759bcdbf61,
DATARMNETf6bbad94a5,DATARMNETef7cdd7b6b,DATARMNET19c5fce390,DATARMNET54338da2ff
->extack);if(DATARMNETb14e52a504)goto DATARMNETbf4095f79e;if(!
DATARMNET759bcdbf61[DATARMNET8c062d7709]){GENL_SET_ERR_MSG(DATARMNET54338da2ff,
"\x4d\x75\x73\x74\x20\x73\x70\x65\x63\x69\x66\x79\x20\x74\x75\x70\x6c\x65\x20\x65\x6e\x74\x72\x79"
);goto DATARMNETbf4095f79e;}DATARMNET3396919a68=nla_data(DATARMNET759bcdbf61[
DATARMNET8c062d7709]);if(DATARMNET3396919a68->DATARMNET0d956cc77a!=
(0xd11+230-0xdf3)&&DATARMNET3396919a68->DATARMNET0d956cc77a!=(0xd03+244-0xdf1)){
GENL_SET_ERR_MSG(DATARMNET54338da2ff,
"\x49\x6e\x76\x61\x6c\x69\x64\x20\x49\x50\x20\x70\x72\x6f\x74\x6f\x63\x6f\x6c");
goto DATARMNETbf4095f79e;}if(DATARMNET3396919a68->DATARMNET4924e79411!=
IPPROTO_TCP&&DATARMNET3396919a68->DATARMNET4924e79411!=IPPROTO_UDP&&
DATARMNET3396919a68->DATARMNET4924e79411!=IPPROTO_ESP){GENL_SET_ERR_MSG(
DATARMNET54338da2ff,
"\x49\x6e\x76\x61\x6c\x69\x64\x20\x74\x72\x61\x6e\x73\x70\x6f\x72\x74\x20\x70\x72\x6f\x74\x6f\x63\x6f\x6c"
);goto DATARMNETbf4095f79e;}memcpy(&DATARMNETcadc2ef9aa[DATARMNETef77661260],
DATARMNET3396919a68,sizeof(*DATARMNET3396919a68));DATARMNETef77661260++;}
DATARMNETb14e52a504=DATARMNET53f12a0f7d(DATARMNETcadc2ef9aa,DATARMNETef77661260,
DATARMNET54338da2ff);DATARMNETbf4095f79e:kfree(DATARMNETcadc2ef9aa);return 
DATARMNETb14e52a504;}static int DATARMNET41dd9b14ab(struct sk_buff*
DATARMNET543491eb0f,struct genl_info*DATARMNET54338da2ff){struct nlattr*
DATARMNET759bcdbf61[DATARMNETf6bbad94a5+(0xd26+209-0xdf6)];struct 
DATARMNETb89ecedefc*DATARMNETcadc2ef9aa;struct nlattr*DATARMNETef7cdd7b6b;u32 
DATARMNETef77661260=(0xd2d+202-0xdf7);int DATARMNET4b119c4ff3;int 
DATARMNETb14e52a504;if(!DATARMNET54338da2ff->attrs[DATARMNET4e9cd7b8bf]){
GENL_SET_ERR_MSG(DATARMNET54338da2ff,
"\x4d\x75\x73\x74\x20\x73\x75\x70\x70\x6c\x79\x20\x74\x75\x70\x6c\x65\x20\x69\x6e\x66\x6f"
);return-EINVAL;}nla_for_each_nested(DATARMNETef7cdd7b6b,DATARMNET54338da2ff->
attrs[DATARMNET4e9cd7b8bf],DATARMNET4b119c4ff3)DATARMNETef77661260++;
DATARMNETcadc2ef9aa=kcalloc(DATARMNETef77661260,sizeof(*DATARMNETcadc2ef9aa),
GFP_KERNEL);if(!DATARMNETcadc2ef9aa){GENL_SET_ERR_MSG(DATARMNET54338da2ff,
"\x4b\x65\x72\x6e\x65\x6c\x20\x4f\x4f\x4d");return-ENOMEM;}DATARMNETef77661260=
(0xd2d+202-0xdf7);nla_for_each_nested(DATARMNETef7cdd7b6b,DATARMNET54338da2ff->
attrs[DATARMNET4e9cd7b8bf],DATARMNET4b119c4ff3){struct DATARMNETb89ecedefc*
DATARMNET3396919a68;DATARMNETb14e52a504=nla_parse_nested(DATARMNET759bcdbf61,
DATARMNETf6bbad94a5,DATARMNETef7cdd7b6b,DATARMNET19c5fce390,DATARMNET54338da2ff
->extack);if(DATARMNETb14e52a504)goto DATARMNETbf4095f79e;if(!
DATARMNET759bcdbf61[DATARMNET8c062d7709]){GENL_SET_ERR_MSG(DATARMNET54338da2ff,
"\x4d\x75\x73\x74\x20\x73\x70\x65\x63\x69\x66\x79\x20\x74\x75\x70\x6c\x65\x20\x65\x6e\x74\x72\x79"
);DATARMNETb14e52a504=-EINVAL;goto DATARMNETbf4095f79e;}DATARMNET3396919a68=
nla_data(DATARMNET759bcdbf61[DATARMNET8c062d7709]);memcpy(&DATARMNETcadc2ef9aa[
DATARMNETef77661260],DATARMNET3396919a68,sizeof(*DATARMNET3396919a68));
DATARMNETef77661260++;}DATARMNETb14e52a504=DATARMNET07f6485c9b(
DATARMNETcadc2ef9aa,DATARMNETef77661260,DATARMNET54338da2ff);DATARMNETbf4095f79e
:kfree(DATARMNETcadc2ef9aa);return DATARMNETb14e52a504;}static int 
DATARMNETf1fa473089(struct sk_buff*DATARMNET543491eb0f,struct genl_info*
DATARMNET54338da2ff){struct nlattr*DATARMNETef7cdd7b6b;DATARMNETef7cdd7b6b=
DATARMNET54338da2ff->attrs[DATARMNETb8afde4a5a];if(!DATARMNETef7cdd7b6b){
GENL_SET_ERR_MSG(DATARMNET54338da2ff,
"\x4d\x75\x73\x74\x20\x73\x70\x65\x63\x69\x66\x79\x20\x64\x65\x76\x69\x63\x65\x20\x69\x6e\x66\x6f"
);return-EINVAL;}return DATARMNET97b2388e63(nla_data(DATARMNETef7cdd7b6b),
DATARMNET54338da2ff);}static int DATARMNETcd9478470c(struct sk_buff*
DATARMNET543491eb0f,struct genl_info*DATARMNET54338da2ff){struct nlattr*
DATARMNETef7cdd7b6b;int DATARMNET268a8314cf;DATARMNETef7cdd7b6b=
DATARMNET54338da2ff->attrs[DATARMNETb8afde4a5a];DATARMNET268a8314cf=
DATARMNETa903cd5994((DATARMNETef7cdd7b6b)?nla_data(DATARMNETef7cdd7b6b):NULL,
DATARMNET54338da2ff);if(DATARMNET268a8314cf)GENL_SET_ERR_MSG(DATARMNET54338da2ff
,
"\x4b\x65\x72\x6e\x65\x6c\x20\x65\x72\x72\x6f\x72\x2c\x20\x75\x6e\x72\x65\x67\x69\x73\x74\x65\x72\x69\x6e\x67\x20\x6e\x6f\x74\x69\x66\x69\x65\x72\x20\x66\x61\x69\x6c\x65\x64"
);return DATARMNET268a8314cf;}static int DATARMNETb58e83bef5(const char*
DATARMNETc5a5c7fda2,int DATARMNETdb8d3e0f02,u8*DATARMNET1be23954c3){int len=
(0xd2d+202-0xdf7),DATARMNET887a22d0e2=(0xd2d+202-0xdf7),DATARMNETb14e52a504=
(0xd2d+202-0xdf7);char DATARMNET4306ab415b[(0xec7+1166-0x132d)],*
DATARMNETab6f68a65c;u16 DATARMNET87504a9b3a=(0xd2d+202-0xdf7);memset(
DATARMNET4306ab415b,(0xd2d+202-0xdf7),(0xec7+1166-0x132d));memcpy(
DATARMNET4306ab415b,DATARMNETc5a5c7fda2,DATARMNETdb8d3e0f02>(0xec7+1166-0x132d)?
(0xec7+1166-0x132d):DATARMNETdb8d3e0f02);DATARMNETab6f68a65c=DATARMNET4306ab415b
;while(len<=DATARMNETdb8d3e0f02){if(DATARMNET4306ab415b[len]!=
((char)(0x1d6b+883-0x20a4))&&DATARMNET4306ab415b[len]!='\0'){len++;continue;}
DATARMNET4306ab415b[len]='\0';DATARMNETb14e52a504=kstrtou16((const char*)
DATARMNETab6f68a65c,(0xeb7+1158-0x132d),&DATARMNET87504a9b3a);if(
DATARMNETb14e52a504)return(0xd2d+202-0xdf7);DATARMNET1be23954c3[
DATARMNET887a22d0e2]=(u8)(DATARMNET87504a9b3a>>(0xd35+210-0xdff));
DATARMNET1be23954c3[DATARMNET887a22d0e2+(0xd26+209-0xdf6)]=(u8)(
DATARMNET87504a9b3a&(0xbf7+4364-0x1c04));DATARMNET887a22d0e2+=(0xd1f+216-0xdf5);
if(DATARMNET887a22d0e2==(0xeb7+1158-0x132d))return(0xd26+209-0xdf6);
DATARMNETab6f68a65c=&DATARMNET4306ab415b[len+(0xd26+209-0xdf6)];len++;}return
(0xd26+209-0xdf6);}static int DATARMNET631d317abe(const char*DATARMNETc5a5c7fda2
,int DATARMNETdb8d3e0f02,u8*DATARMNET1be23954c3){int len=(0xd2d+202-0xdf7),
DATARMNET887a22d0e2=(0xd2d+202-0xdf7),DATARMNETb14e52a504=(0xd2d+202-0xdf7);char
 DATARMNET4306ab415b[(0xeb7+1158-0x132d)],*DATARMNETab6f68a65c;u8 
DATARMNET87504a9b3a=(0xd2d+202-0xdf7);memset(DATARMNET4306ab415b,
(0xd2d+202-0xdf7),(0xeb7+1158-0x132d));memcpy(DATARMNET4306ab415b,
DATARMNETc5a5c7fda2,DATARMNETdb8d3e0f02>(0xeb7+1158-0x132d)?(0xeb7+1158-0x132d):
DATARMNETdb8d3e0f02);DATARMNETab6f68a65c=DATARMNET4306ab415b;while(len<=
DATARMNETdb8d3e0f02){if(DATARMNET4306ab415b[len]!=((char)(0x37f+3988-0x12e5))&&
DATARMNET4306ab415b[len]!='\0'){len++;continue;}DATARMNET4306ab415b[len]='\0';
DATARMNETb14e52a504=kstrtou8((const char*)DATARMNETab6f68a65c,(0xd2d+202-0xdf7),
&DATARMNET87504a9b3a);if(DATARMNETb14e52a504)return(0xd2d+202-0xdf7);
DATARMNET1be23954c3[DATARMNET887a22d0e2]=DATARMNET87504a9b3a;DATARMNET887a22d0e2
++;if(DATARMNET887a22d0e2==(0xd11+230-0xdf3))return(0xd26+209-0xdf6);
DATARMNETab6f68a65c=&DATARMNET4306ab415b[len+(0xd26+209-0xdf6)];len++;}return
(0xd26+209-0xdf6);}static int DATARMNETb86993aefb(struct sk_buff*
DATARMNET543491eb0f,struct genl_info*DATARMNET54338da2ff){struct 
DATARMNET8d3c2559ca DATARMNET2d4b4cfc9e={};struct nlattr*DATARMNETef7cdd7b6b;
char*DATARMNETd7f4d7c495;int DATARMNET268a8314cf;if(!DATARMNET54338da2ff->attrs[
DATARMNETea4b56dc2b]||!DATARMNET54338da2ff->attrs[DATARMNET8bf80e4b66]){
GENL_SET_ERR_MSG(DATARMNET54338da2ff,
"\x4d\x75\x73\x74\x20\x73\x70\x65\x63\x69\x66\x79\x20\x46\x57\x44\x20\x64\x65\x76\x69\x63\x65\x20\x61\x6e\x64\x20\x61\x64\x64\x72\x65\x73\x73"
);return-EINVAL;}DATARMNETef7cdd7b6b=DATARMNET54338da2ff->attrs[
DATARMNETea4b56dc2b];DATARMNETd7f4d7c495=nla_data(DATARMNETef7cdd7b6b);if(strchr
(DATARMNETd7f4d7c495,((char)(0x5bc+2978-0x1124)))){if(DATARMNETb58e83bef5(
DATARMNETd7f4d7c495,nla_len(DATARMNETef7cdd7b6b),DATARMNET2d4b4cfc9e.
DATARMNET5700daac01.s6_addr)!=(0xd26+209-0xdf6)){GENL_SET_ERR_MSG(
DATARMNET54338da2ff,
"\x46\x57\x44\x20\x61\x64\x64\x72\x65\x73\x73\x20\x69\x73\x20\x69\x6e\x76\x61\x6c\x69\x64\x20\x69\x6e\x20\x49\x50\x76\x36"
);return-EINVAL;}DATARMNET2d4b4cfc9e.DATARMNET0d956cc77a=(0xd03+244-0xdf1);}else
{if(DATARMNET631d317abe(DATARMNETd7f4d7c495,nla_len(DATARMNETef7cdd7b6b),(u8*)&
DATARMNET2d4b4cfc9e.DATARMNET0dc14167a1)!=(0xd26+209-0xdf6)){GENL_SET_ERR_MSG(
DATARMNET54338da2ff,
"\x46\x57\x44\x20\x61\x64\x64\x72\x65\x73\x73\x20\x69\x73\x20\x69\x6e\x76\x61\x6c\x69\x64\x20\x69\x6e\x20\x49\x50\x76\x34"
);return-EINVAL;}DATARMNET2d4b4cfc9e.DATARMNET0d956cc77a=(0xd11+230-0xdf3);}
DATARMNETef7cdd7b6b=DATARMNET54338da2ff->attrs[DATARMNET8bf80e4b66];
DATARMNET2d4b4cfc9e.DATARMNET57656f6f2f=dev_get_by_name(genl_info_net(
DATARMNET54338da2ff),nla_data(DATARMNETef7cdd7b6b));if(!DATARMNET2d4b4cfc9e.
DATARMNET57656f6f2f){GENL_SET_ERR_MSG(DATARMNET54338da2ff,
"\x49\x6e\x76\x61\x6c\x69\x64\x20\x46\x57\x44\x20\x64\x65\x76\x69\x63\x65\x20\x6e\x61\x6d\x65"
);return-EINVAL;}DATARMNET268a8314cf=DATARMNET947eb110d2(&DATARMNET2d4b4cfc9e,
DATARMNET54338da2ff);dev_put(DATARMNET2d4b4cfc9e.DATARMNET57656f6f2f);return 
DATARMNET268a8314cf;}static int DATARMNETc175a08219(struct sk_buff*
DATARMNET543491eb0f,struct genl_info*DATARMNET54338da2ff){struct 
DATARMNET8d3c2559ca DATARMNET2d4b4cfc9e={};struct nlattr*DATARMNETef7cdd7b6b;
char*DATARMNETd7f4d7c495;int DATARMNET268a8314cf;if(!DATARMNET54338da2ff->attrs[
DATARMNETea4b56dc2b]||!DATARMNET54338da2ff->attrs[DATARMNET8bf80e4b66]){
GENL_SET_ERR_MSG(DATARMNET54338da2ff,
"\x4d\x75\x73\x74\x20\x73\x70\x65\x63\x69\x66\x79\x20\x46\x57\x44\x20\x64\x65\x76\x69\x63\x65\x20\x61\x6e\x64\x20\x61\x64\x64\x72\x65\x73\x73"
);return-EINVAL;}DATARMNETef7cdd7b6b=DATARMNET54338da2ff->attrs[
DATARMNETea4b56dc2b];DATARMNETd7f4d7c495=nla_data(DATARMNETef7cdd7b6b);if(strchr
(DATARMNETd7f4d7c495,((char)(0x7e1+4414-0x18e5)))){if(DATARMNETb58e83bef5(
DATARMNETd7f4d7c495,nla_len(DATARMNETef7cdd7b6b),DATARMNET2d4b4cfc9e.
DATARMNET5700daac01.s6_addr)!=(0xd26+209-0xdf6)){GENL_SET_ERR_MSG(
DATARMNET54338da2ff,
"\x46\x57\x44\x20\x61\x64\x64\x72\x65\x73\x73\x20\x69\x73\x20\x69\x6e\x76\x61\x6c\x69\x64\x20\x69\x6e\x20\x49\x50\x76\x36"
);return-EINVAL;}DATARMNET2d4b4cfc9e.DATARMNET0d956cc77a=(0xd03+244-0xdf1);}else
{if(DATARMNET631d317abe(DATARMNETd7f4d7c495,nla_len(DATARMNETef7cdd7b6b),(u8*)&
DATARMNET2d4b4cfc9e.DATARMNET0dc14167a1)){GENL_SET_ERR_MSG(DATARMNET54338da2ff,
"\x46\x57\x44\x20\x61\x64\x64\x72\x65\x73\x73\x20\x69\x73\x20\x69\x6e\x76\x61\x6c\x69\x64\x20\x69\x6e\x20\x49\x50\x76\x34"
);return-EINVAL;}DATARMNET2d4b4cfc9e.DATARMNET0d956cc77a=(0xd11+230-0xdf3);}
DATARMNETef7cdd7b6b=DATARMNET54338da2ff->attrs[DATARMNET8bf80e4b66];
DATARMNET2d4b4cfc9e.DATARMNET57656f6f2f=dev_get_by_name(genl_info_net(
DATARMNET54338da2ff),nla_data(DATARMNETef7cdd7b6b));if(!DATARMNET2d4b4cfc9e.
DATARMNET57656f6f2f){GENL_SET_ERR_MSG(DATARMNET54338da2ff,
"\x49\x6e\x76\x61\x6c\x69\x64\x20\x46\x57\x44\x20\x64\x65\x76\x69\x63\x65\x20\x6e\x61\x6d\x65"
);return-EINVAL;}DATARMNET268a8314cf=DATARMNETb8b35fdc18(&DATARMNET2d4b4cfc9e,
DATARMNET54338da2ff);dev_put(DATARMNET2d4b4cfc9e.DATARMNET57656f6f2f);return 
DATARMNET268a8314cf;}static int DATARMNETc5f6c112ec(struct sk_buff*
DATARMNET543491eb0f,struct genl_info*DATARMNET54338da2ff){struct nlattr*
DATARMNETef7cdd7b6b;DATARMNETef7cdd7b6b=DATARMNET54338da2ff->attrs[
DATARMNET44a9a789aa];if(!DATARMNETef7cdd7b6b){GENL_SET_ERR_MSG(
DATARMNET54338da2ff,
"\x4d\x75\x73\x74\x20\x73\x70\x65\x63\x69\x66\x79\x20\x65\x6e\x63\x61\x70\x20\x70\x6f\x72\x74"
);return-EINVAL;}return DATARMNET8d5a5a7047(nla_get_be16(DATARMNETef7cdd7b6b),
DATARMNET54338da2ff);}static int DATARMNETa6aec23397(struct sk_buff*
DATARMNET543491eb0f,struct genl_info*DATARMNET54338da2ff){struct nlattr*
DATARMNETef7cdd7b6b;DATARMNETef7cdd7b6b=DATARMNET54338da2ff->attrs[
DATARMNET44a9a789aa];if(!DATARMNETef7cdd7b6b){GENL_SET_ERR_MSG(
DATARMNET54338da2ff,
"\x4d\x75\x73\x74\x20\x73\x70\x65\x63\x69\x66\x79\x20\x65\x6e\x63\x61\x70\x20\x70\x6f\x72\x74"
);return-EINVAL;}return DATARMNETc97c6a4265(nla_get_be16(DATARMNETef7cdd7b6b),
DATARMNET54338da2ff);}static int DATARMNETa4773cb837(struct sk_buff*
DATARMNET543491eb0f,struct genl_info*DATARMNET54338da2ff){(void)
DATARMNET543491eb0f;(void)DATARMNET54338da2ff;DATARMNET078f6bd384();return
(0xd2d+202-0xdf7);}static const struct genl_ops DATARMNETf9df19988d[]={
DATARMNET58eca5265b(DATARMNET0604500302,DATARMNET72501635c8),DATARMNET58eca5265b
(DATARMNET91becfb9ac,DATARMNET41dd9b14ab),DATARMNET58eca5265b(
DATARMNET14a3625b43,DATARMNETf1fa473089),DATARMNET58eca5265b(DATARMNET4478d3511b
,DATARMNETcd9478470c),DATARMNET58eca5265b(DATARMNETc2d5a4e103,
DATARMNETb86993aefb),DATARMNET58eca5265b(DATARMNET18145b00f6,DATARMNETc175a08219
),DATARMNET58eca5265b(DATARMNETb8857fe6d9,DATARMNETc5f6c112ec),
DATARMNET58eca5265b(DATARMNET6d50a30ec2,DATARMNETa6aec23397),DATARMNET58eca5265b
(DATARMNET2e5d7ed755,DATARMNETa4773cb837),};struct genl_family 
DATARMNET61e8f41aae={.name=DATARMNET040266f460,.version=DATARMNET7c442b83bb,.
maxattr=DATARMNETebcc30fe04,.policy=DATARMNET0381a65e93,.ops=DATARMNETf9df19988d
,.n_ops=ARRAY_SIZE(DATARMNETf9df19988d),};static int __init DATARMNET7eb0fa5c8f(
void){int DATARMNET61c2303133;pr_info(
"\x25\x73\x28\x29\x3a\x20\x72\x6d\x6e\x65\x74\x5f\x77\x6c\x61\x6e\x20\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x69\x6e\x67" "\n"
,__func__);DATARMNET61c2303133=genl_register_family(&DATARMNET61e8f41aae);if(
DATARMNET61c2303133){pr_err(
"\x25\x73\x28\x29\x3a\x20\x72\x65\x67\x69\x73\x74\x65\x72\x69\x6e\x67\x20\x66\x61\x6d\x69\x6c\x79\x20\x66\x61\x69\x6c\x65\x64\x3a\x20\x25\x69" "\n"
,__func__,DATARMNET61c2303133);genl_unregister_family(&DATARMNET61e8f41aae);
return DATARMNET61c2303133;}return(0xd2d+202-0xdf7);}static void __exit 
DATARMNET7a381832d5(void){int DATARMNET61c2303133;pr_info(
"\x25\x73\x28\x29\x3a\x20\x72\x6d\x6e\x65\x74\x5f\x77\x6c\x61\x6e\x20\x65\x78\x69\x74\x69\x6e\x67" "\n"
,__func__);DATARMNETfae36afa03();DATARMNET61c2303133=genl_unregister_family(&
DATARMNET61e8f41aae);if(DATARMNET61c2303133)pr_err(
"\x25\x73\x28\x29\x3a\x20\x75\x6e\x72\x65\x67\x69\x73\x74\x65\x72\x20\x66\x61\x6d\x69\x6c\x79\x20\x66\x61\x69\x6c\x65\x64\x3a\x20\x25\x69" "\n"
,__func__,DATARMNET61c2303133);}MODULE_LICENSE("\x47\x50\x4c\x20\x76\x32");
module_init(DATARMNET7eb0fa5c8f);module_exit(DATARMNET7a381832d5);
