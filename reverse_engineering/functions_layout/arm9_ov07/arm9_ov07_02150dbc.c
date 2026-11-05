
void FUN_02150dbc(int param_1)

{
  if (DAT_0216ad6c == (int *)0x0) {
    return;
  }
  if (DAT_0216ad6c[1] != param_1) {
    return;
  }
  if ((int *)*DAT_0216ad6c != (int *)0x0) {
    (**(code **)(*(int *)*DAT_0216ad6c + 0xc))();
  }
  FUN_0201b244(DAT_0216ad6c);
  DAT_0216ad6c = (int *)0x0;
  return;
}

