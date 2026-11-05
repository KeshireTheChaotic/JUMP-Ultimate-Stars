
/* JUS-CLASS ALStreamImp::~ALStreamImp [class-source-file] slot 0/1 of vtable 02094ac4; resets
   vtables (destructor) */

undefined4 * ALStreamImp::~ALStreamImp(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &vftable;
  if ((int *)param_1[0xb] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xb] + 0xc))();
  }
  if (*(char *)(param_1 + 10) == '\0') {
    param_1[8] = 0;
  }
  jus_TagDUMY::jus_TagDUMY(param_1);
  iVar1 = FUN_0201a9ec(param_1);
  if (iVar1 == 0) {
    FUN_0201a958(param_1,1);
  }
  return param_1;
}

