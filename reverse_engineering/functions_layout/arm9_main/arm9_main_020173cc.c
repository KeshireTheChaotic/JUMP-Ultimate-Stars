
/* JUS-CLASS jus_TagPAL8::jus_TagPAL8 [class-type-tag] stores vtable 02096e80 into *this
   (constructor) */

int * jus_TagPAL8::jus_TagPAL8(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = param_4;
  if (param_4 == 0) {
    iVar1 = (**(code **)*DAT_020a1044)(DAT_020a1044,0x100,*(code **)*DAT_020a1044,0,0);
  }
  ::jus_Class_02096f04::jus_Class_02096f04(param_1,param_2,param_3,iVar1);
  *param_1 = (int)&vftable;
  (**(code **)(*param_1 + 0x10))(param_1,(short)param_1[2],*(undefined2 *)((int)param_1 + 10));
  if (param_4 == 0) {
    piVar2 = (int *)(**(code **)(*param_1 + 100))();
    (**(code **)(*piVar2 + 0xc))();
  }
  return param_1;
}

