
bool FUN_021caa84(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  
  uVar2 = *param_1;
  if (uVar2 == 0) {
    return true;
  }
  uVar1 = *(uint *)(param_2 + 0x40);
  bVar4 = uVar2 <= uVar1;
  bVar3 = uVar1 == uVar2;
  if (!bVar4 || bVar3) {
    uVar1 = uVar1 + *(int *)(param_2 + 0x50) * 8;
    bVar4 = uVar1 <= uVar2;
    bVar3 = uVar2 == uVar1;
  }
  return !bVar4 || bVar3;
}

