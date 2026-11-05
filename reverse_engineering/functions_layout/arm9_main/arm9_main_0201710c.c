
void FUN_0201710c(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)FUN_0203341c(param_2,0,0);
  piVar2 = (int *)FUN_02029730(piVar1,0);
  (**(code **)(*param_1 + 0x6c))(param_1,piVar2);
  (**(code **)(*piVar2 + 0xc))();
  (**(code **)(*piVar1 + 0xc))();
  return;
}

