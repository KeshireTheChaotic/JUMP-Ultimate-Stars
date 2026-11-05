
void FUN_0215b174(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0;
  *(ushort *)(DAT_0216e774 + 0x40) = (*(byte *)(DAT_0216e774 + 0x51) - 4) * 0x1c;
  if (*(byte *)(DAT_0216e774 + 0x51) < 5) {
    iVar2 = 0;
    *(undefined1 *)(DAT_0216e774 + 0x53) = 0;
  }
  else if (*(byte *)(DAT_0216e774 + 0x51) < 9) {
    iVar2 = 1;
    *(undefined1 *)(DAT_0216e774 + 0x53) = 0x1f;
  }
  else {
    iVar2 = 2;
    *(undefined1 *)(DAT_0216e774 + 0x53) = 0x37;
  }
  if (iVar2 != 0) {
    uVar1 = FUN_020507a8((uint)*(byte *)(DAT_0216e774 + 0x53) * (uint)DAT_0216e770,
                         *(undefined2 *)(DAT_0216e774 + 0x40));
  }
  FUN_0216167c(iVar2,0x55,0xec,0x3f,uVar1);
  return;
}

