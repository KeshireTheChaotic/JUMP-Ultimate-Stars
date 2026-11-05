
void FUN_021b6320(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 auStack_20 [4];
  int local_1c;
  int local_18;
  
  uVar2 = 0;
  while( true ) {
    if (*(uint *)(param_1 + 300) <= uVar2) {
      return;
    }
    if (param_2 == *(int *)(*(int *)(param_1 + 0x128) + uVar2 * 8)) break;
    uVar2 = uVar2 + 1;
  }
  iVar3 = *(int *)(param_1 + 0x128) + uVar2 * 8;
  local_1c = iVar3;
  local_18 = iVar3;
  FUN_0200f69c(auStack_20,1);
  iVar1 = (*(int *)(param_1 + 0x128) + *(int *)(param_1 + 300) * 8) - iVar3;
  FUN_02002450(iVar3,iVar3 + 8,(((int)(iVar1 + ((uint)(iVar1 >> 2) >> 0x1d)) >> 3) + -1) * 8);
  *(int *)(param_1 + 300) = *(int *)(param_1 + 300) + -1;
  return;
}

