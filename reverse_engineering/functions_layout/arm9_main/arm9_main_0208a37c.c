
void FUN_0208a37c(void)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if ((undefined4 *)(&DAT_0214bebc)[uVar1] != (undefined4 *)0x0) {
      (**(code **)(**(int **)(&DAT_0214bebc)[uVar1] + 0xc))();
      FUN_0202899c((&DAT_0214bebc)[uVar1]);
      (&DAT_0214bebc)[uVar1] = 0;
    }
    if ((int *)(&DAT_0214beac)[uVar1] != (int *)0x0) {
      (**(code **)(*(int *)(&DAT_0214beac)[uVar1] + 8))();
      FUN_02020934((&DAT_0214beac)[uVar1]);
      (&DAT_0214beac)[uVar1] = 0;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 4);
  return;
}

