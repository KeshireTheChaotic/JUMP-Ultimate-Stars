
void FUN_0217ef10(undefined4 param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_3) {
    do {
      uVar1 = FUN_0217ef34(param_1,*(undefined1 *)(param_2 + iVar2));
      *(undefined1 *)(param_2 + iVar2) = uVar1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_3);
  }
  return;
}

