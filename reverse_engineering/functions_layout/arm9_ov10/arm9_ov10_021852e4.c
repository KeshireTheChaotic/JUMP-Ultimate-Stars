
int FUN_021852e4(int *param_1,int param_2,char *param_3)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined1 local_110;
  undefined1 local_10f;
  
  iVar3 = *param_1;
  if (param_3 == (char *)0x0) {
    FUN_0218912c(param_1,s_Invalid_value__021a595c);
    return 2;
  }
  if (0x1e < param_2 - 0x700U) {
switchD_02185312_caseD_a:
    FUN_0218912c(param_1,s_Invalid_info__021a5940);
    return 2;
  }
                    /* WARNING: Switch is manually overridden */
  switch(param_2 - 0x700U) {
  case 0:
    if (*param_3 == '\0') {
      FUN_0218912c(param_1,s_Invalid_value__021a595c);
      return 2;
    }
    FUN_02189478(&local_110,param_3,0x1f);
    FUN_02189478(iVar3 + 0x110,&local_110,0x1f);
    iVar3 = FUN_02185b64(param_1,s__nick__021a596c,&local_110);
    if (iVar3 != 0) {
      return iVar3;
    }
    break;
  case 1:
    if (*param_3 == '\0') {
      FUN_0218912c(param_1,s_Invalid_value__021a595c);
      return 2;
    }
    FUN_02189478(&local_110,param_3,0x15);
    FUN_02189478(iVar3 + 0x12f,&local_110,0x15);
    iVar3 = FUN_02185b64(param_1,s__uniquenick__021a5974,&local_110);
    if (iVar3 != 0) {
      return iVar3;
    }
    break;
  case 2:
    if (*param_3 == '\0') {
      FUN_0218912c(param_1,s_Invalid_value__021a595c);
      return 2;
    }
    FUN_02189478(&local_110,param_3,0x33);
    FUN_02001e6c(&local_110);
    FUN_02189478(iVar3 + 0x144,&local_110,0x33);
    iVar3 = FUN_02185b34(param_1,s__email__021a5984,&local_110);
    if (iVar3 != 0) {
      return iVar3;
    }
    break;
  case 3:
    if (*param_3 == '\0') {
      FUN_0218912c(param_1,s_Invalid_value__021a595c);
      return 2;
    }
    FUN_02189478(&local_110,param_3,0x1f);
    FUN_02189478(iVar3 + 0x177,&local_110,0x1f);
    iVar3 = FUN_02185b34(param_1,s__password__021a598c,&local_110);
    if (iVar3 != 0) {
      return iVar3;
    }
    break;
  case 4:
    FUN_02189478(&local_110,param_3,0x1f);
    iVar3 = FUN_02185b64(param_1,s__firstname__021a5998,&local_110);
    if (iVar3 != 0) {
      return iVar3;
    }
    break;
  case 5:
    FUN_02189478(&local_110,param_3,0x1f);
    iVar3 = FUN_02185b64(param_1,s__lastname__021a59a4,&local_110);
    if (iVar3 != 0) {
      return iVar3;
    }
    break;
  case 6:
    FUN_02189478(&local_110,param_3,0x100);
    iVar3 = FUN_02185b64(param_1,s__icquin__021a5a04,&local_110);
    if (iVar3 != 0) {
      return iVar3;
    }
    break;
  case 7:
    FUN_02189478(&local_110,param_3,0x4c);
    iVar3 = FUN_02185b64(param_1,s__homepage__021a59b0,&local_110);
    if (iVar3 != 0) {
      return iVar3;
    }
    break;
  case 8:
    FUN_02189478(&local_110,param_3,0xb);
    iVar3 = FUN_02185b64(param_1,s__zipcode__021a59bc,&local_110);
    if (iVar3 != 0) {
      return iVar3;
    }
    break;
  case 9:
    iVar3 = FUN_02004b04(param_3);
    if (iVar3 != 2) {
      FUN_0218912c(param_1,s_Invalid_countrycode__021a59c8);
      return 2;
    }
    FUN_02189478(&local_110,param_3,3);
    iVar3 = FUN_02185b64(param_1,s__countrycode__021a59e0,&local_110);
    if (iVar3 != 0) {
      return iVar3;
    }
    break;
  default:
    goto switchD_02185312_caseD_a;
  case 0xb:
    cVar2 = *param_3;
    iVar3 = (int)cVar2;
    if ((-1 < iVar3) && (iVar3 < 0x80)) {
      cVar2 = (&DAT_0208d4a0)[iVar3];
    }
    if (cVar2 == 'M') {
      local_110 = DAT_021a59f0;
      local_10f = DAT_021a59f1;
    }
    else if (cVar2 == 'F') {
      local_110 = DAT_021a59f4;
      local_10f = DAT_021a59f5;
    }
    else {
      local_110 = DAT_021a59f8;
      local_10f = DAT_021a59f9;
    }
    iVar3 = FUN_02185b64(param_1,s__sex__021a59fc,&local_110);
    if (iVar3 != 0) {
      return iVar3;
    }
    break;
  case 0xd:
    uVar1 = FUN_02005f14(param_3);
    iVar3 = FUN_02185808(param_1,0x70d,uVar1);
    if (iVar3 != 0) {
      return iVar3;
    }
    break;
  case 0xe:
    uVar1 = FUN_02005f14(param_3);
    iVar3 = FUN_02185808(param_1,0x70e,uVar1);
    if (iVar3 != 0) {
      return iVar3;
    }
    break;
  case 0xf:
    FUN_02189478(&local_110,param_3,0x100);
    iVar3 = FUN_02185b64(param_1,s__videocard1string__021a5a10,&local_110);
    if (iVar3 != 0) {
      return iVar3;
    }
    break;
  case 0x10:
    uVar1 = FUN_02005f14(param_3);
    iVar3 = FUN_02185808(param_1,0x710,uVar1);
    if (iVar3 != 0) {
      return iVar3;
    }
    break;
  case 0x11:
    FUN_02189478(&local_110,param_3,0x100);
    iVar3 = FUN_02185b64(param_1,s__videocard2string__021a5a24,&local_110);
    if (iVar3 != 0) {
      return iVar3;
    }
    break;
  case 0x12:
    uVar1 = FUN_02005f14(param_3);
    iVar3 = FUN_02185808(param_1,0x712,uVar1);
    if (iVar3 != 0) {
      return iVar3;
    }
    break;
  case 0x14:
    uVar1 = FUN_02005f14(param_3);
    iVar3 = FUN_02185808(param_1,0x714,uVar1);
    if (iVar3 != 0) {
      return iVar3;
    }
    break;
  case 0x15:
    uVar1 = FUN_02005f14(param_3);
    iVar3 = FUN_02185808(param_1,0x715,uVar1);
    if (iVar3 != 0) {
      return iVar3;
    }
    break;
  case 0x16:
    FUN_02189478(&local_110,param_3,0x100);
    iVar3 = FUN_02185b64(param_1,s__osstring__021a5a38,&local_110);
    if (iVar3 != 0) {
      return iVar3;
    }
    break;
  case 0x17:
    FUN_02189478(&local_110,param_3,0x33);
    iVar3 = FUN_02185b64(param_1,s__aim__021a5a44,&local_110);
    if (iVar3 != 0) {
      return iVar3;
    }
    break;
  case 0x18:
    FUN_02189478(&local_110,param_3,0x100);
    iVar3 = FUN_02185b64(param_1,s__pic__021a5a4c,&local_110);
    if (iVar3 != 0) {
      return iVar3;
    }
    break;
  case 0x19:
    FUN_02189478(&local_110,param_3,0x100);
    iVar3 = FUN_02185b64(param_1,s__occ__021a5a54,&local_110);
    if (iVar3 != 0) {
      return iVar3;
    }
    break;
  case 0x1a:
    FUN_02189478(&local_110,param_3,0x100);
    iVar3 = FUN_02185b64(param_1,s__ind__021a5a5c,&local_110);
    if (iVar3 != 0) {
      return iVar3;
    }
    break;
  case 0x1b:
    FUN_02189478(&local_110,param_3,0x100);
    iVar3 = FUN_02185b64(param_1,s__inc__021a5a64,&local_110);
    if (iVar3 != 0) {
      return iVar3;
    }
    break;
  case 0x1c:
    FUN_02189478(&local_110,param_3,0x100);
    iVar3 = FUN_02185b64(param_1,s__mar__021a5a6c,&local_110);
    if (iVar3 != 0) {
      return iVar3;
    }
    break;
  case 0x1d:
    FUN_02189478(&local_110,param_3,0x100);
    iVar3 = FUN_02185b64(param_1,s__chc__021a5a74,&local_110);
    if (iVar3 != 0) {
      return iVar3;
    }
    break;
  case 0x1e:
    FUN_02189478(&local_110,param_3,0x100);
    iVar3 = FUN_02185b64(param_1,&DAT_021a5a7c,&local_110);
    if (iVar3 != 0) {
      return iVar3;
    }
  }
  return 0;
}

