
void FUN_02070f44(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_02072a60(&DAT_020b02b8);
  iVar1 = iVar1 * 0x28;
  uVar2 = *(uint *)(&DAT_020b76e4 + iVar1);
  if (uVar2 < 21599999) {
    *(uint *)(&DAT_020b76e4 + iVar1) = uVar2 + 1;
    if (0x14996fe < uVar2 + 1) {
      *(undefined4 *)(&DAT_020b76e4 + iVar1) = 21599999;
      return;
    }
  }
  else if (21599999 < uVar2) {
    *(undefined4 *)(&DAT_020b76e4 + iVar1) = 21599999;
  }
  return;
}

