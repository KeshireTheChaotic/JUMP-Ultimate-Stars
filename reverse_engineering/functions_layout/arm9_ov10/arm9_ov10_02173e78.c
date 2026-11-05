
undefined4 FUN_02173e78(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  
  if (*(int *)(param_1 + 0x19f0) == 0) {
    puVar5 = &DAT_021a3ab0;
  }
  else {
    puVar5 = (undefined *)0x21a3ab4;
  }
  *(int *)(param_1 + 0x19f0) = *(int *)(param_1 + 0x19f0) + 1;
  iVar1 = FUN_0217563c(param_3,param_4,0,0);
  iVar2 = FUN_02004b04(puVar5);
  iVar3 = FUN_02004b04(param_2);
  iVar3 = iVar1 + iVar2 + -2 + iVar3;
  iVar2 = *(int *)(param_1 + 0x19f8);
  iVar4 = *(int *)(param_1 + 0x19fc) - iVar2;
  if (iVar4 < iVar3) {
    iVar2 = FUN_02173d18(param_1,param_1 + 0x19f4,(iVar3 - iVar4) + 1);
    if (iVar2 == 0) {
      return 1;
    }
    iVar2 = *(int *)(param_1 + 0x19f8);
    iVar4 = *(int *)(param_1 + 0x19fc) - iVar2;
  }
  iVar2 = FUN_02052c44(iVar2,iVar4,puVar5,param_2);
  *(int *)(param_1 + 0x19f8) = *(int *)(param_1 + 0x19f8) + iVar2;
  iVar2 = FUN_0217563c(param_3,param_4,*(int *)(param_1 + 0x19f8),
                       (*(int *)(param_1 + 0x19fc) - *(int *)(param_1 + 0x19f8)) + -1);
  if (iVar2 < 0) {
    return 1;
  }
  *(int *)(param_1 + 0x19f8) = *(int *)(param_1 + 0x19f8) + iVar1;
  **(undefined1 **)(param_1 + 0x19f8) = 0;
  return 0;
}

