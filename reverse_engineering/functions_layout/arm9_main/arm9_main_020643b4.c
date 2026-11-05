
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_020643b4(undefined4 param_1)

{
  int iVar1;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined1 auStack_54 [76];
  
  FUN_02064744(auStack_54);
  iVar1 = FUN_02064664(auStack_54,param_1,0,&local_60);
  if (iVar1 == 0) {
    return 0;
  }
  DAT_020afb14 = local_60;
  _DAT_020afb18 = uStack_5c;
  DAT_020afb1c = local_58;
  return 1;
}

