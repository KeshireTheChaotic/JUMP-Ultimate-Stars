
undefined4 FUN_02019c74(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + param_3 * 4 + 0xc);
  if ((iVar1 != 0) && (param_2 == *(int *)(iVar1 + 8))) {
    return 0;
  }
  piVar2 = (int *)FUN_02035e88(param_2);
  if (param_4 != 0) {
    piVar2 = (int *)(**(code **)(*piVar2 + 0x5c))(piVar2,param_4);
  }
  (**(code **)(**(int **)(param_1 + param_3 * 4 + 0xc) + 0xc))();
  *(int **)(param_1 + param_3 * 4 + 0xc) = piVar2;
  uVar3 = (*(uint *)(param_1 + 8) & 0xfffffff) >> 0x19;
  if ((*(uint *)(param_1 + 8) & 0xfffffff) >> 0x19 <= param_3 + 1U) {
    uVar3 = param_3 + 1U;
  }
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xf1ffffff | (uVar3 & 7) << 0x19;
  return 1;
}

