
undefined4 FUN_02067288(void)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar3 = DAT_020afbe4;
  iVar5 = DAT_020afbe4 + 0x474;
  bVar1 = *(byte *)(DAT_020afbe4 + 0xd13);
  if (5 < *(byte *)(DAT_020afbe4 + 0xd0d)) {
    return 1;
  }
  uVar6 = 0;
  bVar2 = *(byte *)(DAT_020afbe4 + 0xd12);
  if (bVar2 != 0) {
    do {
      if (((uVar6 != bVar1) && (*(byte *)(iVar3 + uVar6 * 4 + 0x445) < 6)) &&
         (iVar4 = FUN_02004cec(iVar5 + (uint)bVar1 * 0xc0,iVar3 + 0x474 + uVar6 * 0xc0,
                               *(undefined2 *)(iVar3 + uVar6 * 0xc0 + 0x47a)), iVar4 == 0)) {
        return 2;
      }
      uVar6 = uVar6 + 1 & 0xff;
    } while (uVar6 < bVar2);
  }
  return 1;
}

