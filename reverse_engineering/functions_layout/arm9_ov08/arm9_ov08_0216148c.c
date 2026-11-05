
void FUN_0216148c(void)

{
  int iVar1;
  int iVar2;
  ushort local_10;
  ushort local_e;
  
  iVar1 = FUN_02166dbc(&DAT_0216af00);
  if (iVar1 != 0) {
    FUN_02166c80(&local_10);
    if ((int)(*(ushort *)(DAT_0216e7e8 + 0x10) - 0x1e) <= (int)(uint)local_10) {
      iVar1 = (uint)*(byte *)(DAT_0216e7e8 + 0x18) +
              ((uint)local_e - (uint)*(ushort *)(DAT_0216e7e8 + 0x16));
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
      FUN_02161424(iVar1);
      FUN_02161290(iVar1);
      *(undefined1 *)(DAT_0216e7e8 + 0x1d) = 2;
      return;
    }
  }
  FUN_02162338();
  *(undefined1 *)(DAT_0216e7e8 + 0x1c) = 0;
  *(undefined1 *)(DAT_0216e7e8 + 0x1d) = 3;
  return;
}

