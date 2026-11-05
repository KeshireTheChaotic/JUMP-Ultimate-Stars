
/* JUS-CLASS jus_Class_02098c48::vfunc_09 [class-virtual] slot 9 of vtable 02098c48 (own slot, not
   inherited) */

void jus_Class_02098c48::vfunc_09(undefined4 param_1,int param_2,short *param_3)

{
  short sVar1;
  int *piVar2;
  
  sVar1 = param_3[1];
  piVar2 = *(int **)(param_2 + 0x50);
  piVar2[3] = (int)*param_3 << 0xc;
  piVar2[4] = (int)sVar1 << 0xc;
  if (*(byte *)(piVar2 + 9) != (*(byte *)(piVar2 + 9) | 1)) {
    (**(code **)(*piVar2 + 0x18))();
  }
  *(byte *)(piVar2 + 9) = *(byte *)(piVar2 + 9) | 0x31;
  return;
}

