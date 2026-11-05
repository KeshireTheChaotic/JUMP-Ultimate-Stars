
/* JUS-CLASS jus_TagPL4R::jus_TagPL4R [class-type-tag] stores vtable 02096d78 into *this
   (constructor) */

int * jus_TagPL4R::jus_TagPL4R(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = param_4;
  if (param_4 == 0) {
    iVar1 = (**(code **)*DAT_020a1044)(DAT_020a1044,0x10,*(code **)*DAT_020a1044,0,0);
  }
  jus_TagPAL4::jus_TagPAL4(param_1,param_2,param_3,iVar1);
  *param_1 = (int)&vftable;
  if (param_4 == 0) {
    piVar2 = (int *)(**(code **)(*param_1 + 100))();
    (**(code **)(*piVar2 + 0xc))();
  }
  return param_1;
}

