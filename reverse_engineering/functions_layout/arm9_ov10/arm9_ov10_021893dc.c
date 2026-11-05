
undefined4 FUN_021893dc(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_28 [20];
  
  puVar3 = (undefined1 *)*param_1;
  iVar1 = FUN_02004cec(param_2,s__error__021a648c,7);
  if (iVar1 != 0) {
    return 0;
  }
  iVar1 = FUN_02189328(param_2,s__err__021a6494,auStack_28,0x10);
  if (iVar1 != 0) {
    uVar2 = FUN_02005f14(auStack_28);
    *(undefined4 *)(puVar3 + 0x418) = uVar2;
  }
  iVar1 = FUN_02189328(param_2,s__errmsg__021a649c,puVar3,0x100);
  if (iVar1 == 0) {
    *puVar3 = 0;
  }
  if (param_3 != 0) {
    iVar1 = FUN_02004d40(param_2,s__fatal__021a64a8);
    FUN_02183f3c(param_1,4,iVar1 != 0);
  }
  return 1;
}

