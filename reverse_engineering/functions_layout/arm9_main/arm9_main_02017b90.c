
/* JUS-CLASS jus_TagPL4R::jus_TagPL4R [class-type-tag] stores vtable 02096d78 into *this
   (constructor) */

int * jus_TagPL4R::jus_TagPL4R(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = (**(code **)*DAT_020a1044)(DAT_020a1044,0x10,*(code **)*DAT_020a1044,param_4,param_4);
  jus_TagPAL4::jus_TagPAL4(param_1,*(undefined2 *)(param_2 + 8),*(undefined2 *)(param_2 + 10),uVar1)
  ;
  *param_1 = (int)&vftable;
  piVar2 = (int *)(**(code **)(*param_1 + 100))();
  (**(code **)(*piVar2 + 0xc))();
  (**(code **)(*param_1 + 0x48))(param_1,param_2);
  return param_1;
}

