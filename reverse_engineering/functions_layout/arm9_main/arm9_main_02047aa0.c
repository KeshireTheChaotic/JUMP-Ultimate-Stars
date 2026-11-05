
undefined4 * FUN_02047aa0(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *local_28;
  int local_10;
  undefined4 uStack_c;
  undefined4 *puStack_8;
  undefined4 *puStack_4;
  
  local_28 = param_4;
  local_10 = param_1;
  uStack_c = param_2;
  puStack_8 = param_3;
  puStack_4 = param_4;
  if (*(int *)(param_1 + 0xa4) == 0) {
    FUN_02030110(&DAT_020a1170,&local_10);
  }
  uVar1 = 0;
  *(int *)(local_10 + 0xa4) = *(int *)(local_10 + 0xa4) + 1;
  while( true ) {
    if (*(uint *)(local_10 + 0x9c) <= uVar1) {
      local_28 = (undefined4 *)jus_AllocDebug(0x30);
      if (local_28 != (undefined4 *)0x0) {
        uVar3 = *param_4;
        uVar2 = *param_3;
        *local_28 = param_2;
        local_28[1] = uVar2;
        local_28[2] = uVar3;
        local_28[3] = 0;
        local_28[4] = 0;
        *(undefined1 *)(local_28 + 5) = 1;
        *(undefined1 *)((int)local_28 + 0x15) = 0;
        local_28[6] = 0;
        local_28[7] = param_1;
      }
      if (*(int *)(*(int *)(param_1 + 0x34) + 0x908) != 0) {
        local_28[8] = 0x100;
        local_28[9] = 0x1000000;
      }
      FUN_020488c4(local_28);
      FUN_02030110(param_1 + 0x98,&local_28);
      return local_28;
    }
    if (*(char *)(*(int *)(*(int *)(local_10 + 0x98) + uVar1 * 4) + 0x15) == '\x01') break;
    uVar1 = uVar1 + 1;
  }
  *(undefined1 *)(*(int *)(*(int *)(local_10 + 0x98) + uVar1 * 4) + 0x15) = 0;
  **(undefined4 **)(*(int *)(local_10 + 0x98) + uVar1 * 4) = param_2;
  *(undefined4 *)(*(int *)(*(int *)(local_10 + 0x98) + uVar1 * 4) + 4) = *param_3;
  *(undefined4 *)(*(int *)(*(int *)(local_10 + 0x98) + uVar1 * 4) + 8) = *param_4;
  return *(undefined4 **)(*(int *)(local_10 + 0x98) + uVar1 * 4);
}

