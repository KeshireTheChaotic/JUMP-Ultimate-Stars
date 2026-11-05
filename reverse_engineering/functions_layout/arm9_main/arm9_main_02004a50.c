
undefined4 FUN_02004a50(int param_1)

{
  int iVar1;
  code *pcVar2;
  
  if ((param_1 < 1) || (7 < param_1)) {
    return 0xffffffff;
  }
  iVar1 = FUN_02053da4(&DAT_020a08e0);
  if (iVar1 == 0) {
    DAT_020a080c = *(int *)(DAT_020aab78 + 0x6c);
    DAT_020a0830 = 1;
  }
  else if (DAT_020a080c == *(int *)(DAT_020aab78 + 0x6c)) {
    DAT_020a0830 = DAT_020a0830 + 1;
  }
  else {
    FUN_02053ed0(&DAT_020a08e0);
    DAT_020a080c = *(int *)(DAT_020aab78 + 0x6c);
    DAT_020a0830 = 1;
  }
  iVar1 = (param_1 + -1) * 4;
  pcVar2 = *(code **)(&DAT_020a0c14 + iVar1);
  if (pcVar2 != (code *)0x1) {
    *(undefined4 *)(&DAT_020a0c14 + iVar1) = 0;
  }
  DAT_020a0830 = DAT_020a0830 + -1;
  if (DAT_020a0830 == 0) {
    FUN_02053e60(&DAT_020a08e0);
  }
  if ((pcVar2 == (code *)0x1) || ((pcVar2 == (code *)0x0 && (param_1 == 1)))) {
    return 0;
  }
  if (pcVar2 == (code *)0x0) {
    FUN_02001f30(0);
  }
  (*pcVar2)(param_1);
  return 0;
}

