
void FUN_02024770(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  while( true ) {
    if (*(ushort *)(param_1 + 0x74) <= uVar2) {
      return;
    }
    iVar1 = *(int *)(*(int *)(param_1 + 0x6c) + uVar2 * *(int *)(param_1 + 0x70));
    if (iVar1 == param_2) break;
    uVar2 = uVar2 + 1;
  }
  FUN_02038010(param_1 + 0x6c,uVar2,iVar1,*(int *)(param_1 + 0x6c),param_4);
  return;
}

