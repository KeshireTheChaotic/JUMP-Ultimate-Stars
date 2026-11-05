
/* JUS-CLASS jus_Class_0209cac0::vfunc_57 [class-virtual] slot 57 of vtable 0209cac0 (own slot, not
   inherited) */

undefined2
jus_Class_0209cac0::vfunc_57(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined4 uStack_10;
  
  if (param_1[0x15] == 0) {
    return 0;
  }
  puVar3 = (undefined2 *)param_1[0x16];
  uStack_10 = param_4;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0xa0))();
  uStack_10 = *puVar1;
  while (iVar2 = FUN_02016314(&uStack_10,*puVar3), iVar2 != 0) {
    puVar3 = puVar3 + -2;
  }
  while (iVar2 = FUN_02016328(puVar3[2],&uStack_10), iVar2 != 0) {
    puVar3 = puVar3 + 2;
  }
  return puVar3[1];
}

