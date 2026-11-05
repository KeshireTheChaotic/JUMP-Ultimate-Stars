
void FUN_0202da18(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 uStack_18;
  
  uStack_18 = param_4;
  MIi_CpuCopy16(param_3,&local_24,0xc);
  piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x14) + 0x50))
                            (*(int **)(param_1 + 0x14),param_2);
  iVar2 = *piVar1;
  local_28 = local_24 << 0xc;
  FUN_02018ac8(&local_28,param_1 + 0x18);
  iVar2 = local_28 + iVar2 * 0x1000;
  local_2c = local_20 << 0xc;
  local_24 = (int)(iVar2 + ((uint)(iVar2 >> 0xb) >> 0x14)) >> 0xc;
  iVar2 = piVar1[1];
  FUN_02018ac8(&local_2c,param_1 + 0x18);
  iVar2 = local_2c + iVar2 * 0x1000;
  local_30 = local_1c << 0xc;
  local_20 = (int)(iVar2 + ((uint)(iVar2 >> 0xb) >> 0x14)) >> 0xc;
  iVar2 = piVar1[2];
  FUN_02018ac8(&local_30,param_1 + 0x18);
  iVar2 = local_30 + iVar2 * 0x1000;
  local_1c = (int)(iVar2 + ((uint)(iVar2 >> 0xb) >> 0x14)) >> 0xc;
  (**(code **)(**(int **)(param_1 + 0x14) + 0x24))(*(int **)(param_1 + 0x14),param_2,&local_24);
  return;
}

