
void FUN_021613bc(void)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_8 [2];
  ushort local_6;
  
  FUN_02166c80(auStack_8);
  iVar1 = ((uint)local_6 - (uint)*(ushort *)(DAT_0216e7e8 + 0x12)) -
          (uint)((byte)(&DAT_0216ad34)[*(byte *)(DAT_0216e7e8 + 0x1b)] >> 1);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else {
    iVar2 = (uint)*(byte *)(DAT_0216e7e8 + 0x19) -
            (uint)(byte)(&DAT_0216ad34)[*(byte *)(DAT_0216e7e8 + 0x1b)];
    if (iVar2 <= iVar1) {
      iVar1 = iVar2;
    }
  }
  FUN_02161290(iVar1);
  *(undefined1 *)(DAT_0216e7e8 + 0x1d) = 3;
  return;
}

