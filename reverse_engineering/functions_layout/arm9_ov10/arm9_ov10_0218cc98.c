
int FUN_0218cc98(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  iVar1 = FUN_02001c20();
  if (iVar1 == 0) {
    return 0;
  }
  iVar5 = 0;
  while( true ) {
    piVar2 = *(int **)(*(int *)(iVar1 + 0xc) + iVar5);
    if (piVar2 == (int *)0x0) {
      return iVar6;
    }
    iVar4 = *piVar2;
    if ((iVar4 != 0x100007f) && (iVar3 = FUN_02001bb8(), iVar6 = iVar4, iVar3 != 0)) break;
    iVar5 = iVar5 + 4;
  }
  return iVar4;
}

