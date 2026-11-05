
int FUN_020424ec(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int local_20;
  undefined4 uStack_1c;
  
  uStack_1c = param_4;
  local_20 = jus_AllocDebug(0x3c);
  if (local_20 != 0) {
    *(undefined1 *)(local_20 + 8) = 0;
    *(undefined4 *)(local_20 + 0x10) = param_2;
    *(undefined4 *)(local_20 + 0xc) = param_2;
    *(undefined4 *)(local_20 + 0x18) = 0;
    *(undefined4 *)(local_20 + 0x14) = 0;
    *(undefined4 *)(local_20 + 0x20) = 0;
    *(undefined4 *)(local_20 + 0x1c) = 0;
    iVar1 = jus_AllocDebug(param_5 << 1);
    *(int *)(local_20 + 0x24) = iVar1;
    *(int *)(local_20 + 0x28) = iVar1 + param_5;
    MIi_CpuCopy16(param_3,*(undefined4 *)(local_20 + 0x24),param_5);
    MIi_CpuCopy16(param_3,*(undefined4 *)(local_20 + 0x28),param_5);
    *(undefined4 *)(local_20 + 0x30) = param_4;
    *(undefined4 *)(local_20 + 0x2c) = param_4;
    *(int *)(local_20 + 0x34) = param_5;
    *(undefined1 *)(local_20 + 0x38) = 1;
  }
  FUN_02030110(param_1 + 0x424,&local_20);
  DAT_020a0c3d = 1;
  DAT_020a0c36 = 1;
  return local_20;
}

