
void FUN_021621e8(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  *(undefined1 *)(iVar4 + 0xc) = 1;
  iVar1 = FUN_0214d930();
  if (iVar1 != 0) {
    iVar1 = FUN_0214d958();
    if (iVar1 == 0) {
      func_0x021b65bc();
      *(undefined4 *)(iVar4 + 0x9c) = 0xffffffff;
      FUN_0214d724(7);
      FUN_02028384(*(undefined4 *)(*(int *)(iVar4 + 4) + 4),FUN_021622d4);
      return;
    }
    *(undefined1 *)(iVar4 + 10) = 1;
    func_0x021b65bc();
    uVar2 = FUN_0214d508(5);
    uVar3 = 0;
    *(undefined2 *)(iVar4 + 0xa2) = 0;
    do {
      if ((uVar2 & 1 << (uVar3 & 0xff)) != 0) {
        *(short *)(iVar4 + 0xa2) = *(short *)(iVar4 + 0xa2) + 1;
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < 0x20);
    *(undefined2 *)(iVar4 + 0xa4) = 0;
    *(undefined4 *)(iVar4 + 0xa8) = 0;
    FUN_02028384(*(undefined4 *)(*(int *)(iVar4 + 4) + 4),FUN_0216231c);
    return;
  }
  iVar1 = FUN_0214d948();
  if (iVar1 == 0) {
    func_0x021b65bc();
    *(undefined4 *)(iVar4 + 0x9c) = 0xffffffff;
    FUN_0214d724(7);
    FUN_02028384(*(undefined4 *)(*(int *)(iVar4 + 4) + 4),FUN_021622d4);
    return;
  }
  return;
}

