
/* JUS-CLASS jus_Class_02094220::jus_Class_02094220 [class-default] stores vtable 02094220 into
   *this (constructor) */

undefined4 * jus_Class_02094220::jus_Class_02094220(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *param_1 = &jus_Class_02094268::vftable;
  *(undefined2 *)(param_1 + 1) = 1;
  *param_1 = &vftable;
  iVar1 = FUN_0201a228(0x18);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = jus_Class_02093e94::jus_Class_02093e94();
  }
  param_1[2] = uVar2;
  return param_1;
}

