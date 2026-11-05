
void FUN_021780a4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  DAT_021a75a4[0xb] = param_3;
  DAT_021a75a4[0xc] = param_4;
  DAT_021a75a4[0xd] = param_5;
  DAT_021a75a4[0xe] = param_6;
  DAT_021a75a4[0xf] = param_7;
  DAT_021a75a4[0x10] = param_8;
  *(undefined1 *)((int)DAT_021a75a4 + 0x1d) = 0;
  *(undefined1 *)((int)DAT_021a75a4 + 0x1e) = 0;
  *(undefined1 *)((int)DAT_021a75a4 + 0x1f) = 0;
  *(undefined1 *)(DAT_021a75a4 + 7) = 0;
  *DAT_021a75a4 = 1;
  if (DAT_021a75a4[6] == 0) {
    *(char *)((int)DAT_021a75a4 + 0x1f) = *(char *)((int)DAT_021a75a4 + 0x1f) + '\x01';
  }
  *(char *)((int)DAT_021a75a4 + 0x1f) = *(char *)((int)DAT_021a75a4 + 0x1f) + '\x01';
  return;
}

