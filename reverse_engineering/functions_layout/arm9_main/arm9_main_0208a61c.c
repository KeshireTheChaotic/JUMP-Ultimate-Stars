
uint FUN_0208a61c(int param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  do {
    if (3 < uVar2) {
      return 0;
    }
    bVar1 = false;
    for (uVar3 = 0; uVar3 < 8; uVar3 = uVar3 + 1) {
      if (uVar2 == (int)*(char *)(DAT_0214ccec + uVar3 + 0x30)) {
        bVar1 = true;
        break;
      }
    }
    if (!bVar1) {
      *(char *)(DAT_0214ccec + param_1 + 0x30) = (char)uVar2;
      *(char *)(DAT_0214ccec + param_1 + 0x3c) = (char)uVar2;
      return uVar2;
    }
    uVar2 = uVar2 + 1;
  } while( true );
}

