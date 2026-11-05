
undefined4 FUN_02173f34(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = FUN_02004b04(param_3);
  iVar3 = FUN_02004b04(s__s___s_021a3abc);
  iVar4 = FUN_02004b04(param_2);
  iVar2 = iVar2 + iVar3 + -4 + iVar4;
  iVar3 = *(int *)(param_1 + 0x19fc) - *(int *)(param_1 + 0x19f8);
  if ((iVar3 < iVar2 + 1) &&
     (iVar3 = FUN_02173d18(param_1,(undefined4 *)(param_1 + 0x19f4),(iVar2 - iVar3) + 1), iVar3 == 0
     )) {
    return 1;
  }
  iVar3 = FUN_02004d40(*(undefined4 *)(param_1 + 0x19f4),&DAT_021a39b4);
  iVar4 = iVar3 + 2;
  uVar1 = *(undefined1 *)(iVar3 + 2);
  iVar3 = FUN_02004b04(iVar4);
  FUN_02002450(iVar4 + iVar2,iVar4,iVar3 + 1);
  iVar3 = FUN_02052c44(iVar4,iVar2 + 1,s__s___s_021a3abc,param_2,param_3);
  *(undefined1 *)(iVar4 + iVar3) = uVar1;
  *(int *)(param_1 + 0x19f8) = *(int *)(param_1 + 0x19f8) + iVar2;
  return 0;
}

