
undefined4 FUN_0218b644(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  while( true ) {
    iVar1 = FUN_0200131c(*(undefined4 *)(param_1 + 0x5c));
    do {
      iVar1 = iVar1 + -1;
      if (iVar1 < 0) {
        return 1;
      }
      piVar2 = (int *)FUN_020012d8(*(undefined4 *)(param_1 + 0x5c),iVar1);
    } while ((short)piVar2[3] != *(short *)(param_1 + 0x66));
    iVar3 = FUN_0218b810(param_1,piVar2[2],*(int *)(param_1 + 0x44) + *piVar2,piVar2[1]);
    if (iVar3 == 0) break;
    FUN_0218b698(param_1,piVar2,iVar1);
  }
  return 0;
}

