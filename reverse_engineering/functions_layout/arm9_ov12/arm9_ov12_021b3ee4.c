
void FUN_021b3ee4(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_28 [4];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  uVar1 = 0;
  while( true ) {
    if (*(uint *)(param_1 + 0x7c) <= uVar1) {
      local_20 = param_2;
      local_1c = param_3;
      FUN_021b3cd0(param_1 + 0x78,&local_20);
      return;
    }
    iVar3 = *(int *)(param_1 + 0x78) + uVar1 * 8;
    if (param_2 == *(int *)(*(int *)(param_1 + 0x78) + uVar1 * 8)) break;
    uVar1 = uVar1 + 1;
  }
  if (param_3 == 0) {
    local_24 = iVar3;
    local_18 = iVar3;
    FUN_0200f69c(auStack_28,1);
    iVar2 = (*(int *)(param_1 + 0x78) + *(int *)(param_1 + 0x7c) * 8) - iVar3;
    FUN_02002450(iVar3,iVar3 + 8,(((int)(iVar2 + ((uint)(iVar2 >> 2) >> 0x1d)) >> 3) + -1) * 8);
    *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + -1;
    return;
  }
  *(int *)(iVar3 + 4) = param_3;
  return;
}

