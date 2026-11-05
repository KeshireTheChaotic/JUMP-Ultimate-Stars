
void FUN_0380179c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  while (0xef < *(ushort *)(param_1 + 0x1c)) {
    *(short *)(param_1 + 0x1c) = *(short *)(param_1 + 0x1c) + -0xf0;
    iVar3 = iVar3 + 1;
  }
  iVar2 = 0;
  do {
    if (iVar3 <= iVar2) {
LAB_03801808:
      if (DAT_03808aa4 != 0) {
        iVar3 = (uint)*(byte *)(param_1 + 1) * 0x24;
        *(int *)(DAT_03808aa4 + 0x40 + iVar3) = *(int *)(DAT_03808aa4 + 0x40 + iVar3) + iVar2;
      }
      *(short *)(param_1 + 0x1c) =
           *(short *)(param_1 + 0x1c) +
           (short)((uint)*(ushort *)(param_1 + 0x18) * (uint)*(ushort *)(param_1 + 0x1a) >> 8);
      return;
    }
    iVar1 = FUN_03800858(param_1,1);
    if (iVar1 != 0) {
      FUN_038016bc(param_1);
      goto LAB_03801808;
    }
    iVar2 = iVar2 + 1;
  } while( true );
}

