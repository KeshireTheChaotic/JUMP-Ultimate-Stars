
int FUN_0218eca8(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(DAT_020aab78 + 0xa4);
  if (iVar3 == 0) {
    return 0;
  }
  if (*(int *)(iVar3 + 0x60) == 0) {
    iVar3 = FUN_0218ed18();
    return iVar3;
  }
  uVar1 = FUN_0218ed18(*(undefined4 *)(iVar3 + 0x5c),*(int *)(iVar3 + 0x60),param_1,param_2);
  uVar2 = *(uint *)(iVar3 + 0x60);
  if (uVar1 < uVar2) {
    FUN_02002450(*(int *)(iVar3 + 0x5c),*(int *)(iVar3 + 0x5c) + uVar1,uVar2 - uVar1);
    *(uint *)(iVar3 + 0x60) = *(int *)(iVar3 + 0x60) - uVar1;
    return 0;
  }
  *(undefined4 *)(iVar3 + 0x60) = 0;
  return uVar1 - uVar2;
}

