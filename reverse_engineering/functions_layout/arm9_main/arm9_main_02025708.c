
/* JUS-CLASS CommonWindow_Part_020945fc::CommonWindow_Part_020945fc [class-owned] stores vtable
   020945fc into *this (constructor) */

undefined4 * CommonWindow_Part_020945fc::CommonWindow_Part_020945fc(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  
  *param_1 = &jus_Class_02094268::vftable;
  *(undefined2 *)(param_1 + 1) = 1;
  *param_1 = &vftable;
  param_1[4] = 0;
  param_1[5] = param_2;
  param_1[6] = 1;
  param_1[7] = 0;
  puVar1 = (undefined4 *)FUN_0201a228((param_2 + -1) * 4 + 0x10);
  param_1[2] = puVar1;
  *puVar1 = 0;
  *(undefined4 *)(param_1[2] + 4) = 0;
  *(undefined4 *)(param_1[2] + 8) = 0;
  param_1[3] = param_1[2];
  return param_1;
}

