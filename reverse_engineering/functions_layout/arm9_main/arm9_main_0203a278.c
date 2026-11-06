
/* JUS-CLASS jus_TagFFL4_Part_02096958::jus_TagFFL4_Part_02096958 [class-owned] stores vtable
   02096958 into *this (constructor) */

undefined4 *
jus_TagFFL4_Part_02096958::jus_TagFFL4_Part_02096958
          (undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*param_2 + 0x60))();
  uVar2 = (**(code **)*DAT_020a1044)(DAT_020a1044,*(undefined2 *)(iVar1 + 8));
  ::jus_Class_02096f04::jus_Class_02096f04
            (param_1,(short)param_2[2],*(undefined2 *)((int)param_2 + 10),uVar2,param_4);
  *param_1 = &vftable;
  param_1[9] = 0x2000;
  return param_1;
}

