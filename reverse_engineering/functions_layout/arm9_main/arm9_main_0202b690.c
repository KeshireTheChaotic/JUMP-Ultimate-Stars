
/* JUS-CLASS jus_Class_02096320::jus_Class_02096320 [class-default] stores vtable 02096320 into
   *this (constructor) */

undefined4 * jus_Class_02096320::jus_Class_02096320(undefined4 *param_1)

{
  uint uVar1;
  
  *param_1 = &vftable;
  for (uVar1 = 0; uVar1 < (uint)param_1[0x1c]; uVar1 = uVar1 + 1) {
    if (*(int **)(param_1[uVar1 + 0x14] + 4) != (int *)0x0) {
      (**(code **)(**(int **)(param_1[uVar1 + 0x14] + 4) + 8))();
    }
  }
  jus_Class_02095a08::jus_Class_02095a08(param_1);
  return param_1;
}

