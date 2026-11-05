
undefined4 FUN_02185b94(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (0 < *(int *)(iVar1 + 0x448)) {
    FUN_02183b94(param_1,param_2,s__updatepro__sesskey__021a5b24);
    FUN_02183b70(param_1,param_2,*(undefined4 *)(iVar1 + 0x198));
    FUN_02183b94(param_1,param_2,*(undefined4 *)(iVar1 + 0x440));
    FUN_02183b94(param_1,param_2,s__final__021a5934);
    *(undefined4 *)(iVar1 + 0x448) = 0;
  }
  if (0 < *(int *)(iVar1 + 0x458)) {
    FUN_02183b94(param_1,param_2,s__updateui__sesskey__021a5b3c);
    FUN_02183b70(param_1,param_2,*(undefined4 *)(iVar1 + 0x198));
    FUN_02183b94(param_1,param_2,*(undefined4 *)(iVar1 + 0x450));
    FUN_02183b94(param_1,param_2,s__final__021a5934);
    *(undefined4 *)(iVar1 + 0x458) = 0;
  }
  return 0;
}

