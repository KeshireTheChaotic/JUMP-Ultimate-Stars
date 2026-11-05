
void FUN_02155120(int param_1,int param_2)

{
  uint *puVar1;
  
  if (-1 < param_1) {
    if (param_1 < 0x2f) {
      puVar1 = *(uint **)(DAT_0216e6dc + param_1 * 4 + 0x30);
      *puVar1 = *puVar1 & 0xfffff3ff;
      *(ushort *)(puVar1 + 1) =
           (ushort)puVar1[1] & 0xfff | (ushort)(byte)(&DAT_0216a4b4)[param_2] << 0xc;
      return;
    }
    if (param_1 + -0x2f < 4) {
      puVar1 = *(uint **)(DAT_0216e6dc + (param_1 + -0x2f) * 4 + 0xec);
      *puVar1 = *puVar1 & 0xfffff3ff;
      *(ushort *)(puVar1 + 1) =
           (ushort)puVar1[1] & 0xfff | (ushort)(byte)(&DAT_0216a4b4)[param_2] << 0xc;
      return;
    }
    FUN_02165c80(*(undefined4 *)(DAT_0216e6dc + (param_1 + -0x33) * 4 + 0xfc),0xffffffff,0,
                 (&DAT_0216a4b8)[param_2]);
  }
  return;
}

