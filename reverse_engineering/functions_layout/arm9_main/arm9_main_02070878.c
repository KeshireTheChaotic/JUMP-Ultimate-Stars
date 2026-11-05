
void FUN_02070878(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  iVar2 = iRam020708dc;
  *(undefined4 *)(iRam020708dc + 0x60) = 0;
  uVar3 = uRam020708e0;
  *(undefined1 *)(iVar2 + 0x7a) = 0;
  *(undefined4 *)(iVar2 + 0x6c) = uVar3;
  *(undefined4 *)(iVar2 + 0x5c) = 7;
  FUN_0208c254();
  iVar2 = iRam020708dc;
  for (uVar4 = 0; uVar4 < *(uint *)(iVar2 + 0x50); uVar4 = uVar4 + 1) {
    cVar1 = *(char *)(iVar2 + 0x70);
    uVar3 = FUN_0208c2ec(uVar4);
    FUN_020708e4(uVar4,(int)cVar1,uVar3);
  }
  return;
}

