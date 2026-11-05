
/* JUS-CLASS jus_Class_0209b18c::jus_Class_0209b18c [class-default] stores vtable 0209b18c into
   *this (constructor) */

void jus_Class_0209b18c::jus_Class_0209b18c
               (undefined4 *param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  
  *param_1 = &vftable;
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 2;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[9] = 0;
  param_1[10] = param_5;
  param_1[0xb] = param_4;
  param_1[7] = 1;
  if (3 < param_3) {
    param_1[7] = param_1[7] | 2;
  }
  if ((param_3 == 1 || param_3 == 3) || param_3 == 5) {
    param_1[7] = param_1[7] | 4;
  }
  uVar1 = param_1[7] & 0xf8000007 | ((1 << (param_4 + 1U & 0xff)) - 1U & 0xff) << 3 |
          ((1 << (param_5 + 1U & 0xff)) - 1U & 0xffff) << 0xb;
  param_1[7] = uVar1;
  param_1[8] = uVar1;
  param_1[7] = 0;
  return;
}

