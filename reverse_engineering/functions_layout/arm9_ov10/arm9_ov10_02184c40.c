
int FUN_02184c40(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,char *param_6,char *param_7,int param_8,int param_9,
                undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13)

{
  int iVar1;
  int iVar2;
  int local_18;
  
  iVar2 = *param_1;
  if ((*(int *)(iVar2 + 0x1d8) != 4) || (iVar1 = FUN_02182768(), iVar1 == 0)) {
    if (*(int *)(iVar2 + 0x1d8) != 0) {
      FUN_0218912c(param_1,s_Invalid_connection__021a5734);
      return 2;
    }
    if (param_9 == 0) {
      *(undefined4 *)(iVar2 + 0x10c) = 0;
    }
    else {
      if (param_9 != 1) {
        FUN_0218912c(param_1,s_Invalid_firewall__021a5748);
        return 2;
      }
      *(undefined4 *)(iVar2 + 0x10c) = 1;
    }
    *(undefined4 *)(iVar2 + 0x10c) = 1;
    FUN_02189478(iVar2 + 0x110,param_2,0x1f);
    FUN_02189478(iVar2 + 0x12f,param_3,0x15);
    FUN_02189478(iVar2 + 0x144,param_4,0x33);
    FUN_02189478(iVar2 + 0x177,param_5,0x1f);
    FUN_02001e6c(iVar2 + 0x144);
    iVar2 = FUN_0217583c(0x308);
    if (iVar2 == 0) {
      FUN_0218912c(param_1,s_Out_of_memory__021a567c);
      return 1;
    }
    FUN_02002488(iVar2,0,0x308);
    *(undefined4 *)(iVar2 + 0x304) = param_10;
    if ((*param_6 != '\0') && (*param_7 != '\0')) {
      FUN_02189478(iVar2 + 0xc2,param_6,0x100);
      FUN_02189478(iVar2 + 0x1c2,param_7,0x100);
    }
    if (param_8 != 0) {
      FUN_02189478(iVar2 + 0x2c2,param_8,0x41);
    }
    iVar1 = FUN_0218668c(param_1,0,iVar2,&local_18,param_11,param_12,param_13);
    if (iVar1 == 0) {
      iVar2 = FUN_02184dd4(param_1,local_18);
      if (iVar2 != 0) {
        *(int *)(local_18 + 0x1c) = iVar2;
        FUN_0218670c(param_1,local_18);
        FUN_02183fe4(param_1,0);
        return iVar2;
      }
      if ((*(int *)(local_18 + 8) == 0) ||
         (iVar1 = FUN_0218241c(param_1,*(undefined4 *)(local_18 + 0x18)), iVar1 == 0)) {
        iVar1 = 0;
      }
    }
  }
  return iVar1;
}

