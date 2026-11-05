
void FUN_02185028(int param_1,int param_2)

{
  undefined4 uVar1;
  int extraout_r1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_2) {
    do {
      uVar1 = FUN_02003dfc();
      FUN_0200d338(uVar1,0x3e);
      *(char *)(param_1 + iVar2) = s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_021a58b8[extraout_r1];
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_2);
  }
  *(undefined1 *)(param_1 + iVar2) = 0;
  return;
}

