
void FUN_02157488(int *param_1,uint param_2,int param_3,short param_4)

{
  if (-1 < param_3) {
    *(short *)(param_1[1] + *(int *)(*param_1 + (param_2 & 0xffff) * 4) + param_3 * 2) =
         param_4 + 0x30;
  }
  return;
}

