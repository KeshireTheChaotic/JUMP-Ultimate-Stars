
/* JUS-CLASS jus_Class_0209358c::~jus_Class_0209358c [class-default] slot 0/1 of vtable 0209358c;
   resets vtables (destructor) */

undefined4 *
jus_Class_0209358c::~jus_Class_0209358c
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = &vftable;
  iVar2 = param_1[2];
  if (iVar2 != 0) {
    iVar3 = iVar2 << 3;
    do {
      iVar3 = iVar3 + -8;
      pcVar1 = *(code **)(param_1[1] + iVar3);
      iVar2 = iVar2 + -1;
      (*pcVar1)(0,param_1,*(undefined4 *)(param_1[1] + iVar3 + 4),pcVar1,param_4);
    } while (iVar2 != 0);
  }
  FUN_02002018(param_1[6]);
  FUN_02002018(param_1[4]);
  FUN_02002018(param_1[1]);
  return param_1;
}

