
void FUN_02001f5c(void)

{
  int iVar1;
  
  iVar1 = FUN_02053da4(&DAT_020a0838);
  if (iVar1 == 0) {
    DAT_020a07f0 = *(int *)(DAT_020aab78 + 0x6c);
    DAT_020a0814 = 1;
  }
  else if (DAT_020a07f0 == *(int *)(DAT_020aab78 + 0x6c)) {
    DAT_020a0814 = DAT_020a0814 + 1;
  }
  else {
    FUN_02053ed0(&DAT_020a0838);
    DAT_020a07f0 = *(int *)(DAT_020aab78 + 0x6c);
    DAT_020a0814 = 1;
  }
  while (0 < DAT_020a06e8) {
    DAT_020a06e8 = DAT_020a06e8 + -1;
    (**(code **)(&DAT_020a06f0 + DAT_020a06e8 * 4))();
  }
  DAT_020a0814 = DAT_020a0814 + -1;
  if (DAT_020a0814 == 0) {
    FUN_02053e60(&DAT_020a0838);
  }
  if (DAT_020a06e0 != (code *)0x0) {
    (*DAT_020a06e0)();
    DAT_020a06e0 = (code *)0x0;
  }
  FUN_020022a8(0);
  thunk_FUN_0200d8a4();
  return;
}

