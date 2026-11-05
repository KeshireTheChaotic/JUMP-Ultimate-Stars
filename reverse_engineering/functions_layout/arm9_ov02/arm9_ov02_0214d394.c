
void FUN_0214d394(int param_1)

{
  if ((uint)(byte)(&DAT_0215afe0)[*(byte *)(param_1 + 0x51)] != (int)*(char *)(param_1 + 0x55)) {
    if ((int)*(char *)(param_1 + 0x55) != 0xffffffff) {
      FUN_020735e4();
      *(undefined1 *)(param_1 + 0x55) = 0xff;
    }
    FUN_020734e0((&DAT_0215afe0)[*(byte *)(param_1 + 0x51)]);
    FUN_02073744(0x7b);
    *(undefined *)(param_1 + 0x55) = (&DAT_0215afe0)[*(byte *)(param_1 + 0x51)];
  }
  FUN_0207361c((&DAT_0215afe0)[*(byte *)(param_1 + 0x51)],0);
  return;
}

