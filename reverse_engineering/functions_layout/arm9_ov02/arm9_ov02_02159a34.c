
undefined4 FUN_02159a34(int param_1)

{
  if (*(int *)(&DAT_0215c62c + (uint)*(byte *)(param_1 + 4) * 0x10) == 1) {
    FUN_020736b4(*(undefined4 *)(&DAT_0215c624 + (uint)*(byte *)(param_1 + 4) * 0x10));
    FUN_020736e4(*(undefined4 *)(&DAT_0215c628 + (uint)*(byte *)(param_1 + 4) * 0x10),0);
  }
  if (*(int *)(&DAT_0215c62c + (uint)*(byte *)(param_1 + 4) * 0x10) == 0) {
    FUN_02073744(*(undefined4 *)(&DAT_0215c624 + (uint)*(byte *)(param_1 + 4) * 0x10));
    FUN_0207342c(*(undefined4 *)(&DAT_0215c630 + (uint)*(byte *)(param_1 + 4) * 0x10),
                 *(undefined4 *)(&DAT_0215c628 + (uint)*(byte *)(param_1 + 4) * 0x10));
  }
  return 0;
}

