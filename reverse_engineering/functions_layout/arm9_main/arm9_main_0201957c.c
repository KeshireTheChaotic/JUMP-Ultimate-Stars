
/* JUS-CLASS jus_Class_02094c34::~jus_Class_02094c34 [class-default] slot 0/1 of vtable 02094c34;
   resets vtables (destructor) */

undefined4 * jus_Class_02094c34::~jus_Class_02094c34(undefined4 *param_1)

{
  uint uVar1;
  
  *param_1 = &vftable;
  for (uVar1 = 0; uVar1 < (param_1[2] & 0xfffffff) >> 0x19; uVar1 = uVar1 + 1) {
    (**(code **)(*(int *)param_1[uVar1 + 3] + 0xc))();
  }
  if ((int *)param_1[6] != (int *)0x0) {
    (**(code **)(*(int *)param_1[6] + 0xc))();
  }
  return param_1;
}

