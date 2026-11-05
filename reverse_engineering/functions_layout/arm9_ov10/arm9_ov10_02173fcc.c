
undefined4 FUN_02173fcc(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  if (*(int *)(param_1 + 0x1008) == 0) {
    pcVar4 = s_POST___s_HTTP_1_0_Content_type__a_021a3ac8;
  }
  else {
    pcVar4 = s_GET___s_HTTP_1_0_Host___s_021a3b1c;
  }
  iVar1 = FUN_02004b04(*(undefined4 *)(param_1 + 0x1124));
  iVar2 = FUN_02004b04(pcVar4);
  iVar3 = FUN_02004b04(*(undefined4 *)(param_1 + 0x1128));
  iVar1 = FUN_02173db8(param_1,param_1 + 0x19f4,iVar1 + iVar2 + iVar3 + 0x3fc);
  if (iVar1 == 1) {
    iVar1 = FUN_02052c44(*(undefined4 *)(param_1 + 0x19f8),*(undefined4 *)(param_1 + 0x1a00),pcVar4,
                         *(undefined4 *)(param_1 + 0x1128),*(undefined4 *)(param_1 + 0x1124));
    *(int *)(param_1 + 0x19f8) = *(int *)(param_1 + 0x19f8) + iVar1;
    return 0;
  }
  return 1;
}

