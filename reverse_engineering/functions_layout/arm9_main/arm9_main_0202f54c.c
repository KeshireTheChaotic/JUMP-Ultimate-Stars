
/* JUS-CLASS ALCollision_02094f78::~ALCollision_02094f78 [class-source-file] slot 0/1 of vtable
   02094f78; resets vtables (destructor) */

undefined4 * ALCollision_02094f78::~ALCollision_02094f78(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &vftable;
  if ((int *)param_1[5] != (int *)0x0) {
    (**(code **)(*(int *)param_1[5] + 0xc))();
  }
  if ((int *)param_1[6] != (int *)0x0) {
    (**(code **)(*(int *)param_1[6] + 4))();
  }
  iVar1 = FUN_0201a9ec(param_1);
  if (iVar1 == 0) {
    FUN_0201a958(param_1,1);
  }
  return param_1;
}

