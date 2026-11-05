
/* JUS-CLASS jus_Class_02094c34::~jus_Class_02094c34 [class-default] slot 0/1 of vtable 02094c34;
   resets vtables (destructor) */

undefined4 * jus_Class_02094c34::~jus_Class_02094c34(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  
  *param_1 = &vftable;
  for (uVar2 = 0; uVar2 < (param_1[2] & 0xfffffff) >> 0x19; uVar2 = uVar2 + 1) {
    (**(code **)(*(int *)param_1[uVar2 + 3] + 0xc))();
  }
  if ((int *)param_1[6] != (int *)0x0) {
    (**(code **)(*(int *)param_1[6] + 0xc))();
  }
  iVar1 = FUN_0201a9ec(param_1);
  if (iVar1 == 0) {
    FUN_0201a958(param_1,1);
  }
  return param_1;
}

