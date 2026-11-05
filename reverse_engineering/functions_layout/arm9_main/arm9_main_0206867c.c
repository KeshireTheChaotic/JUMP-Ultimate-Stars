
byte FUN_0206867c(void)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  
  iVar1 = FUN_020673ec(0x10);
  bVar3 = 9;
  uVar2 = func_0x02198ccc();
  switch(uVar2) {
  case 3:
    bVar3 = *(byte *)(iVar1 + 0xd0e);
    if (*(byte *)(iVar1 + 0xd0c) >> 6 == 1) {
      *(undefined1 *)(iVar1 + (uint)*(byte *)(iVar1 + 0xd13) * 4 + 0x444) = 0;
      bVar3 = 7;
    }
    else if ((2 < bVar3) && (bVar3 < 6)) {
      FUN_02068bb8(bVar3);
    }
    break;
  case 6:
    func_0x021990f4();
    break;
  case 9:
    func_0x02198e80();
    break;
  case 0xb:
    FUN_02067378(0);
    bVar3 = 0x11;
    break;
  case 0xc:
    func_0x02198cf4();
    FUN_02067378(4);
    bVar3 = 0x11;
  }
  return bVar3;
}

