
int FUN_0219bce8(void)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
  
  if (DAT_0214ccf8 == 0) {
    return 0;
  }
  uVar6 = FUN_0219b14c();
  iVar2 = (int)((ulonglong)uVar6 >> 0x20);
  bVar3 = (int)uVar6 == 0;
  iVar1 = 0;
  if (!bVar3) {
    iVar1 = DAT_0214ccf8 + 0x1000;
    iVar2 = *(int *)(DAT_0214ccf8 + 0x1bd8);
  }
  bVar4 = iVar2 == 0;
  if (!bVar3 && !bVar4) {
    iVar1 = *(int *)(iVar1 + 0xbdc);
  }
  bVar5 = iVar1 != 0;
  if ((!bVar3 && !bVar4) && bVar5) {
    iVar1 = 1;
  }
  if ((bVar3 || bVar4) || !bVar5) {
    iVar1 = 0;
  }
  return iVar1;
}

