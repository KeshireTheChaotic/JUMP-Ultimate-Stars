
undefined4 FUN_02189328(int param_1,char *param_2,int param_3,int param_4)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 == 0) {
    FUN_02002068(s_command____NULL_021a6474,s_gpiUtility_c_021a63bc,0,0x10d);
  }
  if (param_2 == (char *)0x0) {
    FUN_02002068(s_key____NULL_021a63cc,s_gpiUtility_c_021a63bc,0,0x10e);
  }
  if (param_3 == 0) {
    FUN_02002068(s_value____NULL_021a63d8,s_gpiUtility_c_021a63bc,0,0x10f);
  }
  if (param_4 < 1) {
    FUN_02002068(s_len_>_0_021a6484,s_gpiUtility_c_021a63bc,0,0x110);
  }
  cVar1 = *param_2;
  iVar3 = FUN_02004d40(param_1,param_2);
  if (iVar3 == 0) {
    return 0;
  }
  iVar4 = FUN_02004b04(param_2);
  for (iVar5 = 0;
      ((iVar5 < param_4 + -1 && (cVar2 = *(char *)(iVar3 + iVar4 + iVar5), cVar2 != '\0')) &&
      (cVar2 != cVar1)); iVar5 = iVar5 + 1) {
    *(char *)(param_3 + iVar5) = cVar2;
  }
  *(undefined1 *)(param_3 + iVar5) = 0;
  return 1;
}

