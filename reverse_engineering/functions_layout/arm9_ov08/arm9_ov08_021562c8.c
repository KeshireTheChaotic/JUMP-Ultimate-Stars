
void FUN_021562c8(int param_1,int param_2)

{
  uint *puVar1;
  
  if (-1 < param_1) {
    if (param_1 < 10) {
      puVar1 = *(uint **)(DAT_0216e6e0 + param_1 * 4 + 0x10);
      *puVar1 = *puVar1 & 0xfffff3ff;
      *(ushort *)(puVar1 + 1) =
           (ushort)puVar1[1] & 0xfff | (ushort)(byte)(&DAT_0216a78c)[param_2] << 0xc;
      return;
    }
    if (param_1 + -10 < 2) {
      puVar1 = *(uint **)(DAT_0216e6e0 + (param_1 + -10) * 4 + 0x38);
      *puVar1 = *puVar1 & 0xfffff3ff;
      *(ushort *)(puVar1 + 1) =
           (ushort)puVar1[1] & 0xfff | (ushort)(byte)(&DAT_0216a78c)[param_2] << 0xc;
      return;
    }
    FUN_02165c80(*(undefined4 *)(DAT_0216e6e0 + (param_1 + -0xc) * 4 + 0x40),0xffffffff,0,
                 (&DAT_0216a780)[param_2]);
  }
  return;
}

