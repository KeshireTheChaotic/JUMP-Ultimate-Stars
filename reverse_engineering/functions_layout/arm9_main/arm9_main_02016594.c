
undefined4 FUN_02016594(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)FUN_020334a4(param_1,&PTR_DAT_02093eec,4,0,param_4);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  uVar2 = FUN_02016628(piVar1,0);
  (**(code **)(*piVar1 + 0xc))();
  return uVar2;
}

