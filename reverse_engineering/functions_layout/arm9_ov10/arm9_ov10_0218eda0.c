
int FUN_0218eda0(int param_1,uint param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int local_38;
  uint local_34;
  int local_30;
  int local_2c;
  int local_28;
  uint local_20;
  
  local_28 = 0;
  *(undefined4 *)(param_5 + 0x34) = 0;
  iVar4 = 0;
  uVar5 = OS_GetTick();
  local_20 = (uint)uVar5 >> 0x10 | (int)((ulonglong)uVar5 >> 0x20) << 0x10;
  local_38 = param_1;
  local_34 = param_2;
  local_30 = param_3;
  local_2c = param_4;
  do {
    iVar3 = (*DAT_021a8530)();
    if ((((iVar3 == 0) || (local_34 == 0)) || (*(char *)(param_5 + 8) != '\x04')) ||
       (uVar5 = OS_GetTick(),
       0x9e < (int)(((uint)uVar5 >> 0x10 | (int)((ulonglong)uVar5 >> 0x20) << 0x10) - local_20))) {
      return local_28;
    }
    iVar3 = *(int *)(param_5 + 0x28);
    FUN_0218eef4(local_38,local_34,local_30,local_2c,param_5,iVar4);
    uVar5 = OS_GetTick();
    while( true ) {
      FUN_02191554();
      iVar1 = (*DAT_021a8530)();
      if ((iVar1 == 0) || (*(char *)(param_5 + 8) != '\x04')) break;
      if (*(int *)(param_5 + 0x28) == *(int *)(param_5 + 0x30)) break;
      uVar6 = OS_GetTick();
      if ((0xe < (int)(((uint)uVar6 >> 0x10 | (int)((ulonglong)uVar6 >> 0x20) << 0x10) -
                      ((uint)uVar5 >> 0x10 | (int)((ulonglong)uVar5 >> 0x20) << 0x10))) ||
         ((iVar4 != 0 && (*(short *)(param_5 + 0x2c) != 0)))) break;
    }
    uVar2 = *(int *)(param_5 + 0x30) - iVar3;
    local_28 = local_28 + uVar2;
    if (uVar2 != 0) {
      uVar5 = OS_GetTick();
      local_20 = (uint)uVar5 >> 0x10 | (int)((ulonglong)uVar5 >> 0x20) << 0x10;
    }
    *(undefined4 *)(param_5 + 0x28) = *(undefined4 *)(param_5 + 0x30);
    if (((*(char *)(param_5 + 8) == '\x04') && (*(short *)(param_5 + 0x2c) == 0)) && (uVar2 == 0)) {
      if (iVar4 == 0) {
        uVar5 = OS_GetTick();
        while (iVar3 = (*DAT_021a8530)(), iVar3 != 0) {
          uVar6 = OS_GetTick();
          if ((0xe < (int)(((uint)uVar6 >> 0x10 | (int)((ulonglong)uVar6 >> 0x20) << 0x10) -
                          ((uint)uVar5 >> 0x10 | (int)((ulonglong)uVar5 >> 0x20) << 0x10))) ||
             (FUN_02191554(), *(short *)(param_5 + 0x2c) != 0)) break;
        }
        if (*(short *)(param_5 + 0x2c) == 0) {
          iVar4 = 1;
        }
      }
    }
    else {
      iVar4 = 0;
    }
    if (uVar2 < local_34) {
      local_38 = local_38 + uVar2;
      local_34 = local_34 - uVar2;
    }
    else {
      local_38 = local_30 + (uVar2 - local_34);
      local_34 = local_2c - (uVar2 - local_34);
      local_30 = 0;
      local_2c = 0;
    }
  } while( true );
}

