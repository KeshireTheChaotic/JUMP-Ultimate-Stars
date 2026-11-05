
void FUN_020614d8(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != (int *)0x0) {
    iVar3 = *param_1;
    iVar2 = *param_1;
    while (iVar1 = iVar3, iVar1 != 0) {
      if (iVar1 == param_2) {
        if (iVar1 == iVar2) {
          *param_1 = *(int *)(iVar1 + 8);
          return;
        }
        *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar1 + 8);
        return;
      }
      iVar2 = iVar1;
      iVar3 = *(int *)(iVar1 + 8);
    }
  }
  return;
}

