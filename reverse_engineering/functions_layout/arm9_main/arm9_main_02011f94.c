
/* JUS-CLASS jus_Class_02097558::jus_Class_02097558 [class-default] stores vtable 02097558 into
   *this (constructor) */

int * jus_Class_02097558::jus_Class_02097558
                (int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_10;
  
  uStack_10 = param_4;
  jus_Class_02095260::jus_Class_02095260();
  *param_1 = (int)&vftable;
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 0x28);
  *(undefined1 *)((int)param_1 + 0x29) = 0;
  DAT_020a0d48 = DAT_020a0d48 + 1;
  FUN_02011990(&uStack_10,param_2);
  (**(code **)(*param_1 + 0x10))(param_1,&uStack_10);
  if (*(char *)(param_2 + 0x29) != '\0') {
    FUN_020123d8(param_1);
  }
  return param_1;
}

