
undefined4 FUN_02068f98(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_020673ec(1);
  iVar2 = func_0x021751d0();
  if (iVar2 == 0) {
    return 0xe;
  }
  uVar3 = FUN_02067348(*(undefined1 *)(param_1 + 0xd0d));
  if (*(byte *)(iVar1 + 0x15) == uVar3) {
    uVar4 = func_0x021751bc();
    *(undefined4 *)(iVar1 + 0x10) = uVar4;
  }
  func_0x02175254();
  if (iVar2 == 0xb) {
    return 0xf;
  }
  *(undefined1 *)(param_1 + (uint)*(byte *)(param_1 + 0xd13) * 4 + 0x444) = 1;
  return 0xb;
}

