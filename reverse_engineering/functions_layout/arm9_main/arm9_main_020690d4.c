
int FUN_020690d4(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_02067394();
  iVar2 = FUN_020673ec(0x10);
  iVar3 = func_0x02198ccc();
  if (iVar3 == 9) {
    switch(iVar1) {
    case 10:
      iVar1 = FUN_02069094(iVar2);
      break;
    case 0xb:
      iVar1 = FUN_02068f50();
      break;
    case 0xc:
      iVar1 = FUN_02069014(iVar2);
      break;
    case 0xd:
      iVar1 = FUN_02068ff0();
      break;
    case 0xe:
      iVar1 = FUN_02068f98(iVar2);
      break;
    case 0xf:
      iVar1 = FUN_02068f80(iVar2);
    }
  }
  else if (iVar1 == 0xb) {
    iVar1 = FUN_02068f50();
  }
  else {
    if (iVar1 == 0xe) {
      func_0x02175200();
      func_0x02175254();
    }
    else if (iVar1 == 0xf) {
      iVar1 = FUN_02068f80(iVar2);
      return iVar1;
    }
    *(undefined1 *)(iVar2 + (uint)*(byte *)(iVar2 + 0xd13) * 4 + 0x444) = 2;
    iVar1 = 0xb;
  }
  return iVar1;
}

