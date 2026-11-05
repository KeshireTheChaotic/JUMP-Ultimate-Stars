
void FUN_02152de8(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0x543) == param_2) {
    return;
  }
  *(char *)(param_1 + 0x543) = (char)param_2;
  iVar1 = (**(code **)(**(int **)(param_3 + 4) + 0x154))();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_021504ac(iVar1);
  }
  iVar1 = FUN_021504d4(uVar2,0x31305053);
  if (iVar1 == 0) {
    return;
  }
  FUN_02023894(*(undefined4 *)(iVar1 + 4),param_2 + 0x800000,0);
  (**(code **)(**(int **)(*(int *)(iVar1 + 4) + 0x68) + 0x6c))();
  return;
}

