
uint FUN_0201afa8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = FUN_0200d338(0x7dc,*(undefined4 *)(param_1 + 0xc));
  uVar2 = FUN_0201a5a4(*(undefined4 *)(param_1 + 8),0,0x800,1,0,param_4);
  if (uVar2 < *(uint *)(*(int *)(param_1 + 8) + 0x4a8)) {
    *(uint *)(*(int *)(param_1 + 8) + 0x4a8) = uVar2;
  }
  *(int *)(uVar2 + 8) = param_1;
  *(undefined4 *)(uVar2 + 0x10) = 0;
  *(int *)(uVar2 + 0x14) = iVar1;
  *(uint *)(uVar2 + 0x18) = uVar2 + 0x20;
  iVar3 = 0;
  while (iVar3 < iVar1 + -1) {
    *(uint *)(uVar2 + (iVar3 * *(int *)(param_1 + 0xc) & 0xfffffffcU) + 0x20) =
         uVar2 + 0x20 + ((iVar3 + 1) * *(int *)(param_1 + 0xc) & 0xfffffffcU);
    iVar3 = iVar3 + 1;
  }
  *(undefined4 *)(uVar2 + ((iVar1 + -1) * *(int *)(param_1 + 0xc) & 0xfffffffcU) + 0x20) = 0;
  FUN_02037ed8(*(int *)(param_1 + 8) + 0x4a0,uVar2);
  return uVar2;
}

