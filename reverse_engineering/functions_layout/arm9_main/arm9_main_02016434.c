
/* JUS-CLASS jus_Class_02096f88::jus_Class_02096f88 [class-default] stores vtable 02096f88 into
   *this (constructor) */

undefined4 *
jus_Class_02096f88::jus_Class_02096f88
          (undefined4 *param_1,undefined2 param_2,undefined2 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  
  *param_1 = &jus_Class_02094268::vftable;
  *(undefined2 *)(param_1 + 1) = 1;
  *param_1 = &vftable;
  *(undefined2 *)(param_1 + 2) = param_2;
  *(undefined2 *)((int)param_1 + 10) = param_3;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)((int)param_1 + 0x11) = 1;
  param_1[5] = param_4;
  param_1[7] = 0;
  if (param_1[5] == 0) {
    param_1[3] = 0;
  }
  else {
    iVar1 = (**(code **)(*param_4 + 0x2c))();
    iVar2 = (**(code **)(*param_4 + 0x28))();
    param_1[3] = iVar1 + iVar2;
    (**(code **)(*(int *)param_1[5] + 8))();
  }
  DAT_020a0e1c = DAT_020a0e1c + 1;
  return param_1;
}

