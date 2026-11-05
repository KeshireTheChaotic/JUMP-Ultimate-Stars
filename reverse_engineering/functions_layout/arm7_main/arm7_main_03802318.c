
void FUN_03802318(int param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  
  uVar2 = 0;
  uVar3 = 0;
  do {
    pbVar4 = &DAT_03808fe8 + uVar3 * 0x24;
    bVar1 = (&DAT_03808fe8)[uVar3 * 0x24];
    if ((bVar1 & 1) != 0) {
      if ((bVar1 & 3) >> 1 != 0) {
        if ((param_1 != 0) && ((bVar1 & 7) >> 2 == 0)) {
          FUN_0380179c(pbVar4);
        }
        FUN_038014b0(pbVar4);
      }
      if ((*pbVar4 & 1) != 0) {
        uVar2 = uVar2 | 1 << (uVar3 & 0xff);
      }
    }
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 0x10);
  if (DAT_03808aa4 != 0) {
    *(uint *)(DAT_03808aa4 + 4) = uVar2;
  }
  return;
}

