
/* JUS-CLASS jus_Class_02098af8::vfunc_56 [class-virtual] slot 56 of vtable 02098af8 (own slot, not
   inherited) */

undefined4 * jus_Class_02098af8::vfunc_56(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)FUN_02038458();
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x1c))(param_1,param_2);
  uVar3 = FUN_0200c954(*puVar2);
  FUN_0200c9e4(0x45800000,uVar3);
  uVar3 = FUN_0200c8e0();
  *puVar1 = uVar3;
  uVar3 = FUN_0200c954(puVar2[1]);
  FUN_0200c9e4(0x45800000,uVar3);
  uVar3 = FUN_0200c8e0();
  puVar1[1] = uVar3;
  uVar3 = FUN_0200c954(puVar2[2]);
  FUN_0200c9e4(0x45800000,uVar3);
  uVar3 = FUN_0200c8e0();
  puVar1[2] = uVar3;
  return puVar1;
}

