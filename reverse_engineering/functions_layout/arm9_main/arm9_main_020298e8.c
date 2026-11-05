
/* JUS-CLASS jus_Class_02094538::jus_Class_02094538 [class-default] stores vtable 02094538 into
   *this (constructor) */

undefined4 *
jus_Class_02094538::jus_Class_02094538
          (undefined4 *param_1,int *param_2,undefined2 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  *param_1 = &jus_Class_02094268::vftable;
  *(undefined2 *)(param_1 + 1) = 1;
  *param_1 = &vftable;
  *(undefined2 *)(param_1 + 2) = param_3;
  *(undefined1 *)((int)param_1 + 0xe) = 0;
  *(undefined1 *)((int)param_1 + 0xf) = 0;
  param_1[5] = param_2;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  iVar1 = (**(code **)(*param_2 + 0x2c))();
  iVar2 = (**(code **)(*param_2 + 0x28))();
  param_1[4] = iVar1 + iVar2 + param_4;
  (**(code **)(*param_2 + 8))();
  DAT_020a0d88 = DAT_020a0d88 + 1;
  FUN_02029dc4(param_1);
  *(undefined1 *)(param_1 + 7) = 1;
  *(undefined1 *)((int)param_1 + 0xf) = 0;
  return param_1;
}

