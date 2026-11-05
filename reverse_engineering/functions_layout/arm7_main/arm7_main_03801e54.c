
void FUN_03801e54(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    if (((&DAT_03808fe8)[iVar3 * 0x24] & 1) != 0) {
      for (iVar2 = 0; iVar2 < 0x10; iVar2 = iVar2 + 1) {
        iVar1 = FUN_03801770(&DAT_03808fe8 + iVar3 * 0x24,iVar2);
        if (((iVar1 != 0) && (param_1 <= *(uint *)(iVar1 + 0x28))) &&
           (*(uint *)(iVar1 + 0x28) <= param_2)) {
          FUN_038016bc(&DAT_03808fe8 + iVar3 * 0x24);
          break;
        }
      }
    }
    iVar3 = iVar3 + 1;
    if (0xf < iVar3) {
      return;
    }
  } while( true );
}

