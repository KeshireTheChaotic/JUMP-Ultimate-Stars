
byte FUN_0217967c(void)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  
  bVar3 = 0;
  do {
    iVar2 = 0;
    FUN_02178448();
    do {
      iVar1 = FUN_02178448();
      if (bVar3 == *(byte *)(iVar1 + iVar2 + 0x2c8)) break;
      iVar2 = iVar2 + 1;
      iVar1 = FUN_02178448();
    } while (iVar2 <= (int)(uint)*(byte *)(iVar1 + 0x14));
    iVar1 = FUN_02178448();
    if ((int)(uint)*(byte *)(iVar1 + 0x14) < iVar2) {
      return bVar3;
    }
    bVar3 = bVar3 + 1;
    if (0x1f < bVar3) {
      return bVar3;
    }
  } while( true );
}

