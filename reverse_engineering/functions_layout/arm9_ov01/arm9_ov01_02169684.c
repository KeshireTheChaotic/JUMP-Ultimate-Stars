
void FUN_02169684(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_020876f8();
  if (iVar1 != 0) {
    FUN_02086e6c(DAT_020afe9c);
    FUN_02086eb0(DAT_020afea0);
    FUN_02086ef4(DAT_020afeac);
    FUN_02086f38(DAT_020afebb);
    FUN_02086f7c(DAT_020afebc);
    FUN_02086fc0(DAT_020afebd);
    for (iVar1 = 0; iVar1 < DAT_020afe94; iVar1 = iVar1 + 1) {
      FUN_02087004(iVar1,(int)(char)(&DAT_020afebe)[iVar1]);
    }
    (*DAT_020a0e18)();
    iVar1 = DAT_020afe90 - DAT_020afe94;
    FUN_02087054(iVar1);
    for (iVar2 = 0; iVar2 < iVar1; iVar2 = iVar2 + 1) {
      FUN_02087098(iVar2 + DAT_020afe94,(int)(char)(&DAT_020afec4)[iVar2 + DAT_020afe94]);
    }
    FUN_0208865c();
  }
  FUN_020876ac();
  iVar1 = FUN_02088310();
  if (iVar1 == 0) {
    return;
  }
  FUN_020876ac();
  FUN_0208712c();
  return;
}

