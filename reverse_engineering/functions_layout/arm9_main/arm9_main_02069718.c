
undefined4 FUN_02069718(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_02069c44(param_2);
  if (iVar1 == 1) {
    return 0xffffffff;
  }
  if (iVar1 == 2) {
    uVar3 = FUN_02069c98(param_2);
    uVar2 = (undefined4)((ulonglong)uVar3 >> 0x20);
    iVar1 = FUN_02069b0c((int)uVar3,uVar2,*(undefined4 *)(param_1 + 0x24));
    if (iVar1 == 0) {
      return 0;
    }
    uVar2 = FUN_02069af4((int)uVar3,uVar2,*(undefined4 *)(param_1 + 0x24));
    return uVar2;
  }
  if (iVar1 == 3) {
    uVar2 = FUN_02069c94(param_2);
    return uVar2;
  }
  return 0;
}

