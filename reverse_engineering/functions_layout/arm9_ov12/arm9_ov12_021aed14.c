
uint FUN_021aed14(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 == -1) {
    return 0xffffffff;
  }
  iVar1 = 0;
  uVar2 = 0;
  do {
    if (*(uint *)(param_1 + 0x158) <= uVar2) {
      return 0xffffffff;
    }
    if ((int)((uint)*(byte *)(*(int *)(*(int *)(*(int *)(param_1 + 0x154) + uVar2 * 4) + 100) + 0x10
                             ) << 0x18) < 0) {
      if (param_2 == iVar1) {
        return uVar2;
      }
      iVar1 = iVar1 + 1;
    }
    uVar2 = uVar2 + 1;
  } while( true );
}

