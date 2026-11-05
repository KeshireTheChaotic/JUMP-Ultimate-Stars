
void FUN_0208a318(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_02028e90(0x208a29d);
  if (piVar1[0x37] == 0) {
    (**(code **)(*piVar1 + 0x10))();
  }
  (&DAT_0214bebc)[param_1] = piVar1[0x37];
  FUN_0202894c((&DAT_0214bebc)[param_1]);
  piVar1 = (int *)FUN_02020aa0(0x208a2c1,param_2);
  if (piVar1[6] == 0) {
    (**(code **)(*piVar1 + 0x14))();
  }
  (&DAT_0214beac)[param_1] = piVar1[6];
  FUN_02020910((&DAT_0214beac)[param_1]);
  return;
}

