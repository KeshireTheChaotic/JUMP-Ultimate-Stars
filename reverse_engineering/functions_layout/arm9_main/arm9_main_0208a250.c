
void FUN_0208a250(undefined2 param_1,undefined2 param_2)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = DAT_0214be9c;
  if (0x400 < DAT_0214be80 + 0x20U) {
    DAT_0214be80 = 0;
  }
  iVar2 = DAT_0214be80;
  puVar1 = (undefined2 *)(DAT_0214be9c + DAT_0214be80);
  DAT_0214be80 = DAT_0214be80 + 0x20;
  *puVar1 = param_1;
  FUN_020596e8(0x208a1dd,iVar3 + iVar2,iVar3 + iVar2,2,param_2,0xe,3);
  return;
}

