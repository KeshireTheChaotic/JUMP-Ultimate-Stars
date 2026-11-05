
undefined4 FUN_0201e400(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  if (param_3 == 0) {
    param_3 = *(int *)(param_1 + 0x1c);
  }
  iVar2 = 0;
  while( true ) {
    if ((int)(uint)*(ushort *)(param_1 + 0x52) <= iVar2) {
      return 0;
    }
    iVar1 = *(int *)(*(int *)(param_1 + 0x4c) + iVar2 * 0x10 + 4);
    bVar3 = iVar1 == param_2;
    if (bVar3) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x4c) + iVar2 * 0x10);
    }
    if (bVar3 && iVar1 == param_3) break;
    iVar2 = iVar2 + 1;
  }
  return 1;
}

