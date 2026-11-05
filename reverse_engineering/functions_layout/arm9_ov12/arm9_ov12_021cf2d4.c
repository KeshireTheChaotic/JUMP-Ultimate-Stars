
void FUN_021cf2d4(int param_1,undefined4 *param_2,undefined1 param_3)

{
  *param_2 = 0x5f564354;
  *(undefined1 *)((int)param_2 + 5) = 0x10;
  *(undefined1 *)((int)param_2 + 6) = param_3;
  *(undefined1 *)(param_2 + 2) = DAT_021d7be0;
  *(undefined1 *)((int)param_2 + 9) = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)((int)param_2 + 10) = 0;
  *(undefined1 *)((int)param_2 + 0xb) = DAT_021d7be0;
  param_2[3] = 0;
  return;
}

