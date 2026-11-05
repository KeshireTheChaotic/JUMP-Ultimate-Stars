
/* JUS-CLASS jus_Class_02094538::~jus_Class_02094538 [class-default] slot 0/1 of vtable 02094538;
   resets vtables (destructor) */

undefined4 * jus_Class_02094538::~jus_Class_02094538(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  *param_1 = &vftable;
  DAT_020a0d88 = DAT_020a0d88 + -1;
  if ((int *)param_1[5] == (int *)0x0) {
    uVar3 = param_1[4];
    piVar1 = (int *)FUN_0201a9ec(uVar3);
    if (piVar1 == (int *)0x0) {
      piVar1 = (int *)FUN_0201a958(uVar3,1);
    }
  }
  else {
    piVar1 = (int *)(**(code **)(*(int *)param_1[5] + 0xc))();
  }
  iVar2 = param_1[6];
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 4) = 0;
    piVar1 = (int *)param_1[6];
  }
  if (iVar2 != 0 && piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return param_1;
}

