
void FUN_0214da58(int param_1)

{
  int iVar1;
  
  FUN_02028930(*(undefined4 *)(param_1 + 8));
  (**(code **)(**(int **)(*(int *)(param_1 + 0xc) + 4) + 0x124))();
  FUN_0214e4e4(param_1);
  iVar1 = FUN_0214e55c(param_1);
  if (iVar1 == 0) {
    return;
  }
  *(undefined2 *)(param_1 + 0x54) = 0;
  iVar1 = *(int *)(param_1 + 0x44);
  *(code **)(iVar1 + 0xd4) = FUN_0214dac8;
  *(int *)(iVar1 + 0xdc) = param_1;
  FUN_0201ad30(DAT_020a0dd8,1);
  return;
}

