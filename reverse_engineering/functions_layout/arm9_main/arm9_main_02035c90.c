
int * FUN_02035c90(undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)FUN_020325d0(&DAT_020a1d78,param_1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
    FUN_02035c38(piVar1);
    return piVar1;
  }
  piVar1 = (int *)FUN_020334a4(param_1,&PTR_DAT_02093e3c,DAT_02093bf8,0);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)FUN_02016594(param_1);
    if (piVar1 == (int *)0x0) {
      return DAT_020a1054;
    }
    piVar2 = (int *)(**(code **)(*DAT_020a0dfc + 8))();
    (**(code **)(*piVar2 + 0x28))(piVar2,piVar1);
    (**(code **)(*piVar1 + 0xc))();
    FUN_0203263c(piVar2,param_1);
    FUN_020324dc(&DAT_020a1d78,piVar2);
    return piVar2;
  }
  piVar2 = (int *)FUN_02035db0();
  (**(code **)(*piVar1 + 0xc))();
  if (piVar2 == DAT_020a1054) {
    return DAT_020a1054;
  }
  FUN_0203263c(piVar2,param_1);
  FUN_020324dc(&DAT_020a1d78,piVar2);
  return piVar2;
}

