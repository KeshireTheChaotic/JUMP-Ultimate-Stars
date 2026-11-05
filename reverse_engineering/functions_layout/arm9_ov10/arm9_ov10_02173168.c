
void FUN_02173168(int *param_1)

{
  if (DAT_021a7348 == 0) {
    FUN_020517fc(param_1,0,0x1c4);
  }
  FUN_02051890(DAT_021a7348 + 0x1008,param_1,0x1c4);
  if ((*param_1 < 20000) || (29999 < *param_1)) {
    *param_1 = 0x5206;
  }
  if (0x4e83 < *param_1) {
    *param_1 = -*param_1;
  }
  return;
}

