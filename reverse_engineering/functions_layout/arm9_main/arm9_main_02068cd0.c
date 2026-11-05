
void FUN_02068cd0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_020673ec(0x10);
  if (0xd < param_1) {
    param_1 = 0xd;
  }
  *(ushort *)(iVar1 + 0xd16) = *(ushort *)(iVar1 + 0xd16) | (ushort)(1 << (param_1 - 1 & 0xff));
  return;
}

