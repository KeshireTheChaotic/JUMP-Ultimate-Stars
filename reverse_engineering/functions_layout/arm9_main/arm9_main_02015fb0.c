
int FUN_02015fb0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_02010adc(0);
  iVar1 = FUN_02011b38();
  iVar1 = *(int *)(iVar1 + 4);
  (**(code **)(**(int **)(iVar1 + 0x50) + 0xc))();
  uVar2 = (**(code **)(*(int *)param_1[0x14] + 0x10))();
  *(undefined4 *)(iVar1 + 0x50) = uVar2;
  (**(code **)(*param_1 + 0xb4))(param_1,iVar1);
  return iVar1;
}

