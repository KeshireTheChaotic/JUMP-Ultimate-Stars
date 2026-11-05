
ushort FUN_0218f448(void)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  do {
    bVar1 = false;
    DAT_021a84f0 = DAT_021a84f0 + 1;
    iVar2 = DAT_020aab7c;
    if ((DAT_021a84f0 < 0x400) || (4999 < DAT_021a84f0)) {
      DAT_021a84f0 = 0x400;
    }
    for (; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x68)) {
      piVar3 = *(int **)(iVar2 + 0xa4);
      if (((piVar3 != (int *)0x0) && (*piVar3 != 0)) &&
         (*(ushort *)((int)piVar3 + 10) == DAT_021a84f0)) {
        bVar1 = true;
        break;
      }
    }
    if (!bVar1) {
      return DAT_021a84f0;
    }
  } while( true );
}

