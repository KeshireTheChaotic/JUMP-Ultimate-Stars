
undefined4 FUN_02182cb8(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 auStack_dc8 [3508];
  
  iVar1 = *param_1;
  FUN_02189478(auStack_dc8,param_4,0xdad);
  FUN_02183b94(param_1,iVar1 + 500,&DAT_021a5164);
  FUN_02183b70(param_1,iVar1 + 500,param_3);
  FUN_02183b94(param_1,iVar1 + 500,s__sesskey__021a50fc);
  FUN_02183b70(param_1,iVar1 + 500,*(undefined4 *)(iVar1 + 0x198));
  FUN_02183b94(param_1,iVar1 + 500,&DAT_021a516c);
  FUN_02183b70(param_1,iVar1 + 500,param_2);
  FUN_02183b94(param_1,iVar1 + 500,s__msg__021a5170);
  FUN_02183b94(param_1,iVar1 + 500,auStack_dc8);
  FUN_02183b94(param_1,iVar1 + 500,s__final__021a5118);
  return 0;
}

