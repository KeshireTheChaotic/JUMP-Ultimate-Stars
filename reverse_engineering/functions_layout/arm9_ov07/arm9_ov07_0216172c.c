
uint FUN_0216172c(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x20) + 0xc) + 0x24);
  if (*(int *)(iVar3 + 0x424) <= *(int *)(iVar3 + 0x41c)) {
    return 0xffff;
  }
  uVar2 = *(uint *)(iVar3 + 0x414);
  while( true ) {
    uVar2 = uVar2 + 1;
    if ((*(int *)(iVar3 + 0x424) <= (int)uVar2) || (*(int *)(iVar3 + 0x41c) + 0x20 <= (int)uVar2)) {
      uVar2 = *(uint *)(iVar3 + 0x41c);
    }
    iVar1 = FUN_021617b4(param_1,uVar2);
    if (iVar1 == 0) break;
    if (uVar2 == *(uint *)(iVar3 + 0x414)) {
      return 0xffff;
    }
  }
  *(uint *)(iVar3 + 0x414) = uVar2;
  return uVar2 & 0xffff;
}

