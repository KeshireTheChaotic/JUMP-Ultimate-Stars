
undefined4 FUN_02068740(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((*(short *)(param_1 + 0xd16) != 0) && (iVar2 = FUN_02068600(2), iVar2 != 0)) {
    uVar1 = FUN_02068c80(0);
    *(undefined1 *)(param_1 + 0xd11) = uVar1;
    return 5;
  }
  if (*(byte *)(param_1 + 0xd0b) >> 4 == 0) {
    uVar3 = FUN_02068aa0(param_1);
    return uVar3;
  }
  return 6;
}

