
/* JUS-SDK INITi_CpuClear32 [structural] crt0 call #2 of 7 in NitroSDK order */

void INITi_CpuClear32(undefined4 param_1,undefined4 *param_2,int param_3)

{
  param_3 = (int)param_2 + param_3;
  for (; (int)param_2 < param_3; param_2 = param_2 + 1) {
    *param_2 = param_1;
  }
  return;
}

