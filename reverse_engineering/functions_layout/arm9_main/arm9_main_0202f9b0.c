
/* JUS-CLASS PropBindInstance_02095200::~PropBindInstance_02095200 [class-instance-name] slot 0/1 of
   vtable 02095200; resets vtables (destructor) */

undefined4 * PropBindInstance_02095200::~PropBindInstance_02095200(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  
  *param_1 = &vftable;
  for (iVar2 = 0; iVar2 < (int)(uint)*(ushort *)((int)param_1 + 10); iVar2 = iVar2 + 1) {
    piVar1 = (int *)(**(code **)(**(int **)(param_1[4] + iVar2 * 4) + 0x18))();
    bVar3 = piVar1 != (int *)&DAT_00000005;
    if (bVar3) {
      piVar1 = *(int **)(param_1[4] + iVar2 * 4);
    }
    if (bVar3 && piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  FUN_0200b254(param_1 + 4);
  iVar2 = FUN_0201a9ec(param_1);
  if (iVar2 == 0) {
    FUN_0201a958(param_1,1);
  }
  return param_1;
}

