
void FUN_021cace4(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  while( true ) {
    if (*(uint *)(param_1 + 0xc) <= uVar1) {
      return;
    }
    iVar2 = uVar1 * 6;
    uVar3 = (uint)*(ushort *)(*(int *)(param_1 + 8) + iVar2);
    if (0xff < uVar3) break;
    uVar1 = uVar1 + 1;
    *(int *)(param_1 + 0x10) =
         *(int *)(param_1 + 0x10) + (*(ushort *)(*(int *)(param_1 + 8) + iVar2 + 2) - uVar3) + 1;
  }
  return;
}

