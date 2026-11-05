
int FUN_02185808(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_18 [16];
  
  switch(param_2) {
  case 0x706:
    FUN_02003ce0(auStack_18,&DAT_021a593c);
    iVar2 = FUN_02185b64(param_1,s__icquin__021a5a04,auStack_18);
    if (iVar2 != 0) {
      return iVar2;
    }
    break;
  default:
    FUN_0218912c(param_1,s_Invalid_info__021a5940);
    return 2;
  case 0x708:
    if (param_3 < 0) {
      FUN_0218912c(param_1,s_Invalid_zipcode__021a5a84);
      return 2;
    }
    FUN_02003ce0(auStack_18,&DAT_021a593c);
    iVar2 = FUN_02185b64(param_1,s__zipcode__021a59bc,auStack_18);
    if (iVar2 != 0) {
      return iVar2;
    }
    break;
  case 0x70b:
    if (param_3 == 0x500) {
      iVar2 = FUN_02185b64(param_1,s__sex__021a59fc,&DAT_021a59f0);
      if (iVar2 != 0) {
        return iVar2;
      }
    }
    else if (param_3 == 0x501) {
      iVar2 = FUN_02185b64(param_1,s__sex__021a59fc,&DAT_021a59f4);
      if (iVar2 != 0) {
        return iVar2;
      }
    }
    else {
      if (param_3 != 0x502) {
        FUN_0218912c(param_1,s_Invalid_sex__021a5a98);
        return 2;
      }
      iVar2 = FUN_02185b64(param_1,s__sex__021a59fc,&DAT_021a59f8);
      if (iVar2 != 0) {
        return iVar2;
      }
    }
    break;
  case 0x70c:
    FUN_02003ce0(auStack_18,&DAT_021a593c);
    iVar2 = FUN_02185b34(param_1,s__cpubrandid__021a5aa8,auStack_18);
    if (iVar2 != 0) {
      return iVar2;
    }
    break;
  case 0x70d:
    FUN_02003ce0(auStack_18,&DAT_021a593c);
    iVar2 = FUN_02185b34(param_1,s__cpuspeed__021a5ab8,auStack_18);
    if (iVar2 != 0) {
      return iVar2;
    }
    break;
  case 0x70e:
    uVar1 = FUN_0200d12c(param_3,0x10);
    FUN_02003ce0(auStack_18,&DAT_021a593c,uVar1);
    iVar2 = FUN_02185b34(param_1,s__memory__021a5ac4,auStack_18);
    if (iVar2 != 0) {
      return iVar2;
    }
    break;
  case 0x710:
    uVar1 = FUN_0200d12c(param_3,4);
    FUN_02003ce0(auStack_18,&DAT_021a593c,uVar1);
    iVar2 = FUN_02185b34(param_1,s__videocard1ram__021a5ad0,auStack_18);
    if (iVar2 != 0) {
      return iVar2;
    }
    break;
  case 0x712:
    uVar1 = FUN_0200d12c(param_3,4);
    FUN_02003ce0(auStack_18,&DAT_021a593c,uVar1);
    iVar2 = FUN_02185b34(param_1,s__videocard2ram__021a5ae0,auStack_18);
    if (iVar2 != 0) {
      return iVar2;
    }
    break;
  case 0x713:
    FUN_02003ce0(auStack_18,&DAT_021a593c);
    iVar2 = FUN_02185b34(param_1,s__connectionid__021a5af0,auStack_18);
    if (iVar2 != 0) {
      return iVar2;
    }
    break;
  case 0x714:
    FUN_02003ce0(auStack_18,&DAT_021a593c);
    iVar2 = FUN_02185b34(param_1,s__connectionspeed__021a5b00,auStack_18);
    if (iVar2 != 0) {
      return iVar2;
    }
    break;
  case 0x715:
    FUN_02003ce0(auStack_18,&DAT_021a593c,param_3 != 0);
    iVar2 = FUN_02185b34(param_1,s__hasnetwork__021a5b14,auStack_18);
    if (iVar2 != 0) {
      return iVar2;
    }
    break;
  case 0x718:
    FUN_02003ce0(auStack_18,&DAT_021a593c);
    iVar2 = FUN_02185b64(param_1,s__pic__021a5a4c,auStack_18);
    if (iVar2 != 0) {
      return iVar2;
    }
    break;
  case 0x719:
    FUN_02003ce0(auStack_18,&DAT_021a593c);
    iVar2 = FUN_02185b64(param_1,s__occ__021a5a54,auStack_18);
    if (iVar2 != 0) {
      return iVar2;
    }
    break;
  case 0x71a:
    FUN_02003ce0(auStack_18,&DAT_021a593c);
    iVar2 = FUN_02185b64(param_1,s__ind__021a5a5c,auStack_18);
    if (iVar2 != 0) {
      return iVar2;
    }
    break;
  case 0x71b:
    FUN_02003ce0(auStack_18,&DAT_021a593c);
    iVar2 = FUN_02185b64(param_1,s__inc__021a5a64,auStack_18);
    if (iVar2 != 0) {
      return iVar2;
    }
    break;
  case 0x71c:
    FUN_02003ce0(auStack_18,&DAT_021a593c);
    iVar2 = FUN_02185b64(param_1,s__mar__021a5a6c,auStack_18);
    if (iVar2 != 0) {
      return iVar2;
    }
    break;
  case 0x71d:
    FUN_02003ce0(auStack_18,&DAT_021a593c);
    iVar2 = FUN_02185b64(param_1,s__chc__021a5a74,auStack_18);
    if (iVar2 != 0) {
      return iVar2;
    }
    break;
  case 0x71e:
    FUN_02003ce0(auStack_18,&DAT_021a593c);
    iVar2 = FUN_02185b64(param_1,&DAT_021a5a7c,auStack_18);
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  return 0;
}

