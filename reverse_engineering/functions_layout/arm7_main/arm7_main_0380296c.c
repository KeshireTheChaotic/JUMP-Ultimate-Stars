
void FUN_0380296c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined1 param_6)

{
  int iVar1;
  
  iVar1 = param_1 * 0x40;
  if ((&DAT_03809a28)[param_1 * 0x40] != '\0') {
    FUN_037fd998(iVar1 + 0x3809a3c);
    (&DAT_03809a28)[iVar1] = 0;
  }
  *(undefined4 *)(&DAT_03809a2c + iVar1) = param_2;
  *(undefined4 *)(&DAT_03809a30 + iVar1) = param_3;
  *(undefined4 *)(&DAT_03809a34 + iVar1) = param_4;
  *(undefined4 *)(&DAT_03809a38 + iVar1) = param_5;
  (&DAT_03809a29)[iVar1] = param_6;
  return;
}

