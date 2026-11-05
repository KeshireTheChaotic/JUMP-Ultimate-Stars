
void FUN_02087ff0(void)

{
  uint uVar1;
  undefined4 in_r3;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (((DAT_0214be20 != 0) && (*(char *)(DAT_0214be20 + 10) != '\0')) &&
     (*(char *)(DAT_0214be20 + 0xb) == '\x01')) {
    *(char *)(DAT_0214be20 + 0xc) = *(char *)(DAT_0214be20 + 0xc) + '\x01';
    if ((*(byte *)(DAT_0214be20 + 0xc) & 7) == 0) {
      uVar1 = (int)(uint)*(byte *)(DAT_0214be20 + 0xc) >> 3 & 7;
      iVar2 = 0;
      do {
        uVar3 = iVar2 + uVar1;
        iVar4 = iVar2 * 2;
        iVar2 = iVar2 + 1;
        *(undefined2 *)(DAT_0214be20 + iVar4 + 0x30) =
             *(undefined2 *)(DAT_0214be20 + (uVar3 & 7) * 2 + 0x10);
      } while (iVar2 < 4);
      DC_FlushRange(DAT_0214be20 + 0x30,8,uVar1,iVar2,in_r3);
      FUN_02066ed4(DAT_0214be20 + 0x30,((uint)*(byte *)(DAT_0214be20 + 0xd) * 0x10 + 3) * 2,8);
    }
  }
  return;
}

