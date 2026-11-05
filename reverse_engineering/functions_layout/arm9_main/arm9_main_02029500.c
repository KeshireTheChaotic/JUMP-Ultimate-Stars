
void FUN_02029500(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_30 [4];
  int local_2c;
  int local_28;
  
  for (uVar3 = 0; uVar3 < *(uint *)(param_1 + 0xd4); uVar3 = uVar3 + 1) {
    if (*(int *)(*(int *)(param_1 + 0xd0) + uVar3 * 0xc) == param_2) {
      iVar2 = uVar3 * 0xc + *(int *)(param_1 + 0xd0);
      local_2c = iVar2;
      local_28 = iVar2;
      FUN_0200f69c(auStack_30,1);
      iVar1 = FUN_0200d12c((*(int *)(param_1 + 0xd4) * 0xc + *(int *)(param_1 + 0xd0)) - iVar2,0xc);
      FUN_02002450(iVar2,iVar2 + 0xc,(iVar1 + -1) * 0xc);
      *(int *)(param_1 + 0xd4) = *(int *)(param_1 + 0xd4) + -1;
    }
  }
  return;
}

