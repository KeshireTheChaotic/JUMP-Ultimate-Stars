
void FUN_02088840(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = iRam02088894;
  iVar3 = 0;
  while( true ) {
    if (1 < iVar3) {
      bVar1 = *(byte *)(iRam02088894 + 1);
      *(char *)(iRam02088890 + (uint)bVar1) = (char)param_1;
      *(char *)(iVar2 + 1) = -(char)((int)((bVar1 + 1) * -0x80000000) >> 0x1f);
      return;
    }
    if (*(char *)(iRam02088890 + iVar3) == param_1) break;
    iVar3 = iVar3 + 1;
  }
  return;
}

