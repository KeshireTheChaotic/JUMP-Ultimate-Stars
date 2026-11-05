
void FUN_02019bec(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = (int *)FUN_02035c90(param_2);
  if (param_4 != 0) {
    piVar1 = (int *)(**(code **)(*piVar1 + 0x5c))(piVar1,param_4);
  }
  (**(code **)(**(int **)(param_1 + param_3 * 4 + 0xc) + 0xc))();
  *(int **)(param_1 + param_3 * 4 + 0xc) = piVar1;
  uVar2 = (*(uint *)(param_1 + 8) & 0xfffffff) >> 0x19;
  if ((*(uint *)(param_1 + 8) & 0xfffffff) >> 0x19 <= param_3 + 1U) {
    uVar2 = param_3 + 1U;
  }
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xf1ffffff | (uVar2 & 7) << 0x19;
  return;
}

