
void FUN_0214cf50(undefined4 *param_1,undefined4 param_2,short param_3,int param_4,
                 undefined2 param_5)

{
  if (*(short *)(param_1 + 0x14) == param_3) {
    return;
  }
  FUN_0214cfbc();
  *(short *)(param_1 + 0x14) = param_3;
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 0x17) = 0;
  if (param_4 == 0) {
    FUN_02028384(*(undefined4 *)(param_1[3] + 4),FUN_0214d064);
  }
  else {
    FUN_0214d064(param_1[3]);
  }
  *(undefined2 *)((int)param_1 + 0x52) = param_5;
  return;
}

