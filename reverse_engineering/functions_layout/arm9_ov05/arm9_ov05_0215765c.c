
undefined4 FUN_0215765c(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_02155824();
  if (*(int *)(param_1 + 0x3b0) != 0 && iVar2 != 0) {
    uVar1 = *(undefined1 *)(iVar2 + 5);
    iVar2 = 0;
    do {
      uVar3 = FUN_0215f400(*(undefined4 *)(param_1 + 0x3b0),uVar1,iVar2);
      FUN_02155848(*(undefined4 *)(param_2 + iVar2 * 4 + 4),uVar3);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 9);
  }
  return 1;
}

