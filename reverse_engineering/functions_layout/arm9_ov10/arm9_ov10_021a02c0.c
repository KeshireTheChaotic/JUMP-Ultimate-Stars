
int FUN_021a02c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  FUN_020517fc(param_1,0,0xf74,param_4,param_4);
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x8a1) = 1;
  }
  iVar3 = 0;
  do {
    uVar2 = FUN_021a0364(&LAB_021a04c8,iVar3);
    *(undefined4 *)(param_1 + iVar3 * 4 + 0x8a4) = uVar2;
    uVar2 = FUN_021a0390(FUN_021a0500,iVar3);
    iVar1 = iVar3 * 4;
    iVar3 = iVar3 + 1;
    *(undefined4 *)(param_1 + iVar1 + 0x8b4) = uVar2;
  } while (iVar3 < 4);
  uVar2 = FUN_021a0364(FUN_021a05ec,0);
  *(undefined4 *)(param_1 + 0xb08) = uVar2;
  uVar2 = FUN_021a0390(FUN_021a0608,0);
  *(undefined4 *)(param_1 + 0xb0c) = uVar2;
  FUN_021a0458(param_1);
  return param_1;
}

