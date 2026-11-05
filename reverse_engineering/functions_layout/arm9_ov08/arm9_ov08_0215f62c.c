
void FUN_0215f62c(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (uint)DAT_0216e7b0;
  if (uVar1 < 4) {
    iVar2 = uVar1 * 8;
    FUN_021547e4(*(undefined2 *)(&DAT_0216ac1c + iVar2),*(undefined2 *)(&DAT_0216ac20 + iVar2),
                 *(undefined2 *)(&DAT_0216ac1e + iVar2),*(undefined2 *)(&DAT_0216ac22 + iVar2));
    return;
  }
  iVar2 = uVar1 * 8;
  FUN_02154878(0,*(undefined2 *)(&DAT_0216ac1c + iVar2),*(undefined2 *)(&DAT_0216ac20 + iVar2),
               *(undefined2 *)(&DAT_0216ac1e + iVar2));
  return;
}

