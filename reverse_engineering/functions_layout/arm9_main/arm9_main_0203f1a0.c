
/* JUS-CLASS jus_Class_02095c74::jus_Class_02095c74 [class-default] stores vtable 02095c74 into
   *this (constructor) */

undefined4 * jus_Class_02095c74::jus_Class_02095c74(undefined4 *param_1,int param_2)

{
  jus_Class_02095a08::jus_Class_02095a08();
  *param_1 = &vftable;
  FUN_02034bf4(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x48);
  *(undefined1 *)((int)param_1 + 0x49) = *(undefined1 *)(param_2 + 0x49);
  *(undefined2 *)((int)param_1 + 0x4a) = *(undefined2 *)(param_2 + 0x4a);
  *(undefined2 *)(param_1 + 0x13) = *(undefined2 *)(param_2 + 0x4c);
  FUN_0203f1f8(param_1 + 0x10,param_2 + 0x40);
  return param_1;
}

