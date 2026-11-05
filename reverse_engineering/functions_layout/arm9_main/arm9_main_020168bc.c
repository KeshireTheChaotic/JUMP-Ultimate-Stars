
/* JUS-CLASS jus_Class_02096f88::jus_Class_02096f88 [class-default] stores vtable 02096f88 into
   *this (constructor) */

undefined4 * jus_Class_02096f88::jus_Class_02096f88(undefined4 *param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = &DAT_020a0c34;
  *param_1 = &vftable;
  DAT_020a0e1c = DAT_020a0e1c + -1;
  iVar3 = param_1[3];
  if (iVar3 != 0) {
    puVar1 = (undefined *)(uint)*(byte *)(param_1 + 4);
  }
  if ((iVar3 != 0 && puVar1 != (undefined *)0x0) && (iVar2 = FUN_0201a9ec(iVar3), iVar2 == 0)) {
    FUN_0201a958(iVar3,1);
  }
  if ((int *)param_1[5] != (int *)0x0) {
    (**(code **)(*(int *)param_1[5] + 0xc))();
  }
  if ((int *)param_1[7] != (int *)0x0) {
    (**(code **)(*(int *)param_1[7] + 4))();
  }
  return param_1;
}

