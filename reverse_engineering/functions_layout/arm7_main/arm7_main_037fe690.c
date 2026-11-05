
/* JUS-SDK MIi_CpuCopy32 [behavioral] unique function with this exact loop: MIi_CpuCopy32 */

void MIi_CpuCopy32(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  
  param_3 = (int)param_2 + param_3;
  for (; (int)param_2 < param_3; param_2 = param_2 + 1) {
    uVar1 = *param_1;
    param_1 = param_1 + 1;
    *param_2 = uVar1;
  }
  return;
}

