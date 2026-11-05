
void FUN_02029e88(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    return;
  }
  uVar1 = FUN_0201a228((uint)*(ushort *)(param_1 + 8) << 1);
  MIi_CpuCopy16(*(undefined4 *)(param_1 + 0x10),uVar1,(uint)*(ushort *)(param_1 + 8) << 1);
  (**(code **)(**(int **)(param_1 + 0x14) + 0xc))();
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  return;
}

