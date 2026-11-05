
/* JUS-CLASS jus_Class_02099cf8::vfunc_24 [class-virtual] slot 24 of vtable 02099cf8 (own slot, not
   inherited) */

void jus_Class_02099cf8::vfunc_24(int param_1)

{
  undefined4 *puVar1;
  
  while (*(int *)(param_1 + 0x48) != *(int *)(param_1 + 0x4c)) {
    (**(code **)**(undefined4 **)(*(int *)(param_1 + 0x54) + 4))();
    puVar1 = (undefined4 *)(*(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x48) * 0x10);
    *(uint *)(param_1 + 0x48) = *(int *)(param_1 + 0x50) - 1U & *(int *)(param_1 + 0x48) + 1U;
    (**(code **)(**(int **)(*(int *)(param_1 + 0x54) + 4) + 4))();
    if (puVar1[2] == 0) {
      FUN_02028644(*puVar1,puVar1[1],puVar1[3]);
    }
    else {
      FUN_02028724(*puVar1,puVar1[1],puVar1[2],puVar1[3]);
    }
  }
  FUN_020282f4(param_1);
  return;
}

