
void FUN_0215a600(void)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_0216e76c < 4) {
    uVar1 = 2;
  }
  else {
    uVar1 = 3;
  }
  iVar2 = (uint)DAT_0216e76c * 8;
  FUN_02154878(uVar1,*(undefined2 *)(&DAT_0216a9c8 + iVar2),*(undefined2 *)(&DAT_0216a9cc + iVar2),
               *(undefined2 *)(&DAT_0216a9ca + iVar2));
  return;
}

