
uint FUN_0219b688(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_0217668c();
  uVar2 = 0;
  while( true ) {
    if (3 < (int)uVar2) {
      return 0;
    }
    if ((uVar1 & 1 << (uVar2 & 0xff)) != 0) break;
    uVar2 = uVar2 + 1;
  }
  return uVar2;
}

