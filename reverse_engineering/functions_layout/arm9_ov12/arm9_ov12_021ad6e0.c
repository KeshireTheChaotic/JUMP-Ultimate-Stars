
void FUN_021ad6e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined4 uStack_10;
  
  local_18 = *(undefined2 *)(*(int *)(param_1 + 0xa0) + 0x90);
  local_14 = *(undefined2 *)(param_1 + 0xcc);
  iVar1 = *(int *)(param_1 + 0x138) * *(int *)(*(int *)(*(int *)(param_1 + 0x160) + 100) + 0xe8) *
          0x1000 - *(int *)(param_1 + 0x174);
  local_16 = (undefined2)((int)(iVar1 + ((uint)(iVar1 >> 0xb) >> 0x14)) >> 0xc);
  iVar1 = (*(int *)(param_1 + 0x138) + 1) *
          *(int *)(*(int *)(*(int *)(param_1 + 0x160) + 100) + 0xe8) * 0x1000 -
          *(int *)(param_1 + 0x174);
  local_12 = (undefined2)((int)(iVar1 + ((uint)(iVar1 >> 0xb) >> 0x14)) >> 0xc);
  uStack_10 = param_4;
  (**(code **)(**(int **)(param_1 + 0xa0) + 0x13c))(*(int **)(param_1 + 0xa0),&local_18,param_2);
  return;
}

