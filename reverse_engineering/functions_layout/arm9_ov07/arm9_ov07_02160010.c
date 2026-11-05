
uint FUN_02160010(void)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(ushort *)(DAT_0216ad8c + 0x5206) != 0) {
    uVar1 = (uint)*(ushort *)(DAT_0216ad8c + 0x5206) |
            1 << (*(ushort *)(DAT_0216ad8c + 0x5204) & 0xff) & 0xffffU;
  }
  return uVar1;
}

