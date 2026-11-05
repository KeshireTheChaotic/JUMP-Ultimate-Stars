
int FUN_02088898(void)

{
  char cVar1;
  byte *pbVar2;
  uint uVar3;
  
  pbVar2 = pbRam020888dc;
  uVar3 = (uint)*pbRam020888dc;
  if (pbRam020888dc[1] == uVar3) {
    return -1;
  }
  cVar1 = *(char *)(iRam020888e0 + uVar3);
  *(undefined1 *)(iRam020888e0 + uVar3) = 0xff;
  *pbVar2 = -(char)((int)((uVar3 + 1) * -0x80000000) >> 0x1f);
  return (int)cVar1;
}

