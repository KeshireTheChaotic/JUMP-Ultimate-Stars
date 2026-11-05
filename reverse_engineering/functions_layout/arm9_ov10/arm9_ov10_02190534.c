
void FUN_02190534(int param_1)

{
  *(undefined2 *)(param_1 + 6) = 0x200;
  FUN_02051890(param_1 + 8,param_1 + 0x12,10);
  FUN_02051890(&DAT_021a8548,param_1 + 8,6);
  *(ushort *)(param_1 + 0xe) =
       (ushort)(byte)(DAT_021a8538 >> 0x18) | (ushort)((DAT_021a8538 >> 0x10) << 8);
  *(ushort *)(param_1 + 0x10) =
       (ushort)((DAT_021a8538 & 0xffff) >> 8) | (ushort)((DAT_021a8538 & 0xffff) << 8);
  FUN_02051890(param_1 + 0x12,param_1 + -0xe,6);
  FUN_02051890(&DAT_021a8548,param_1 + -8,6);
  FUN_0219104c(param_1 + -0xe,0x2a,0,0);
  return;
}

