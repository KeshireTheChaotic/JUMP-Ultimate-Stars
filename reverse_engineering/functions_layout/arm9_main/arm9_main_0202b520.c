
/* JUS-CLASS jus_Class_02096320::jus_Class_02096320 [class-default] stores vtable 02096320 into
   *this (constructor) */

undefined4 * jus_Class_02096320::jus_Class_02096320(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  jus_Class_02095a08::jus_Class_02095a08();
  *param_1 = &vftable;
  FUN_0202b480(param_1 + 0x10);
  param_1[0x13] = *(undefined4 *)(param_2 + 0x4c);
  param_1[0x1c] = *(undefined4 *)(param_2 + 0x70);
  *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)(param_2 + 0x74);
  param_1[0x1e] = *(undefined4 *)(param_2 + 0x78);
  param_1[0x1f] = *(undefined4 *)(param_2 + 0x7c);
  for (uVar2 = 0; uVar2 < (uint)param_1[0x1c]; uVar2 = uVar2 + 1) {
    (**(code **)(**(int **)(*(int *)(param_2 + uVar2 * 4 + 0x50) + 4) + 0xb8))();
    uVar1 = FUN_0202b4f8();
    param_1[uVar2 + 0x14] = uVar1;
  }
  FUN_0202aa08(param_1 + 0x10,param_2 + 0x40);
  return param_1;
}

