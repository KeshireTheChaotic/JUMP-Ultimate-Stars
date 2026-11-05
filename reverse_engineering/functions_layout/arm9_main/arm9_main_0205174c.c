
/* JUS-SDK MIi_CpuClear32 [behavioral] 2 identical copies; chosen copy sits between identified MIi_
   functions */

void MIi_CpuClear32(undefined4 param_1,undefined4 *param_2,int param_3)

{
  param_3 = (int)param_2 + param_3;
  for (; (int)param_2 < param_3; param_2 = param_2 + 1) {
    *param_2 = param_1;
  }
  return;
}

