
void FUN_0201b544(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    iVar1 = iVar1 + -4;
  }
  while (iVar1 != 0) {
    *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + -1;
    iVar1 = *(int *)(iVar1 + 4);
    if (iVar1 != 0) {
      iVar1 = iVar1 + -4;
    }
  }
  return;
}

