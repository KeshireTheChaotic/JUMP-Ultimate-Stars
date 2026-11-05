
/* JUS-CLASS jus_Class_02096320::~jus_Class_02096320 [class-default] slot 0/1 of vtable 02096320;
   resets vtables (destructor) */

undefined4 * jus_Class_02096320::~jus_Class_02096320(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  
  *param_1 = &vftable;
  for (uVar2 = 0; uVar2 < (uint)param_1[0x1c]; uVar2 = uVar2 + 1) {
    if (*(int **)(param_1[uVar2 + 0x14] + 4) != (int *)0x0) {
      (**(code **)(**(int **)(param_1[uVar2 + 0x14] + 4) + 8))();
    }
  }
  jus_Class_02095a08::jus_Class_02095a08(param_1);
  iVar1 = FUN_0201a9ec(param_1);
  if (iVar1 == 0) {
    FUN_0201a958(param_1,1);
  }
  return param_1;
}

