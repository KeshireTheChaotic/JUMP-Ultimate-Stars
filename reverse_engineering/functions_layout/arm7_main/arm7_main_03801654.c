
void FUN_03801654(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 1) {
    *(undefined1 *)(param_1 + 0x22) = 0;
    FUN_037ffe90();
  }
  iVar2 = *(int *)(param_3 + 0x3c);
  if (iVar2 == param_1) {
    *(undefined4 *)(param_3 + 0x3c) = *(undefined4 *)(param_1 + 0x50);
  }
  else {
    while (iVar1 = *(int *)(iVar2 + 0x50), iVar1 != 0) {
      if (iVar1 == param_1) {
        *(undefined4 *)(iVar2 + 0x50) = *(undefined4 *)(param_1 + 0x50);
        return;
      }
      iVar2 = iVar1;
    }
  }
  return;
}

