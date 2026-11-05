
int FUN_021ad640(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x1ac))();
  if (iVar1 == -1) {
    return 0;
  }
  iVar1 = iVar1 * 0x24 + *(int *)(*(int *)(param_1[0x57] + 8) + 0x20);
  if ((*(uint *)(iVar1 + 8) & 1) == 0) {
    iVar1 = iVar1 + 9;
  }
  else {
    iVar1 = *(int *)(iVar1 + 0x10);
  }
  return iVar1;
}

