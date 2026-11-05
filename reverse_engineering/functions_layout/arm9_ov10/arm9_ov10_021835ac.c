
undefined4 FUN_021835ac(int *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  FUN_02183b94(param_1,iVar1 + 500,s__authadd__021a51f8);
  FUN_02183b94(param_1,iVar1 + 500,s__sesskey__021a50fc);
  FUN_02183b70(param_1,iVar1 + 500,*(undefined4 *)(iVar1 + 0x198));
  FUN_02183b94(param_1,iVar1 + 500,s__fromprofileid__021a5204);
  FUN_02183b70(param_1,iVar1 + 500,*param_2);
  FUN_02183b94(param_1,iVar1 + 500,s__sig__021a5214);
  FUN_02183b94(param_1,iVar1 + 500,param_2[4]);
  FUN_02183b94(param_1,iVar1 + 500,s__final__021a5118);
  return 0;
}

