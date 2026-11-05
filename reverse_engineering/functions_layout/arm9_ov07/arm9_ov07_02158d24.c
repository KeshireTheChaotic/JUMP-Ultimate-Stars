
void FUN_02158d24(int param_1)

{
  int *piVar1;
  
  piVar1 = DAT_0216ad78;
  if (DAT_0216ad78 == (int *)0x0) {
    return;
  }
  if ((int *)*DAT_0216ad78 != (int *)0x0) {
    (**(code **)(*(int *)*DAT_0216ad78 + 8))();
  }
  FUN_0201b244(piVar1);
  if (param_1 != 0) {
    FUN_02086d30();
  }
  DAT_0216ad78 = (int *)0x0;
  return;
}

