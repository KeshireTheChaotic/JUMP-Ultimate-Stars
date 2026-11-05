
/* JUS-CLASS jus_Class_02096c70::vfunc_09 [class-virtual] slot 9 of vtable 02096c70 (own slot, not
   inherited) */

void jus_Class_02096c70::vfunc_09(int param_1,int param_2,int param_3,undefined4 param_4)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(int **)(param_1 + 0x20) + 0x24);
  (*pcVar1)(*(int **)(param_1 + 0x20),param_2 + *(short *)(param_1 + 0x24),
            param_3 + *(short *)(param_1 + 0x26),pcVar1,param_4);
  return;
}

