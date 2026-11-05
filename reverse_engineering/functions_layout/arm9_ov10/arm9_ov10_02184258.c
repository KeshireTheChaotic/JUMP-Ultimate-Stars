
int FUN_02184258(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_29c [33];
  undefined1 local_27b [21];
  undefined1 auStack_266 [512];
  undefined1 auStack_66 [82];
  
  iVar5 = *param_1;
  iVar1 = FUN_021893dc(param_1,param_3,0);
  if (iVar1 != 0) {
    if ((*(int *)(iVar5 + 0x418) == 0x106) && (*(int *)(iVar5 + 0x1a0) != 0)) {
      FUN_021875d4(param_1);
      *(undefined4 *)(iVar5 + 0x19c) = 0;
      *(undefined4 *)(iVar5 + 0x1a0) = 0;
    }
    else if ((*(int *)(iVar5 + 0x418) == 0x201) &&
            (iVar1 = FUN_02189328(param_3,s__pid__021a5538,auStack_266,0x200), iVar1 != 0)) {
      uVar2 = FUN_02005f14(auStack_266);
      *(undefined4 *)(iVar5 + 0x1a0) = uVar2;
    }
    iVar1 = FUN_02004d40(param_3,s__fatal__021a5540);
    if (iVar1 == 0) {
      FUN_0218913c(param_1,*(undefined4 *)(iVar5 + 0x418),iVar5);
      FUN_02183f3c(param_1,4,0);
      return 4;
    }
    FUN_0218913c(param_1,*(undefined4 *)(iVar5 + 0x418),iVar5);
    FUN_02183f3c(param_1,4,1);
    return 4;
  }
  iVar6 = *(int *)(param_2 + 4);
  iVar1 = *(int *)(param_2 + 0x14);
  if (iVar1 == 1) {
    iVar1 = FUN_02004cec(param_3,s__lc_1_021a5548,5);
    if (iVar1 != 0) {
      FUN_0218913c(param_1,1,s_Unexpected_data_was_received_fro_021a5550);
      FUN_02183f3c(param_1,3,1);
      return 3;
    }
    iVar1 = FUN_02189328(param_3,s__challenge__021a5580,iVar6,0x80);
    if (iVar1 == 0) {
      FUN_0218913c(param_1,1,s_Unexpected_data_was_received_fro_021a5550);
      FUN_02183f3c(param_1,3,1);
      return 3;
    }
    if (*(int *)(iVar6 + 0x304) == 0) {
      iVar1 = FUN_02184940(param_1,iVar6);
      if (iVar1 != 0) {
        return iVar1;
      }
      *(undefined4 *)(param_2 + 0x14) = 2;
    }
    else {
      iVar1 = FUN_02184748(param_1,iVar6);
      if (iVar1 != 0) {
        return iVar1;
      }
      *(undefined4 *)(param_2 + 0x14) = 3;
    }
  }
  else if (iVar1 == 2) {
    iVar1 = FUN_02004cec(param_3,s__lc_2_021a55dc,5);
    if (iVar1 != 0) {
      FUN_0218913c(param_1,1,s_Unexpected_data_was_received_fro_021a5550);
      FUN_02183f3c(param_1,3,1);
      return 3;
    }
    iVar1 = FUN_02189328(param_3,s__sesskey__021a55e4,auStack_266,0x200);
    if (iVar1 == 0) {
      FUN_0218913c(param_1,1,s_Unexepected_data_was_received_fr_021a55a0);
      FUN_02183f3c(param_1,3,1);
      return 3;
    }
    uVar2 = FUN_02005f14(auStack_266);
    *(undefined4 *)(iVar5 + 0x198) = uVar2;
    iVar1 = FUN_02189328(param_3,s__userid__021a5594,auStack_266,0x200);
    if (iVar1 == 0) {
      FUN_0218913c(param_1,1,s_Unexepected_data_was_received_fr_021a55a0);
      FUN_02183f3c(param_1,3,1);
      return 3;
    }
    uVar2 = FUN_02005f14(auStack_266);
    *(undefined4 *)(iVar5 + 0x19c) = uVar2;
    iVar1 = FUN_02189328(param_3,s__profileid__021a55d0,auStack_266,0x200);
    if (iVar1 == 0) {
      FUN_0218913c(param_1,1,s_Unexepected_data_was_received_fr_021a55a0);
      FUN_02183f3c(param_1,3,1);
      return 3;
    }
    uVar2 = FUN_02005f14(auStack_266);
    *(undefined4 *)(iVar5 + 0x1a0) = uVar2;
    iVar1 = FUN_02189328(param_3,s__uniquenick__021a55f0,local_27b,0x15);
    if (iVar1 == 0) {
      local_27b[0] = 0;
    }
    iVar1 = FUN_02189328(param_3,&DAT_021a5600,iVar5 + 0x474,0x19);
    if (iVar1 == 0) {
      *(undefined1 *)(iVar5 + 0x474) = 0;
    }
    if (*(char *)(iVar6 + 0xc2) == '\0') {
      if (*(char *)(iVar5 + 0x12f) == '\0') {
        FUN_02003ce0(auStack_66,s__s__s_021a5608,iVar5 + 0x110,iVar5 + 0x144);
        puVar3 = auStack_66;
      }
      else {
        puVar3 = (undefined1 *)(iVar5 + 0x12f);
      }
    }
    else {
      puVar3 = (undefined1 *)(iVar6 + 0xc2);
    }
    FUN_02003ce0(auStack_266,s__s_s_s_s_s_s_021a5610,iVar6 + 0xa1,s__021a5620,puVar3,iVar6,
                 iVar6 + 0x80,iVar6 + 0xa1);
    uVar2 = FUN_02004b04(auStack_266);
    FUN_0200178c(auStack_266,uVar2,auStack_29c);
    iVar1 = FUN_02189328(param_3,s__proof__021a5654,auStack_266,0x200);
    if (iVar1 == 0) {
      FUN_0218913c(param_1,1,s_Unexepected_data_was_received_fr_021a55a0);
      FUN_02183f3c(param_1,3,1);
      return 3;
    }
    iVar1 = FUN_020024cc(auStack_29c,auStack_266,0x20);
    if (iVar1 != 0) {
      FUN_0218913c(param_1,0x108,s_Could_not_authenticate_server__021a565c);
      FUN_02183f3c(param_1,3,1);
      return 3;
    }
    if (*(int *)(iVar5 + 0x100) != 0) {
      puVar4 = (undefined4 *)FUN_02187628(param_1,*(undefined4 *)(iVar5 + 0x1a0));
      *puVar4 = *(undefined4 *)(iVar5 + 0x1a0);
      puVar4[1] = *(undefined4 *)(iVar5 + 0x19c);
    }
    *(undefined4 *)(iVar5 + 0x1d8) = 3;
    iVar1 = *(int *)(param_2 + 0xc);
    uVar2 = *(undefined4 *)(param_2 + 0x10);
    if (iVar1 != 0) {
      puVar4 = (undefined4 *)FUN_0217583c(0x20);
      if (puVar4 == (undefined4 *)0x0) {
        FUN_0218912c(param_1,s_Out_of_memory__021a567c);
        return 1;
      }
      FUN_02002488(puVar4,0,0x20);
      puVar4[1] = *(undefined4 *)(iVar5 + 0x1a0);
      *puVar4 = 0;
      FUN_02189478(puVar4 + 2,local_27b,0x15);
      iVar1 = FUN_02183ec4(param_1,iVar1,uVar2,puVar4,param_2,0);
      if (iVar1 != 0) {
        return iVar1;
      }
    }
    FUN_021865e4(param_1,param_2);
  }
  else if (iVar1 == 3) {
    iVar1 = FUN_02004cec(param_3,s__nur__021a558c,5);
    if (iVar1 != 0) {
      FUN_0218913c(param_1,1,s_Unexpected_data_was_received_fro_021a5550);
      FUN_02183f3c(param_1,3,1);
      return 3;
    }
    iVar1 = FUN_02189328(param_3,s__userid__021a5594,auStack_266,0x200);
    if (iVar1 == 0) {
      FUN_0218913c(param_1,1,s_Unexepected_data_was_received_fr_021a55a0);
      FUN_02183f3c(param_1,3,1);
      return 3;
    }
    uVar2 = FUN_02005f14(auStack_266);
    *(undefined4 *)(iVar5 + 0x19c) = uVar2;
    iVar1 = FUN_02189328(param_3,s__profileid__021a55d0,auStack_266,0x200);
    if (iVar1 == 0) {
      FUN_0218913c(param_1,1,s_Unexepected_data_was_received_fr_021a55a0);
      FUN_02183f3c(param_1,3,1);
      return 3;
    }
    uVar2 = FUN_02005f14(auStack_266);
    *(undefined4 *)(iVar5 + 0x1a0) = uVar2;
    iVar1 = FUN_02184940(param_1,iVar6);
    if (iVar1 != 0) {
      return iVar1;
    }
    *(undefined4 *)(param_2 + 0x14) = 2;
  }
  return 0;
}

